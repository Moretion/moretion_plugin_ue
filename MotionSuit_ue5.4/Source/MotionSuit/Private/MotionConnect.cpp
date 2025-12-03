#include "MotionConnect.h"
#include "UObject/UObjectIterator.h"
#include <mutex>
#include <Interfaces/IPv4/IPv4Address.h>
#include <SocketSubsystem.h>

// Sets default values
AMotionConnect::AMotionConnect()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void AMotionConnect::BeginPlay()
{
	Super::BeginPlay();
}

void AMotionConnect::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	if (threadConnect)
	{
		td->Stop();
		threadConnect->Kill(true);
		delete threadConnect;
		threadConnect = nullptr;
	}
}

// Called every frame
void AMotionConnect::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AMotionConnect::TryConnectServer(const FString& address, int32 port, bool useUdp, bool logMessage)
{
	FIPv4Address IPAddress;
	FIPv4Address::Parse(*address, IPAddress);//�������IPStrתΪIPv4��ַ

	bool isValid;
	//����һ��addr���ip��ַ�Ͷ˿�
	TSharedPtr<FInternetAddr> addr = ISocketSubsystem::Get(PLATFORM_SOCKETSUBSYSTEM)->CreateInternetAddr();
	addr->SetIp(*address, isValid);
	addr->SetPort(port);
	UE_LOG(LogTemp, Log, TEXT("TryConnectServer"));

	if (!isValid) {
		UE_LOG(LogTemp, Warning, TEXT("Please check your address!"));
		return;
	}

	//����˭�߳�
	td = new ThreadDispatcher(address, port, useUdp, logMessage);
	UpdateTextureDele = FTimerDelegate::CreateUObject(this, &AMotionConnect::ThreadCreate);
	GetWorld()->GetTimerManager().SetTimer(CountdownTimerHandle, UpdateTextureDele, 0.001f, false);
}

void AMotionConnect::ThreadCreate()
{
	if (threadConnect)
		return;

	threadConnect = FRunnableThread::Create(td, TEXT("Socket Thread"));//�����̲߳�����
}