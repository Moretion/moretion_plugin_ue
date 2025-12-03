// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/SkeletalMeshComponent.h"
#include <MotionLib.h>
#include <MotionConnect.h>
#include "ModelController.generated.h"

UCLASS()
class MOTIONSUIT_API AModelController : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AModelController();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(VisibleDefaultsOnly, Category = Mesh)
	USkeletalMeshComponent* ModelMesh;

	//After BeginPlay, call this function if you want to change the position of the role 
	UFUNCTION(BlueprintCallable, Category = "MotionModel")	//BeginPlay֮���޷����϶���ʽ�ı��ɫλ��   ����Ҫ�ı��ɫλ��������������
		void ToCoordinate(FVector Coordinate);

	//The character's displacement ratio is calculated by comparing the height of the crotch to the height of the standard model call this function if you need to change the displacement ratio
	UFUNCTION(BlueprintCallable, Category = "MotionModel")
	void SetMoveRate(float NewMoveRate);	//��ɫ��λ�Ʊ����ɿ�ĸ߶����׼ģ�͵ĸ߶���ȵó�	����Ҫ�ı�λ�Ʊ�����������������ͨ���� 1 ���ҵ�������
	//����ģ�͡�API�����أ�����޷�ֱ�Ӿ�ȷ����ǰģ�͵��ȳ�

	UFUNCTION(BlueprintCallable, Category = "MotionModel")
	void SetModelOrientation(EModelOrientation ModelOrientation);	//ģ�ͳ�ʼ����

	UPROPERTY(EditAnywhere, Category = "MotionModel")
	float MoveRate = 1;	//�����λ�Ʊ���

	UPROPERTY(EditAnywhere, Category = "MotionModel")
	FString ActorName;

	void SetCrotchCoordinate(FVector coordinate);

private:
	FTimerHandle		TimerHandle;
	FVector				TargetCoordinate;
	FVector				crotchCoordinate;

	void				Move();
	FVector				GetCoordinate();
	void				SetModelCoordinate();
};
