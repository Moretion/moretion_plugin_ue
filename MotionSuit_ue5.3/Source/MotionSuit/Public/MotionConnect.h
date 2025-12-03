// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include <ThreadDispatcher.h>
#include "..\Source\Runtime\Engine\Public\TimerManager.h"
#include "MotionConnect.generated.h"

UCLASS()
class MOTIONSUIT_API AMotionConnect : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AMotionConnect();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:

	UFUNCTION(BlueprintCallable, Category = "VeinSocket")	//���ӷ���
	void TryConnectServer(const FString& address = TEXT("127.0.0.1"), int32 port = 6666, bool useUdp = false, bool logMessage = false);

private:

	/*---------------------Socket---------------------*/
	FRunnableThread* threadConnect;		//�̹߳���	FReceiveThread
	ThreadDispatcher* td;					//�̶߳���

	//��ʱ���ߺ�ʱ��ί��(ģ��C#Э��)
	FTimerHandle					CountdownTimerHandle;
	FTimerDelegate					UpdateTextureDele;

	void ThreadCreate();
};
