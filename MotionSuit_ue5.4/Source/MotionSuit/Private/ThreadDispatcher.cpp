// Fill out your copyright notice in the Description page of Project Settings.


#include "ThreadDispatcher.h"
#include <SocketSubsystem.h>
#include <Common/UdpSocketBuilder.h>
#include <MotionLib.h>
#include <DataManager.h>
#include "..\Source\Runtime\Core\Public\Containers\StringConv.h"
#include "..\Source\Runtime\Json\Public\Serialization\JsonReader.h"
#include "..\Source\Runtime\Core\Public\Templates\SharedPointer.h"
#include "..\Source\Runtime\Json\Public\Serialization\JsonSerializer.h"
#include "..\Source\Runtime\Json\Public\Dom\JsonObject.h"

ThreadDispatcher::ThreadDispatcher(const FString& address, int32 port, bool useUdp, bool logMessage)
{
	this->address = address;
	this->port = port;
	this->udp = useUdp;
	this->logMessage = logMessage;
}

ThreadDispatcher::~ThreadDispatcher() {}

bool ThreadDispatcher::Init()
{
	shouldStop = false;

	UDataManager::GetInstance()->ClearMotionDatas();
	return true;
}

uint32 ThreadDispatcher::Run()
{
	FPlatformProcess::Sleep(0.03f);	//��ʱ��֤��ʼ�����
	UE_LOG(LogTemp, Log, TEXT("Thead start run."));

	if (udp)
		UdpRecv();
	else
		TcpRecv();

	return 1;
}

void ThreadDispatcher::Stop()
{
	shouldStop = true;
	if (recvSocket)
	{
		recvSocket->Close();
		ISocketSubsystem::Get(PLATFORM_SOCKETSUBSYSTEM)->DestroySocket(recvSocket);
		recvSocket = nullptr;
	}
}

void ThreadDispatcher::TcpRecv()
{
	// �����׽���
	recvSocket = ISocketSubsystem::Get(PLATFORM_SOCKETSUBSYSTEM)->CreateSocket(NAME_Stream, TEXT("TcpClient"));

	if (!recvSocket)
	{
		UE_LOG(LogTemp, Error, TEXT("RecvSocket is null."));
		return;
	}
	recvSocket->SetNonBlocking(false);

	// ���ӵ�������
	TSharedRef<FInternetAddr> remoteAddress = ISocketSubsystem::Get(PLATFORM_SOCKETSUBSYSTEM)->CreateInternetAddr();
	bool isValid;
	remoteAddress->SetIp(*address, isValid);
	remoteAddress->SetPort(port);

	if (!isValid)
	{
		UE_LOG(LogTemp, Error, TEXT("Address is not vaild."));
		return;
	}

	if (!recvSocket->Connect(*remoteAddress))
	{
		UE_LOG(LogTemp, Error, TEXT("Tcp fail to connect %s:%d."), *address, port);
		return;
	}

	FPlatformProcess::Sleep(0.1f);

	// ���ӳɹ�����ʼ��������
	uint32 size;
	while (!shouldStop)
	{
		if (!recvSocket->HasPendingData(size))
			continue;

		receiveData.SetNumUninitialized(FMath::Min(size, 65507u));
		int32 bytesRead = 0;
		if (recvSocket->Recv(receiveData.GetData(), receiveData.Num(), bytesRead))
			NewData(bytesRead);
	}
	UE_LOG(LogTemp, Log, TEXT("Tcp stop."));
}

void ThreadDispatcher::UdpRecv()
{
	// ����һ��UDP�׽���
	recvSocket = FUdpSocketBuilder(TEXT("UdpReceiver"))
		.BoundToAddress(FIPv4Address::Any)
		.BoundToPort(port)
		.WithBroadcast()
		.Build();

	if (!recvSocket)
	{
		UE_LOG(LogTemp, Error, TEXT("RecvSocket is null."));
		return;
	}
	FPlatformProcess::Sleep(0.1f);

	// ��ʼ��������
	uint32 size;
	while (!shouldStop)
	{
		if (!recvSocket->HasPendingData(size))
			continue;

		receiveData.SetNumUninitialized(FMath::Min(size, 65507u));
		int32 bytesRead = 0;
		TSharedRef<FInternetAddr> Sender = ISocketSubsystem::Get(PLATFORM_SOCKETSUBSYSTEM)->CreateInternetAddr();
		if (recvSocket->RecvFrom(receiveData.GetData(), receiveData.Num(), bytesRead, *Sender))
			NewData(bytesRead);
	}
	UE_LOG(LogTemp, Log, TEXT("Udp stop."));
}

void ThreadDispatcher::NewData(int32 BytesRead)
{
	//FString jsonStr = FString(reinterpret_cast<const char*>(receiveData.GetData())).Left(BytesRead);
	FUTF8ToTCHAR converter((const ANSICHAR*)receiveData.GetData(), BytesRead);
	FString jsonStr = FString(converter.Length(), converter.Get());
	connected = true;
	receiveData.Empty();

	if (logMessage)
		UE_LOG(LogTemp, Log, TEXT("Socket Recv: %s"), *jsonStr);

	//���ݰ�actorName����
	/*------------------------------------���ݽ���------------------------------------*/
	TSharedPtr<FJsonObject> jsonObject;
	TSharedRef<TJsonReader<TCHAR>> TheJsonReader = TJsonReaderFactory<TCHAR>::Create(jsonStr);
	bool bFlag = FJsonSerializer::Deserialize(TheJsonReader, jsonObject);	//�Ƿ��ܹ������л����ַ����Ƿ�������
	if (!bFlag)
		return;

	//��������
	TArray<TSharedPtr<FJsonValue>> deviceList = jsonObject->GetArrayField("deviceList");
	if (deviceList.Num() == 0)
		return;

	UDataManager::GetInstance()->Refresh(deviceList);
}
