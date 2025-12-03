// Fill out your copyright notice in the Description page of Project Settings.

#include "MotionPose.h"
#include <MathUtil.h>
#include <DataManager.h>
#include "Animation/AnimInstance.h"

FMotionPose::FMotionPose()
{
	RotatingOrder = ERotatingOrder::ZXY;
	DataActor = nullptr;
	StoredTPose = false;
	ToUse = TMap<EMotionBoneEnum, FQuat>();
}

FMotionPose::~FMotionPose()
{
}

void FMotionPose::Initialize_AnyThread(const FAnimationInitializeContext& Context)
{
	TPose.Initialize(Context);
}

void FMotionPose::Update_AnyThread(const FAnimationUpdateContext& Context)
{
	TPose.Update(Context);
}

void FMotionPose::Evaluate_AnyThread(FPoseContext& Output)
{
	TPose.Evaluate(Output);

	UAnimInstance* animInstance = (UAnimInstance*)Output.GetAnimInstanceObject();

	const FBoneContainer& BoneContainer = Output.Pose.GetBoneContainer();
	//UE_LOG(LogTemp, Log, TEXT("%d"), crotch.BoneIndex);

	/*------------------------------------��¼����������Tposeֵ��ģ��ƫ��------------------------------------*/
	if (!StoredTPose)
	{
		//检测是否配完
		for (uint8 i = 0; i < BONE_NUM; i++)
		{
			EMotionBoneEnum currBone = (EMotionBoneEnum)i;
			if (GetBone(currBone).BoneName == FName("None"))
			{
				StoredTPose = false;
				return;
			}
		}

		Offset = FRotator(HipsRotator.Y, HipsRotator.Z, HipsRotator.X).Quaternion();

		/*------------------------------------��¼��������-----------------------------------*/
		for (uint8 i = 0; i < BONE_NUM; i++)
		{
			EMotionBoneEnum currBone = (EMotionBoneEnum)i;
			CPBoneIndexMap.Add(currBone, GetCPBoneIndex(GetBoneName(currBone), BoneContainer));
		}

		/*------------------------------------����ģ��ƫ��------------------------------------*/
		/*���������Ԫ�� -> ������Ԫ�� -> ƫ��ֵ = Inverse(Vein����) * �������*/
		/*(1)���������Ԫ��*/
		TMap<EMotionBoneEnum, FQuat> TPoseQuat;	//TPose��̬��Ԫ����¼
		for (uint8 i = 0; i < BONE_NUM; i++)
		{
			EMotionBoneEnum currBone = (EMotionBoneEnum)i;
			FQuat BoneQuat = Output.Pose[CPBoneIndexMap[currBone]].GetRotation();
			TPoseQuat.Add(currBone, BoneQuat);
		}

		//��ʼ״̬������������Ԫ��
		/*(2)����������Ԫ��*/
		TMap<EMotionBoneEnum, FQuat> BoneQuat_W;
		BoneQuat_W.Add(EMotionBoneEnum::crotch, /*Offset **/ TPoseQuat[EMotionBoneEnum::crotch]);

		for (uint8 i = 1; i < BONE_NUM; i++)
		{
			EMotionBoneEnum currBone = (EMotionBoneEnum)i;
			EMotionBoneEnum parentBone = GetParentEnum(currBone);
			BoneQuat_W.Add(currBone, Local2World(TPoseQuat[currBone], BoneQuat_W[parentBone]));
		}

		/*(3)ƫ��ֵ = Inverse(Vein����) * �������*/
		for (uint8 i = 0; i < BONE_NUM; i++)
		{
			EMotionBoneEnum Curr = (EMotionBoneEnum)i;
			BoneExpected.Add(Curr, TPOSE_NORMALPART.Inverse() * BoneQuat_W[Curr]);
		}

		/*�ƶ����ʼ���*/
		crotchCoor = Output.Pose[CPBoneIndexMap[EMotionBoneEnum::crotch]].GetLocation();
		//UE_LOG(LogTemp, Log, TEXT("%f"), crotchCoor.Z);
		moveRate = crotchCoor.Z / 96.619003f;
		StoredTPose = true;

		AModelController* model = GetModelController(Output);
		if (model)
		{
			ActorName = model->ActorName;
			model->MoveRate = moveRate;
			//UE_LOG(LogTemp, Log, TEXT("%s %s"), *ActorName, ActorName.IsEmpty() ? TEXT("TRUE") : TEXT("FALSE"));
		}
	}

	/*------------------------------------���ݽ���------------------------------------*/
	/*�յ��������Ԫ�� -> ���ڱ�׼ģ�͵ľ�����Ԫ�� -> �ҳ�ģ��ƫ��õ����ڸ�ģ�͵ľ�����Ԫ�� -> ���ڸ�ģ�͵������Ԫ��*/
	FMotionData* newData = UDataManager::GetInstance()->GetMotionData(ActorName);
	if (!newData || !newData->IsUsable())
	{
		Rotate(Output);
		return;
	}

	ToUse.Empty();

	//��������
	RotatingOrder = newData->GetRotatingOrder();
	crotchCoor = newData->GetCoordinate() * 100;
	//UE_LOG(LogTemp, Log, TEXT("%s"), *crotchCoor.ToString());

	/*�ҳ�ģ��ƫ��õ����ڸ�ģ�͵ľ�����Ԫ��*/
	TMap<EMotionBoneEnum, FQuat> worldQuats;
	for (uint8 i = 0; i < BONE_NUM; i++)
	{
		EMotionBoneEnum currBone = (EMotionBoneEnum)i;
		worldQuats.Add(currBone, newData->GetBoneData(currBone) * BoneExpected[currBone]);
	}

	/*�����ڸ�ģ�͵ľ�����Ԫ��ת���������Ԫ��*/
	ToUse.Add(EMotionBoneEnum::crotch, /*Offset.Inverse() **/ worldQuats[EMotionBoneEnum::crotch]);
	for (uint8 i = 1; i < BONE_NUM; i++)
	{
		EMotionBoneEnum currBone = (EMotionBoneEnum)i;
		EMotionBoneEnum parentBone = GetParentEnum(currBone);
		ToUse.Add(currBone, World2Local(worldQuats[currBone], worldQuats[parentBone]));
	}

	/*------------------------------------ʹ������------------------------------------*/
	Rotate(Output);
}

void FMotionPose::CacheBones_AnyThread(const FAnimationCacheBonesContext& Context)
{
	TPose.CacheBones(Context);
}

FCompactPoseBoneIndex FMotionPose::GetCPBoneIndex(FName BoneName, const FBoneContainer& BoneContainer)
{
	if (!BoneName.IsValid() || BoneName.IsNone())
		return FCompactPoseBoneIndex(INDEX_NONE);

	int32 MeshIndex = BoneContainer.GetPoseBoneIndexForBoneName(BoneName);
	if (MeshIndex == INDEX_NONE)
		return FCompactPoseBoneIndex(INDEX_NONE);

	FCompactPoseBoneIndex CCPIndex = BoneContainer.MakeCompactPoseIndex(FMeshPoseBoneIndex(MeshIndex));
	return CCPIndex;
}

void FMotionPose::Rotate(FPoseContext& Output)
{
	if (ToUse.Num() == 0)
		return;

	Output.Pose[CPBoneIndexMap[EMotionBoneEnum::crotch]].SetLocation(crotchCoor);
	for (uint8 i = 0; i < BONE_NUM; i++)
	{
		EMotionBoneEnum Curr = (EMotionBoneEnum)i;
		Output.Pose[CPBoneIndexMap[Curr]].SetRotation(ToUse[Curr]);
	}
}

AModelController* FMotionPose::GetModelController(const FAnimationBaseContext& Output)
{
	UObject* objectPtr = Output.GetAnimInstanceObject();
	if (objectPtr == nullptr)
		return nullptr;

	UAnimInstance* instance = Cast<UAnimInstance>(objectPtr);
	if (instance == nullptr)
		return nullptr;

	AActor* owner = instance->GetOwningActor();
	if (owner == nullptr)
		return nullptr;

	return Cast< AModelController>(owner);
}

FBoneReference FMotionPose::GetBone(EMotionBoneEnum TargetBone)
{
	switch (TargetBone)
	{
	case EMotionBoneEnum::crotch:
		return crotch;

	case EMotionBoneEnum::waistTwo:
		return waistTwo;

	case EMotionBoneEnum::waistOne:
		return waistOne;

	case EMotionBoneEnum::back:
		return back;

	case EMotionBoneEnum::head:
		return head;

	case EMotionBoneEnum::leftShoulder:
		return leftShoulder;

	case EMotionBoneEnum::leftUpperArm:
		return leftUpperArm;

	case EMotionBoneEnum::leftLowerArm:
		return leftLowerArm;

	case EMotionBoneEnum::leftHand:
		return leftHand;

	case EMotionBoneEnum::leftUpperLeg:
		return leftUpperLeg;

	case EMotionBoneEnum::leftLowerLeg:
		return leftLowerLeg;

	case EMotionBoneEnum::leftFoot:
		return leftFoot;

	case EMotionBoneEnum::leftToe:
		return leftToe;

	case EMotionBoneEnum::rightShoulder:
		return rightShoulder;

	case EMotionBoneEnum::rightUpperArm:
		return rightUpperArm;

	case EMotionBoneEnum::rightLowerArm:
		return rightLowerArm;

	case EMotionBoneEnum::rightHand:
		return rightHand;

	case EMotionBoneEnum::rightUpperLeg:
		return rightUpperLeg;

	case EMotionBoneEnum::rightLowerLeg:
		return rightLowerLeg;

	case EMotionBoneEnum::rightFoot:
		return rightFoot;

	case EMotionBoneEnum::rightToe:
		return rightToe;

		//��ָ
	case EMotionBoneEnum::leftThumbUnder:
		return leftThumbUnder;
	case EMotionBoneEnum::leftThumbMid:
		return leftThumbMid;
	case EMotionBoneEnum::leftThumbUp:
		return leftThumbUp;

	case EMotionBoneEnum::leftForeFingerUnder:
		return leftForeFingerUnder;
	case EMotionBoneEnum::leftForeFingerMid:
		return leftForeFingerMid;
	case EMotionBoneEnum::leftForeFingerUp:
		return leftForeFingerUp;

	case EMotionBoneEnum::leftMiddleFingerUnder:
		return leftMiddleFingerUnder;
	case EMotionBoneEnum::leftMiddleFingerMid:
		return leftMiddleFingerMid;
	case EMotionBoneEnum::leftMiddleFingerUp:
		return leftMiddleFingerUp;

	case EMotionBoneEnum::leftRingFingerUnder:
		return leftRingFingerUnder;
	case EMotionBoneEnum::leftRingFingerMid:
		return leftRingFingerMid;
	case EMotionBoneEnum::leftRingFingerUp:
		return leftRingFingerUp;

	case EMotionBoneEnum::leftLittleFingerUnder:
		return leftLittleFingerUnder;
	case EMotionBoneEnum::leftLittleFingerMid:
		return leftLittleFingerMid;
	case EMotionBoneEnum::leftLittleFingerUp:
		return leftLittleFingerUp;

	case EMotionBoneEnum::rightThumbUnder:
		return rightThumbUnder;
	case EMotionBoneEnum::rightThumbMid:
		return rightThumbMid;
	case EMotionBoneEnum::rightThumbUp:
		return rightThumbUp;

	case EMotionBoneEnum::rightForeFingerUnder:
		return rightForeFingerUnder;
	case EMotionBoneEnum::rightForeFingerMid:
		return rightForeFingerMid;
	case EMotionBoneEnum::rightForeFingerUp:
		return rightForeFingerUp;

	case EMotionBoneEnum::rightMiddleFingerUnder:
		return rightMiddleFingerUnder;
	case EMotionBoneEnum::rightMiddleFingerMid:
		return rightMiddleFingerMid;
	case EMotionBoneEnum::rightMiddleFingerUp:
		return rightMiddleFingerUp;

	case EMotionBoneEnum::rightRingFingerUnder:
		return rightRingFingerUnder;
	case EMotionBoneEnum::rightRingFingerMid:
		return rightRingFingerMid;
	case EMotionBoneEnum::rightRingFingerUp:
		return rightRingFingerUp;

	case EMotionBoneEnum::rightLittleFingerUnder:
		return rightLittleFingerUnder;
	case EMotionBoneEnum::rightLittleFingerMid:
		return rightLittleFingerMid;
	case EMotionBoneEnum::rightLittleFingerUp:
		return rightLittleFingerUp;

	default:
		return FBoneReference();
	}
}

FName FMotionPose::GetBoneName(EMotionBoneEnum TargetBone)
{
	return GetBone(TargetBone).BoneName;
}