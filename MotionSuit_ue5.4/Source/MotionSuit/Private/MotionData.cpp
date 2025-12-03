// Fill out your copyright notice in the Description page of Project Settings.


#include "MotionData.h"
#include "..\Source\Runtime\Json\Public\Dom\JsonObject.h"

FMotionData::FMotionData(){}

FMotionData::FMotionData(TSharedPtr<FJsonObject> jsonObject)
{
	//����
	TArray<TSharedPtr<FJsonValue>> array = jsonObject->GetArrayField("coordinate");
	coordinate = Array2Vector(Json2Array(jsonObject->GetArrayField("coordinate"), 3));
	//��ɫ��
	actorName = jsonObject->GetStringField("actorName");

	//��������
	FString rotateOrderStr = jsonObject->GetStringField("bvhRotationOrder");
	SetRotateOrder(rotateOrderStr);

	/*1.�������յ��������Ԫ��*/
	TMap<EMotionBoneEnum, FQuat> localQuats;									//ŷ����
	for (uint8 i = 0; i < BONE_NUM; i++)
	{
		EMotionBoneEnum currBone = (EMotionBoneEnum)i;
		FString boneStr = GetMotionBoneEnumString(currBone);
		TArray<TSharedPtr<FJsonValue>> boneField = jsonObject->GetArrayField(boneStr);
		TArray<float> floatArray = Json2Array(boneField, EULER_ARRAY_COUNT);

		FQuat quat = Euler2Quat(floatArray, rotatingOrder);
		localQuats.Add(currBone, quat);
	}

	/*2.ת�������ڱ�׼ģ�͵ľ�����Ԫ��*/
	//	Local2World
	dataMap.Add(EMotionBoneEnum::crotch, localQuats[EMotionBoneEnum::crotch]);
	for (uint8 i = 1; i < BONE_NUM; i++)
	{
		EMotionBoneEnum currBone = (EMotionBoneEnum)i;
		EMotionBoneEnum parentBone = GetParentEnum(currBone);
		dataMap.Add(currBone, Local2World(localQuats[currBone], dataMap[parentBone]));
	}
}

FVector FMotionData::GetCoordinate()
{
	return coordinate;
}

FQuat FMotionData::GetBoneData(EMotionBoneEnum bone)
{
	if (dataMap.Contains(bone))
		return dataMap[bone];

	return FQuat();
}

bool FMotionData::IsUsable()
{
	return dataMap.Num() > 0;
}

FString FMotionData::GetActorName()
{
	return actorName;
}

ERotatingOrder FMotionData::GetRotatingOrder()
{
	return rotatingOrder;
}

void FMotionData::SetRotateOrder(FString orderStr)
{
	if (orderStr == "XYZ")
		rotatingOrder = ERotatingOrder::XYZ;
	else if (orderStr == "XZY")
		rotatingOrder = ERotatingOrder::XZY;
	else if (orderStr == "YXZ")
		rotatingOrder = ERotatingOrder::YXZ;
	else if (orderStr == "YZX")
		rotatingOrder = ERotatingOrder::YZX;
	else if (orderStr == "ZXY")
		rotatingOrder = ERotatingOrder::ZXY;
	else
		rotatingOrder = ERotatingOrder::ZYX;
}
