// Fill out your copyright notice in the Description page of Project Settings.

#include "ModelController.h"
#include "..\Source\Runtime\Engine\Classes\Engine\World.h"
#include "UObject/UObjectIterator.h"
#include <DataManager.h>

// Sets default values
AModelController::AModelController()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	ModelMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("ModelMesh"));
}

// Called when the game starts or when spawned
void AModelController::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void AModelController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	//Move();
}

void AModelController::ToCoordinate(FVector Coordinate)
{
	TargetCoordinate = Coordinate;
	GetWorld()->GetTimerManager().SetTimer(TimerHandle, this, &AModelController::SetModelCoordinate, 0.02f);
}

void AModelController::SetMoveRate(float NewMoveRate)
{
	MoveRate = NewMoveRate;
}

void AModelController::SetModelOrientation(EModelOrientation ModelOrientation)
{
	//Ĭ�ϳ���Y
	switch (ModelOrientation)
	{
	case EModelOrientation::X:
		this->SetActorRotation(FRotator(0, -90, 0));
		break;

	case EModelOrientation::X_:
		this->SetActorRotation(FRotator(0, 90, 0));
		break;


	case EModelOrientation::Y_:
		this->SetActorRotation(FRotator(0, 180, 0));
		break;

	default:	//Ĭ��ΪX
		break;
	}
}

void AModelController::SetCrotchCoordinate(FVector coordinate)
{
	crotchCoordinate = coordinate;
}

void AModelController::Move()
{
	this->SetActorLocation(GetCoordinate() * MoveRate * 100);
}

FVector AModelController::GetCoordinate()
{
	FMotionData* data = UDataManager::GetInstance()->GetMotionData(ActorName);
	return  data && data->IsUsable() ? data->GetCoordinate() : FVector::ZeroVector;
}

void AModelController::SetModelCoordinate()
{
	this->SetActorLocation(TargetCoordinate);
	GetWorld()->GetTimerManager().ClearTimer(TimerHandle);
}
