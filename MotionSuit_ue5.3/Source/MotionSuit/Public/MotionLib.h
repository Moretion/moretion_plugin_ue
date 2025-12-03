// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "../Source/Runtime/CoreUObject/Public/UObject/UObjectGlobals.h"
#include "GameFramework/Actor.h"
#include "../Source/Runtime/Json/Public/Dom/JsonValue.h"
#include "..\Source\Runtime\GeometryCore\Public\MathUtil.h"
#include "EngineUtils.h"
#include "Engine/World.h"
#include "UObject/NoExportTypes.h"

//ģ�ͳ���
UENUM(BlueprintType)
enum class EModelOrientation : uint8 {
	X		UMETA(DisplayName = "X"),
	X_		UMETA(DisplayName = "-X"),
	Y		UMETA(DisplayName = "Y"),
	Y_		UMETA(DisplayName = "-Y"),
};

//ŷ����ѡץ˳��ö��
UENUM(BlueprintType)
enum class ERotatingOrder : uint8 {
	XYZ,
	XZY,
	YZX,
	YXZ,
	ZXY,
	ZYX
};

//����ö��
UENUM(BlueprintType)
enum class EMotionBoneEnum : uint8 {

	crotch,
	waistTwo,
	waistOne,
	back,
	head,
	leftShoulder,
	leftUpperArm,
	leftLowerArm,
	leftHand,
	leftUpperLeg,
	leftLowerLeg,
	leftFoot,
	leftToe,

	rightShoulder,
	rightUpperArm,
	rightLowerArm,
	rightHand,
	rightUpperLeg,
	rightLowerLeg,
	rightFoot,
	rightToe,

	//��ָ
	leftThumbUnder,
	leftThumbMid,
	leftThumbUp,
	leftForeFingerUnder,
	leftForeFingerMid,
	leftForeFingerUp,
	leftMiddleFingerUnder,
	leftMiddleFingerMid,
	leftMiddleFingerUp,
	leftRingFingerUnder,
	leftRingFingerMid,
	leftRingFingerUp,
	leftLittleFingerUnder,
	leftLittleFingerMid,
	leftLittleFingerUp,

	rightThumbUnder,
	rightThumbMid,
	rightThumbUp,
	rightForeFingerUnder,
	rightForeFingerMid,
	rightForeFingerUp,
	rightMiddleFingerUnder,
	rightMiddleFingerMid,
	rightMiddleFingerUp,
	rightRingFingerUnder,
	rightRingFingerMid,
	rightRingFingerUp,
	rightLittleFingerUnder,
	rightLittleFingerMid,
	rightLittleFingerUp,
};

static FString GetMotionBoneEnumString(EMotionBoneEnum Bone)
{
	switch (Bone)
	{
	case EMotionBoneEnum::crotch: return TEXT("crotch");
	case EMotionBoneEnum::waistTwo: return TEXT("waistTwo");
	case EMotionBoneEnum::waistOne: return TEXT("waistOne");
	case EMotionBoneEnum::back: return TEXT("back");
	case EMotionBoneEnum::head: return TEXT("head");
	case EMotionBoneEnum::leftShoulder: return TEXT("leftShoulder");
	case EMotionBoneEnum::leftUpperArm: return TEXT("leftUpperArm");
	case EMotionBoneEnum::leftLowerArm: return TEXT("leftLowerArm");
	case EMotionBoneEnum::leftHand: return TEXT("leftHand");
	case EMotionBoneEnum::leftUpperLeg: return TEXT("leftUpperLeg");
	case EMotionBoneEnum::leftLowerLeg: return TEXT("leftLowerLeg");
	case EMotionBoneEnum::leftFoot: return TEXT("leftFoot");
	case EMotionBoneEnum::leftToe: return TEXT("leftToe");
	case EMotionBoneEnum::rightShoulder: return TEXT("rightShoulder");
	case EMotionBoneEnum::rightUpperArm: return TEXT("rightUpperArm");
	case EMotionBoneEnum::rightLowerArm: return TEXT("rightLowerArm");
	case EMotionBoneEnum::rightHand: return TEXT("rightHand");
	case EMotionBoneEnum::rightUpperLeg: return TEXT("rightUpperLeg");
	case EMotionBoneEnum::rightLowerLeg: return TEXT("rightLowerLeg");
	case EMotionBoneEnum::rightFoot: return TEXT("rightFoot");
	case EMotionBoneEnum::rightToe: return TEXT("rightToe");
	case EMotionBoneEnum::leftThumbUnder: return TEXT("leftThumbUnder");
	case EMotionBoneEnum::leftThumbMid: return TEXT("leftThumbMid");
	case EMotionBoneEnum::leftThumbUp: return TEXT("leftThumbUp");
	case EMotionBoneEnum::leftForeFingerUnder: return TEXT("leftForeFingerUnder");
	case EMotionBoneEnum::leftForeFingerMid: return TEXT("leftForeFingerMid");
	case EMotionBoneEnum::leftForeFingerUp: return TEXT("leftForeFingerUp");
	case EMotionBoneEnum::leftMiddleFingerUnder: return TEXT("leftMiddleFingerUnder");
	case EMotionBoneEnum::leftMiddleFingerMid: return TEXT("leftMiddleFingerMid");
	case EMotionBoneEnum::leftMiddleFingerUp: return TEXT("leftMiddleFingerUp");
	case EMotionBoneEnum::leftRingFingerUnder: return TEXT("leftRingFingerUnder");
	case EMotionBoneEnum::leftRingFingerMid: return TEXT("leftRingFingerMid");
	case EMotionBoneEnum::leftRingFingerUp: return TEXT("leftRingFingerUp");
	case EMotionBoneEnum::leftLittleFingerUnder: return TEXT("leftLittleFingerUnder");
	case EMotionBoneEnum::leftLittleFingerMid: return TEXT("leftLittleFingerMid");
	case EMotionBoneEnum::leftLittleFingerUp: return TEXT("leftLittleFingerUp");
	case EMotionBoneEnum::rightThumbUnder: return TEXT("rightThumbUnder");
	case EMotionBoneEnum::rightThumbMid: return TEXT("rightThumbMid");
	case EMotionBoneEnum::rightThumbUp: return TEXT("rightThumbUp");
	case EMotionBoneEnum::rightForeFingerUnder: return TEXT("rightForeFingerUnder");
	case EMotionBoneEnum::rightForeFingerMid: return TEXT("rightForeFingerMid");
	case EMotionBoneEnum::rightForeFingerUp: return TEXT("rightForeFingerUp");
	case EMotionBoneEnum::rightMiddleFingerUnder: return TEXT("rightMiddleFingerUnder");
	case EMotionBoneEnum::rightMiddleFingerMid: return TEXT("rightMiddleFingerMid");
	case EMotionBoneEnum::rightMiddleFingerUp: return TEXT("rightMiddleFingerUp");
	case EMotionBoneEnum::rightRingFingerUnder: return TEXT("rightRingFingerUnder");
	case EMotionBoneEnum::rightRingFingerMid: return TEXT("rightRingFingerMid");
	case EMotionBoneEnum::rightRingFingerUp: return TEXT("rightRingFingerUp");
	case EMotionBoneEnum::rightLittleFingerUnder: return TEXT("rightLittleFingerUnder");
	case EMotionBoneEnum::rightLittleFingerMid: return TEXT("rightLittleFingerMid");
	case EMotionBoneEnum::rightLittleFingerUp: return TEXT("rightLittleFingerUp");
	default: return TEXT("Unknown");
	}
}


/******************************Motion��׼ģ��TPoseʱ���ؽ���Ԫ��ֵ*************************************************/
#define TPOSE_NORMALPART				FQuat::MakeFromEuler(FVector(0, 0, 0))		//�������Լ���������
//#define TPOSE_SPECIALPART				FQuat::MakeFromEuler(FVector(180, 0, 180))	//�Ұ������
#define QUAT_ARRAY_COUNT				4
#define EULER_ARRAY_COUNT				3
#define BONE_NUM						(uint8)(EMotionBoneEnum::rightLittleFingerUp) + 1
#define BONE_ENUM_STR					TEXT("/Script/MotionSuit.EMotionBoneEnum")
#define DATA_MIN_LENGTH					1024

/* ��Enum��ֵת��FString */
template<typename TEnum>
FORCEINLINE FString GetEnumValueAsString(const FString& enumName, TEnum enumValue) {
	UEnum* enumPtr = FindObject<UEnum>(nullptr, *enumName);
	if (!enumPtr)
		return FString("InvaildEnum");

	return enumPtr->GetNameStringByIndex(static_cast<int32>(enumValue));
}

static FQuat Local2World(FQuat child_L, FQuat parent_W)
{
	return FQuat(parent_W * child_L);
}

static FQuat World2Local(FQuat child_W, FQuat parent_W)
{
	return FQuat(parent_W.Inverse() * child_W);
}

static EMotionBoneEnum GetParentEnum(EMotionBoneEnum target)
{
	uint8 index = (uint8)target;

	if (target == EMotionBoneEnum::leftShoulder || target == EMotionBoneEnum::rightShoulder)	//˫��
		return EMotionBoneEnum::back;

	if (target == EMotionBoneEnum::leftUpperLeg || target == EMotionBoneEnum::rightUpperLeg)	//˫����
		return EMotionBoneEnum::crotch;

	if (target >= EMotionBoneEnum::rightThumbUp && index - (uint8)EMotionBoneEnum::rightThumbUp % 3 == 0)	//����ָ
		return EMotionBoneEnum::rightHand;

	if (target >= EMotionBoneEnum::leftThumbUp && index - (uint8)EMotionBoneEnum::leftThumbUp % 3 == 0)	//����ָ
		return EMotionBoneEnum::leftHand;

	return (EMotionBoneEnum)(index - 1);
}

static TArray<float> Json2Array(TArray<TSharedPtr<FJsonValue>> json, int count)
{
	TArray<float> result;
	if (json.Num() < count)
		return result;

	for (int i = 0; i < count; i++)
		result.Add(json[i]->AsNumber());
	return result;
}

static FVector Array2Vector(TArray<float> target)
{
	if (target.Num() < 3)
		return FVector();

	return FVector(target[0], target[2], target[1]);
}

static FQuat Array2Quat(TArray<float> target)
{
	if (target.Num() < 4)
		return FQuat();

	return FQuat(-target[3], target[1], -target[2], target[0]);
}

static FQuat Euler2Quat(TArray<float> target, ERotatingOrder order)
{
	if (target.Num() < 3)
		return FQuat();

	TArray<float> temp;
	temp.Add(target[0] / 180.0f * PI);
	temp.Add(target[1] / 180.0f * PI);
	temp.Add(target[2] / 180.0f * PI);

	float x = 0, y = 0, z = 0, w = 1,
		c1 = TMathUtil<float>::Cos(temp[0] / 2.0f), c2 = TMathUtil<float>::Cos(temp[1] / 2.0f), c3 = TMathUtil<float>::Cos(temp[2] / 2.0f),
		s1 = TMathUtil<float>::Sin(temp[0] / 2.0f), s2 = TMathUtil<float>::Sin(temp[1] / 2.0f), s3 = TMathUtil<float>::Sin(temp[2] / 2.0f);

	switch (order)
	{
	case ERotatingOrder::XYZ:
		w = c1 * c2 * c3 - s1 * s2 * s3;
		x = s1 * c2 * c3 + c1 * s2 * s3;
		y = c1 * s2 * c3 - s1 * c2 * s3;
		z = c1 * c2 * s3 + s1 * s2 * c3;
		break;

	case ERotatingOrder::XZY:
		w = c1 * c2 * c3 + s1 * s2 * s3;
		x = s1 * c2 * c3 - c1 * s2 * s3;
		y = c1 * c2 * s3 - s1 * s2 * c3;
		z = c1 * s2 * c3 + s1 * c2 * s3;
		break;

	case ERotatingOrder::YZX:
		w = c1 * c2 * c3 - s1 * s2 * s3;
		x = c1 * c2 * s3 + s1 * s2 * c3;
		y = s1 * c2 * c3 + c1 * s2 * s3;
		z = c1 * s2 * c3 - s1 * c2 * s3;
		break;

	case ERotatingOrder::YXZ:
		w = c1 * c2 * c3 + s1 * s2 * s3;
		x = c1 * s2 * c3 + s1 * c2 * s3;
		y = s1 * c2 * c3 - c1 * s2 * s3;
		z = c1 * c2 * s3 - s1 * s2 * c3;
		break;

	case ERotatingOrder::ZXY:
		w = c1 * c2 * c3 - s1 * s2 * s3;
		x = c1 * s2 * c3 - s1 * c2 * s3;
		y = c1 * c2 * s3 + s1 * s2 * c3;
		z = s1 * c2 * c3 + c1 * s2 * s3;
		break;

	case ERotatingOrder::ZYX:
		w = c1 * c2 * c3 + s1 * s2 * s3;
		x = c1 * c2 * s3 - s1 * s2 * c3;
		y = c1 * s2 * c3 + s1 * c2 * s3;
		z = s1 * c2 * c3 - c1 * s2 * s3;
		break;

	default:
		return FQuat();
	}
	return FQuat(-x, -z, -y, w);
}

static FQuat GetMotionQuat_World(EMotionBoneEnum BoneEnum)
{
	return TPOSE_NORMALPART;
}