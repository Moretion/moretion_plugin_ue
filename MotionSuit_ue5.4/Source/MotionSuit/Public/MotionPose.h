// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Json.h"
#include "../Source/Runtime/Engine/Classes/Animation/AnimNodeBase.h"
#include "MotionLib.h"
#include "MotionConnect.h"
#include <ModelController.h>
#include "MotionPose.generated.h"

USTRUCT(BlueprintType)
struct MOTIONSUIT_API FMotionPose : public FAnimNode_Base
{
	GENERATED_BODY()

public:
	FMotionPose();
	~FMotionPose();

	/*---------------FAnimNode_Base API---------------*/
	virtual void Initialize_AnyThread(const FAnimationInitializeContext& Context) override;
	virtual void Update_AnyThread(const FAnimationUpdateContext& Context) override;
	virtual void Evaluate_AnyThread(FPoseContext& Output) override;
	virtual void CacheBones_AnyThread(const FAnimationCacheBonesContext& Context) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Links)
	FPoseLink TPose;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = MotionSetting, meta = (PinShownByDefault))
	FVector HipsRotator;

	/*-----------------������-----------------*/
	/*������*/
	UPROPERTY(EditAnywhere, Category = MotionBodyMap)
	FBoneReference crotch;
	UPROPERTY(EditAnywhere, Category = MotionBodyMap)
	FBoneReference waistTwo;
	UPROPERTY(EditAnywhere, Category = MotionBodyMap)
	FBoneReference waistOne;
	UPROPERTY(EditAnywhere, Category = MotionBodyMap)
	FBoneReference back;
	UPROPERTY(EditAnywhere, Category = MotionBodyMap)
	FBoneReference head;

	/*�������*/
	UPROPERTY(EditAnywhere, Category = MotionBodyMap)
	FBoneReference leftShoulder;
	UPROPERTY(EditAnywhere, Category = MotionBodyMap)
	FBoneReference leftUpperArm;
	UPROPERTY(EditAnywhere, Category = MotionBodyMap)
	FBoneReference leftLowerArm;
	UPROPERTY(EditAnywhere, Category = MotionBodyMap)
	FBoneReference leftHand;
	UPROPERTY(EditAnywhere, Category = MotionBodyMap)
	FBoneReference leftUpperLeg;
	UPROPERTY(EditAnywhere, Category = MotionBodyMap)
	FBoneReference leftLowerLeg;
	UPROPERTY(EditAnywhere, Category = MotionBodyMap)
	FBoneReference leftFoot;
	UPROPERTY(EditAnywhere, Category = MotionBodyMap)
	FBoneReference leftToe;

	/*�����ҽ�*/
	UPROPERTY(EditAnywhere, Category = MotionBodyMap)
	FBoneReference rightShoulder;
	UPROPERTY(EditAnywhere, Category = MotionBodyMap)
	FBoneReference rightUpperArm;
	UPROPERTY(EditAnywhere, Category = MotionBodyMap)
	FBoneReference rightLowerArm;
	UPROPERTY(EditAnywhere, Category = MotionBodyMap)
	FBoneReference rightHand;
	UPROPERTY(EditAnywhere, Category = MotionBodyMap)
	FBoneReference rightUpperLeg;
	UPROPERTY(EditAnywhere, Category = MotionBodyMap)
	FBoneReference rightLowerLeg;
	UPROPERTY(EditAnywhere, Category = MotionBodyMap)
	FBoneReference rightFoot;
	UPROPERTY(EditAnywhere, Category = MotionBodyMap)
	FBoneReference rightToe;

	//������ָ
	UPROPERTY(EditAnywhere, Category = LeftFingersMap)
	FBoneReference leftThumbUnder;
	UPROPERTY(EditAnywhere, Category = LeftFingersMap)
	FBoneReference leftThumbMid;
	UPROPERTY(EditAnywhere, Category = LeftFingersMap)
	FBoneReference leftThumbUp;
	UPROPERTY(EditAnywhere, Category = LeftFingersMap)
	FBoneReference leftForeFingerUnder;
	UPROPERTY(EditAnywhere, Category = LeftFingersMap)
	FBoneReference leftForeFingerMid;
	UPROPERTY(EditAnywhere, Category = LeftFingersMap)
	FBoneReference leftForeFingerUp;
	UPROPERTY(EditAnywhere, Category = LeftFingersMap)
	FBoneReference leftMiddleFingerUnder;
	UPROPERTY(EditAnywhere, Category = LeftFingersMap)
	FBoneReference leftMiddleFingerMid;
	UPROPERTY(EditAnywhere, Category = LeftFingersMap)
	FBoneReference leftMiddleFingerUp;
	UPROPERTY(EditAnywhere, Category = LeftFingersMap)
	FBoneReference leftRingFingerUnder;
	UPROPERTY(EditAnywhere, Category = LeftFingersMap)
	FBoneReference leftRingFingerMid;
	UPROPERTY(EditAnywhere, Category = LeftFingersMap)
	FBoneReference leftRingFingerUp;
	UPROPERTY(EditAnywhere, Category = LeftFingersMap)
	FBoneReference leftLittleFingerUnder;
	UPROPERTY(EditAnywhere, Category = LeftFingersMap)
	FBoneReference leftLittleFingerMid;
	UPROPERTY(EditAnywhere, Category = LeftFingersMap)
	FBoneReference leftLittleFingerUp;

	//������ָ
	UPROPERTY(EditAnywhere, Category = RightFingersMap)
	FBoneReference rightThumbUnder;
	UPROPERTY(EditAnywhere, Category = RightFingersMap)
	FBoneReference rightThumbMid;
	UPROPERTY(EditAnywhere, Category = RightFingersMap)
	FBoneReference rightThumbUp;
	UPROPERTY(EditAnywhere, Category = RightFingersMap)
	FBoneReference rightForeFingerUnder;
	UPROPERTY(EditAnywhere, Category = RightFingersMap)
	FBoneReference rightForeFingerMid;
	UPROPERTY(EditAnywhere, Category = RightFingersMap)
	FBoneReference rightForeFingerUp;
	UPROPERTY(EditAnywhere, Category = RightFingersMap)
	FBoneReference rightMiddleFingerUnder;
	UPROPERTY(EditAnywhere, Category = RightFingersMap)
	FBoneReference rightMiddleFingerMid;
	UPROPERTY(EditAnywhere, Category = RightFingersMap)
	FBoneReference rightMiddleFingerUp;
	UPROPERTY(EditAnywhere, Category = RightFingersMap)
	FBoneReference rightRingFingerUnder;
	UPROPERTY(EditAnywhere, Category = RightFingersMap)
	FBoneReference rightRingFingerMid;
	UPROPERTY(EditAnywhere, Category = RightFingersMap)
	FBoneReference rightRingFingerUp;
	UPROPERTY(EditAnywhere, Category = RightFingersMap)
	FBoneReference rightLittleFingerUnder;
	UPROPERTY(EditAnywhere, Category = RightFingersMap)
	FBoneReference rightLittleFingerMid;
	UPROPERTY(EditAnywhere, Category = RightFingersMap)
	FBoneReference rightLittleFingerUp;

private:
	ERotatingOrder										RotatingOrder;		//�����������ͣ�Json�н����õ���
	bool												StoredTPose;		//�Ƿ��Ѿ�����TPose����
	TMap<EMotionBoneEnum, FQuat>						BoneExpected;		//ģ��ƫ��
	TMap<EMotionBoneEnum, FCompactPoseBoneIndex>		CPBoneIndexMap;		//ģ�͹�������
	TMap<EMotionBoneEnum, FQuat>						ToUse;				//�����յ�����Ԫ��
	AMotionConnect*										DataActor;
	FQuat												Offset;				//�貿��ʼֵ
	FString												ActorName;
	FVector												crotchCoor;
	float												moveRate;

	FCompactPoseBoneIndex GetCPBoneIndex(FName BoneName, const FBoneContainer& BoneContainer);	//��ȡ��������

	void Rotate(FPoseContext& Output);
	AModelController* GetModelController(const FAnimationBaseContext& Output);

	//Utilities
	FBoneReference GetBone(EMotionBoneEnum TargetBone);
	FName GetBoneName(EMotionBoneEnum TargetBone);
};
