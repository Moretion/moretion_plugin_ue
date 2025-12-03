// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include <MotionLib.h>
#include "MotionData.generated.h"

/**
	������������
 */
USTRUCT()
struct MOTIONSUIT_API FMotionData
{
	GENERATED_BODY()

public:
	FMotionData();
	FMotionData(TSharedPtr<FJsonObject> jsonObject);

	FVector GetCoordinate();
	FQuat GetBoneData(EMotionBoneEnum bone);
	bool IsUsable();
	FString GetActorName();
	ERotatingOrder GetRotatingOrder();

private:
	FVector coordinate;
	TMap<EMotionBoneEnum, FQuat> dataMap;		//�洢���Ǳ�׼ģ�͵Ĺ���������Ԫ��
	FString actorName;
	ERotatingOrder rotatingOrder;
	void SetRotateOrder(FString orderStr);
};
