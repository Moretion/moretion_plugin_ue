// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "../Source/Runtime/Core/Public/Containers/Queue.h"
#include "../Source/Runtime/Core/Public/HAL/Runnable.h"
#include "../Source/Runtime/Sockets/Public/Sockets.h"
#include "Networking.h"
#include <MotionData.h>

class MOTIONSUIT_API ThreadDispatcher : public FRunnable
{
public:
	ThreadDispatcher(const FString& address, int32 port, bool useUdp, bool logMessage);
	~ThreadDispatcher();

	virtual bool Init() override;		//��ʼ��
	virtual uint32 Run() override;		//��ȡ
	virtual void Stop() override;		//ֹͣ

private:

    FString address;
    int port;
	bool udp = false;
	bool shouldStop = false;
	bool connected = false;
	bool logMessage = false;
	TArray<uint8> receiveData;		//Bytes�����ݴ�

    FSocket* recvSocket;
    void NewData(int32 BytesRead);

	//TCP
    void TcpRecv();

	//UDP
    void UdpRecv();
};