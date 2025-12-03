// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MotionSuit/Public/MotionPose.h"
#include "Runtime/Engine/Classes/Animation/AnimNodeBase.h"
#include "Runtime/Engine/Public/Animation/BoneReference.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMotionPose() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_Base();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBoneReference();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPoseLink();
MOTIONSUIT_API UScriptStruct* Z_Construct_UScriptStruct_FMotionPose();
UPackage* Z_Construct_UPackage__Script_MotionSuit();
// End Cross Module References

// Begin ScriptStruct FMotionPose
static_assert(std::is_polymorphic<FMotionPose>() == std::is_polymorphic<FAnimNode_Base>(), "USTRUCT FMotionPose cannot be polymorphic unless super FAnimNode_Base is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MotionPose;
class UScriptStruct* FMotionPose::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MotionPose.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MotionPose.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMotionPose, (UObject*)Z_Construct_UPackage__Script_MotionSuit(), TEXT("MotionPose"));
	}
	return Z_Registration_Info_UScriptStruct_MotionPose.OuterSingleton;
}
template<> MOTIONSUIT_API UScriptStruct* StaticStruct<FMotionPose>()
{
	return FMotionPose::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMotionPose_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MotionPose.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TPose_MetaData[] = {
		{ "Category", "Links" },
		{ "ModuleRelativePath", "Public/MotionPose.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HipsRotator_MetaData[] = {
		{ "Category", "MotionSetting" },
		{ "ModuleRelativePath", "Public/MotionPose.h" },
		{ "PinShownByDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_crotch_MetaData[] = {
		{ "Category", "MotionBodyMap" },
		{ "Comment", "/*\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd*/" },
		{ "ModuleRelativePath", "Public/MotionPose.h" },
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_waistTwo_MetaData[] = {
		{ "Category", "MotionBodyMap" },
		{ "ModuleRelativePath", "Public/MotionPose.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_waistOne_MetaData[] = {
		{ "Category", "MotionBodyMap" },
		{ "ModuleRelativePath", "Public/MotionPose.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_back_MetaData[] = {
		{ "Category", "MotionBodyMap" },
		{ "ModuleRelativePath", "Public/MotionPose.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_head_MetaData[] = {
		{ "Category", "MotionBodyMap" },
		{ "ModuleRelativePath", "Public/MotionPose.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_leftShoulder_MetaData[] = {
		{ "Category", "MotionBodyMap" },
		{ "Comment", "/*\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd*/" },
		{ "ModuleRelativePath", "Public/MotionPose.h" },
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_leftUpperArm_MetaData[] = {
		{ "Category", "MotionBodyMap" },
		{ "ModuleRelativePath", "Public/MotionPose.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_leftLowerArm_MetaData[] = {
		{ "Category", "MotionBodyMap" },
		{ "ModuleRelativePath", "Public/MotionPose.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_leftHand_MetaData[] = {
		{ "Category", "MotionBodyMap" },
		{ "ModuleRelativePath", "Public/MotionPose.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_leftUpperLeg_MetaData[] = {
		{ "Category", "MotionBodyMap" },
		{ "ModuleRelativePath", "Public/MotionPose.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_leftLowerLeg_MetaData[] = {
		{ "Category", "MotionBodyMap" },
		{ "ModuleRelativePath", "Public/MotionPose.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_leftFoot_MetaData[] = {
		{ "Category", "MotionBodyMap" },
		{ "ModuleRelativePath", "Public/MotionPose.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_leftToe_MetaData[] = {
		{ "Category", "MotionBodyMap" },
		{ "ModuleRelativePath", "Public/MotionPose.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_rightShoulder_MetaData[] = {
		{ "Category", "MotionBodyMap" },
		{ "Comment", "/*\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd2\xbd\xef\xbf\xbd*/" },
		{ "ModuleRelativePath", "Public/MotionPose.h" },
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd2\xbd\xef\xbf\xbd" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_rightUpperArm_MetaData[] = {
		{ "Category", "MotionBodyMap" },
		{ "ModuleRelativePath", "Public/MotionPose.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_rightLowerArm_MetaData[] = {
		{ "Category", "MotionBodyMap" },
		{ "ModuleRelativePath", "Public/MotionPose.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_rightHand_MetaData[] = {
		{ "Category", "MotionBodyMap" },
		{ "ModuleRelativePath", "Public/MotionPose.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_rightUpperLeg_MetaData[] = {
		{ "Category", "MotionBodyMap" },
		{ "ModuleRelativePath", "Public/MotionPose.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_rightLowerLeg_MetaData[] = {
		{ "Category", "MotionBodyMap" },
		{ "ModuleRelativePath", "Public/MotionPose.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_rightFoot_MetaData[] = {
		{ "Category", "MotionBodyMap" },
		{ "ModuleRelativePath", "Public/MotionPose.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_rightToe_MetaData[] = {
		{ "Category", "MotionBodyMap" },
		{ "ModuleRelativePath", "Public/MotionPose.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_leftThumbUnder_MetaData[] = {
		{ "Category", "LeftFingersMap" },
		{ "Comment", "//\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd6\xb8\n" },
		{ "ModuleRelativePath", "Public/MotionPose.h" },
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd6\xb8" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_leftThumbMid_MetaData[] = {
		{ "Category", "LeftFingersMap" },
		{ "ModuleRelativePath", "Public/MotionPose.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_leftThumbUp_MetaData[] = {
		{ "Category", "LeftFingersMap" },
		{ "ModuleRelativePath", "Public/MotionPose.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_leftForeFingerUnder_MetaData[] = {
		{ "Category", "LeftFingersMap" },
		{ "ModuleRelativePath", "Public/MotionPose.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_leftForeFingerMid_MetaData[] = {
		{ "Category", "LeftFingersMap" },
		{ "ModuleRelativePath", "Public/MotionPose.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_leftForeFingerUp_MetaData[] = {
		{ "Category", "LeftFingersMap" },
		{ "ModuleRelativePath", "Public/MotionPose.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_leftMiddleFingerUnder_MetaData[] = {
		{ "Category", "LeftFingersMap" },
		{ "ModuleRelativePath", "Public/MotionPose.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_leftMiddleFingerMid_MetaData[] = {
		{ "Category", "LeftFingersMap" },
		{ "ModuleRelativePath", "Public/MotionPose.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_leftMiddleFingerUp_MetaData[] = {
		{ "Category", "LeftFingersMap" },
		{ "ModuleRelativePath", "Public/MotionPose.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_leftRingFingerUnder_MetaData[] = {
		{ "Category", "LeftFingersMap" },
		{ "ModuleRelativePath", "Public/MotionPose.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_leftRingFingerMid_MetaData[] = {
		{ "Category", "LeftFingersMap" },
		{ "ModuleRelativePath", "Public/MotionPose.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_leftRingFingerUp_MetaData[] = {
		{ "Category", "LeftFingersMap" },
		{ "ModuleRelativePath", "Public/MotionPose.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_leftLittleFingerUnder_MetaData[] = {
		{ "Category", "LeftFingersMap" },
		{ "ModuleRelativePath", "Public/MotionPose.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_leftLittleFingerMid_MetaData[] = {
		{ "Category", "LeftFingersMap" },
		{ "ModuleRelativePath", "Public/MotionPose.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_leftLittleFingerUp_MetaData[] = {
		{ "Category", "LeftFingersMap" },
		{ "ModuleRelativePath", "Public/MotionPose.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_rightThumbUnder_MetaData[] = {
		{ "Category", "RightFingersMap" },
		{ "Comment", "//\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd6\xb8\n" },
		{ "ModuleRelativePath", "Public/MotionPose.h" },
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd6\xb8" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_rightThumbMid_MetaData[] = {
		{ "Category", "RightFingersMap" },
		{ "ModuleRelativePath", "Public/MotionPose.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_rightThumbUp_MetaData[] = {
		{ "Category", "RightFingersMap" },
		{ "ModuleRelativePath", "Public/MotionPose.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_rightForeFingerUnder_MetaData[] = {
		{ "Category", "RightFingersMap" },
		{ "ModuleRelativePath", "Public/MotionPose.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_rightForeFingerMid_MetaData[] = {
		{ "Category", "RightFingersMap" },
		{ "ModuleRelativePath", "Public/MotionPose.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_rightForeFingerUp_MetaData[] = {
		{ "Category", "RightFingersMap" },
		{ "ModuleRelativePath", "Public/MotionPose.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_rightMiddleFingerUnder_MetaData[] = {
		{ "Category", "RightFingersMap" },
		{ "ModuleRelativePath", "Public/MotionPose.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_rightMiddleFingerMid_MetaData[] = {
		{ "Category", "RightFingersMap" },
		{ "ModuleRelativePath", "Public/MotionPose.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_rightMiddleFingerUp_MetaData[] = {
		{ "Category", "RightFingersMap" },
		{ "ModuleRelativePath", "Public/MotionPose.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_rightRingFingerUnder_MetaData[] = {
		{ "Category", "RightFingersMap" },
		{ "ModuleRelativePath", "Public/MotionPose.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_rightRingFingerMid_MetaData[] = {
		{ "Category", "RightFingersMap" },
		{ "ModuleRelativePath", "Public/MotionPose.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_rightRingFingerUp_MetaData[] = {
		{ "Category", "RightFingersMap" },
		{ "ModuleRelativePath", "Public/MotionPose.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_rightLittleFingerUnder_MetaData[] = {
		{ "Category", "RightFingersMap" },
		{ "ModuleRelativePath", "Public/MotionPose.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_rightLittleFingerMid_MetaData[] = {
		{ "Category", "RightFingersMap" },
		{ "ModuleRelativePath", "Public/MotionPose.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_rightLittleFingerUp_MetaData[] = {
		{ "Category", "RightFingersMap" },
		{ "ModuleRelativePath", "Public/MotionPose.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TPose;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HipsRotator;
	static const UECodeGen_Private::FStructPropertyParams NewProp_crotch;
	static const UECodeGen_Private::FStructPropertyParams NewProp_waistTwo;
	static const UECodeGen_Private::FStructPropertyParams NewProp_waistOne;
	static const UECodeGen_Private::FStructPropertyParams NewProp_back;
	static const UECodeGen_Private::FStructPropertyParams NewProp_head;
	static const UECodeGen_Private::FStructPropertyParams NewProp_leftShoulder;
	static const UECodeGen_Private::FStructPropertyParams NewProp_leftUpperArm;
	static const UECodeGen_Private::FStructPropertyParams NewProp_leftLowerArm;
	static const UECodeGen_Private::FStructPropertyParams NewProp_leftHand;
	static const UECodeGen_Private::FStructPropertyParams NewProp_leftUpperLeg;
	static const UECodeGen_Private::FStructPropertyParams NewProp_leftLowerLeg;
	static const UECodeGen_Private::FStructPropertyParams NewProp_leftFoot;
	static const UECodeGen_Private::FStructPropertyParams NewProp_leftToe;
	static const UECodeGen_Private::FStructPropertyParams NewProp_rightShoulder;
	static const UECodeGen_Private::FStructPropertyParams NewProp_rightUpperArm;
	static const UECodeGen_Private::FStructPropertyParams NewProp_rightLowerArm;
	static const UECodeGen_Private::FStructPropertyParams NewProp_rightHand;
	static const UECodeGen_Private::FStructPropertyParams NewProp_rightUpperLeg;
	static const UECodeGen_Private::FStructPropertyParams NewProp_rightLowerLeg;
	static const UECodeGen_Private::FStructPropertyParams NewProp_rightFoot;
	static const UECodeGen_Private::FStructPropertyParams NewProp_rightToe;
	static const UECodeGen_Private::FStructPropertyParams NewProp_leftThumbUnder;
	static const UECodeGen_Private::FStructPropertyParams NewProp_leftThumbMid;
	static const UECodeGen_Private::FStructPropertyParams NewProp_leftThumbUp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_leftForeFingerUnder;
	static const UECodeGen_Private::FStructPropertyParams NewProp_leftForeFingerMid;
	static const UECodeGen_Private::FStructPropertyParams NewProp_leftForeFingerUp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_leftMiddleFingerUnder;
	static const UECodeGen_Private::FStructPropertyParams NewProp_leftMiddleFingerMid;
	static const UECodeGen_Private::FStructPropertyParams NewProp_leftMiddleFingerUp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_leftRingFingerUnder;
	static const UECodeGen_Private::FStructPropertyParams NewProp_leftRingFingerMid;
	static const UECodeGen_Private::FStructPropertyParams NewProp_leftRingFingerUp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_leftLittleFingerUnder;
	static const UECodeGen_Private::FStructPropertyParams NewProp_leftLittleFingerMid;
	static const UECodeGen_Private::FStructPropertyParams NewProp_leftLittleFingerUp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_rightThumbUnder;
	static const UECodeGen_Private::FStructPropertyParams NewProp_rightThumbMid;
	static const UECodeGen_Private::FStructPropertyParams NewProp_rightThumbUp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_rightForeFingerUnder;
	static const UECodeGen_Private::FStructPropertyParams NewProp_rightForeFingerMid;
	static const UECodeGen_Private::FStructPropertyParams NewProp_rightForeFingerUp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_rightMiddleFingerUnder;
	static const UECodeGen_Private::FStructPropertyParams NewProp_rightMiddleFingerMid;
	static const UECodeGen_Private::FStructPropertyParams NewProp_rightMiddleFingerUp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_rightRingFingerUnder;
	static const UECodeGen_Private::FStructPropertyParams NewProp_rightRingFingerMid;
	static const UECodeGen_Private::FStructPropertyParams NewProp_rightRingFingerUp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_rightLittleFingerUnder;
	static const UECodeGen_Private::FStructPropertyParams NewProp_rightLittleFingerMid;
	static const UECodeGen_Private::FStructPropertyParams NewProp_rightLittleFingerUp;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMotionPose>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_TPose = { "TPose", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMotionPose, TPose), Z_Construct_UScriptStruct_FPoseLink, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TPose_MetaData), NewProp_TPose_MetaData) }; // 1074011079
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_HipsRotator = { "HipsRotator", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMotionPose, HipsRotator), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HipsRotator_MetaData), NewProp_HipsRotator_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_crotch = { "crotch", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMotionPose, crotch), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_crotch_MetaData), NewProp_crotch_MetaData) }; // 4218265988
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_waistTwo = { "waistTwo", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMotionPose, waistTwo), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_waistTwo_MetaData), NewProp_waistTwo_MetaData) }; // 4218265988
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_waistOne = { "waistOne", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMotionPose, waistOne), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_waistOne_MetaData), NewProp_waistOne_MetaData) }; // 4218265988
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_back = { "back", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMotionPose, back), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_back_MetaData), NewProp_back_MetaData) }; // 4218265988
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_head = { "head", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMotionPose, head), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_head_MetaData), NewProp_head_MetaData) }; // 4218265988
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_leftShoulder = { "leftShoulder", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMotionPose, leftShoulder), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_leftShoulder_MetaData), NewProp_leftShoulder_MetaData) }; // 4218265988
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_leftUpperArm = { "leftUpperArm", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMotionPose, leftUpperArm), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_leftUpperArm_MetaData), NewProp_leftUpperArm_MetaData) }; // 4218265988
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_leftLowerArm = { "leftLowerArm", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMotionPose, leftLowerArm), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_leftLowerArm_MetaData), NewProp_leftLowerArm_MetaData) }; // 4218265988
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_leftHand = { "leftHand", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMotionPose, leftHand), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_leftHand_MetaData), NewProp_leftHand_MetaData) }; // 4218265988
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_leftUpperLeg = { "leftUpperLeg", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMotionPose, leftUpperLeg), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_leftUpperLeg_MetaData), NewProp_leftUpperLeg_MetaData) }; // 4218265988
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_leftLowerLeg = { "leftLowerLeg", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMotionPose, leftLowerLeg), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_leftLowerLeg_MetaData), NewProp_leftLowerLeg_MetaData) }; // 4218265988
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_leftFoot = { "leftFoot", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMotionPose, leftFoot), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_leftFoot_MetaData), NewProp_leftFoot_MetaData) }; // 4218265988
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_leftToe = { "leftToe", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMotionPose, leftToe), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_leftToe_MetaData), NewProp_leftToe_MetaData) }; // 4218265988
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_rightShoulder = { "rightShoulder", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMotionPose, rightShoulder), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_rightShoulder_MetaData), NewProp_rightShoulder_MetaData) }; // 4218265988
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_rightUpperArm = { "rightUpperArm", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMotionPose, rightUpperArm), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_rightUpperArm_MetaData), NewProp_rightUpperArm_MetaData) }; // 4218265988
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_rightLowerArm = { "rightLowerArm", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMotionPose, rightLowerArm), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_rightLowerArm_MetaData), NewProp_rightLowerArm_MetaData) }; // 4218265988
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_rightHand = { "rightHand", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMotionPose, rightHand), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_rightHand_MetaData), NewProp_rightHand_MetaData) }; // 4218265988
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_rightUpperLeg = { "rightUpperLeg", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMotionPose, rightUpperLeg), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_rightUpperLeg_MetaData), NewProp_rightUpperLeg_MetaData) }; // 4218265988
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_rightLowerLeg = { "rightLowerLeg", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMotionPose, rightLowerLeg), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_rightLowerLeg_MetaData), NewProp_rightLowerLeg_MetaData) }; // 4218265988
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_rightFoot = { "rightFoot", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMotionPose, rightFoot), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_rightFoot_MetaData), NewProp_rightFoot_MetaData) }; // 4218265988
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_rightToe = { "rightToe", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMotionPose, rightToe), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_rightToe_MetaData), NewProp_rightToe_MetaData) }; // 4218265988
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_leftThumbUnder = { "leftThumbUnder", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMotionPose, leftThumbUnder), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_leftThumbUnder_MetaData), NewProp_leftThumbUnder_MetaData) }; // 4218265988
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_leftThumbMid = { "leftThumbMid", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMotionPose, leftThumbMid), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_leftThumbMid_MetaData), NewProp_leftThumbMid_MetaData) }; // 4218265988
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_leftThumbUp = { "leftThumbUp", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMotionPose, leftThumbUp), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_leftThumbUp_MetaData), NewProp_leftThumbUp_MetaData) }; // 4218265988
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_leftForeFingerUnder = { "leftForeFingerUnder", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMotionPose, leftForeFingerUnder), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_leftForeFingerUnder_MetaData), NewProp_leftForeFingerUnder_MetaData) }; // 4218265988
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_leftForeFingerMid = { "leftForeFingerMid", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMotionPose, leftForeFingerMid), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_leftForeFingerMid_MetaData), NewProp_leftForeFingerMid_MetaData) }; // 4218265988
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_leftForeFingerUp = { "leftForeFingerUp", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMotionPose, leftForeFingerUp), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_leftForeFingerUp_MetaData), NewProp_leftForeFingerUp_MetaData) }; // 4218265988
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_leftMiddleFingerUnder = { "leftMiddleFingerUnder", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMotionPose, leftMiddleFingerUnder), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_leftMiddleFingerUnder_MetaData), NewProp_leftMiddleFingerUnder_MetaData) }; // 4218265988
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_leftMiddleFingerMid = { "leftMiddleFingerMid", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMotionPose, leftMiddleFingerMid), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_leftMiddleFingerMid_MetaData), NewProp_leftMiddleFingerMid_MetaData) }; // 4218265988
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_leftMiddleFingerUp = { "leftMiddleFingerUp", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMotionPose, leftMiddleFingerUp), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_leftMiddleFingerUp_MetaData), NewProp_leftMiddleFingerUp_MetaData) }; // 4218265988
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_leftRingFingerUnder = { "leftRingFingerUnder", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMotionPose, leftRingFingerUnder), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_leftRingFingerUnder_MetaData), NewProp_leftRingFingerUnder_MetaData) }; // 4218265988
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_leftRingFingerMid = { "leftRingFingerMid", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMotionPose, leftRingFingerMid), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_leftRingFingerMid_MetaData), NewProp_leftRingFingerMid_MetaData) }; // 4218265988
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_leftRingFingerUp = { "leftRingFingerUp", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMotionPose, leftRingFingerUp), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_leftRingFingerUp_MetaData), NewProp_leftRingFingerUp_MetaData) }; // 4218265988
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_leftLittleFingerUnder = { "leftLittleFingerUnder", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMotionPose, leftLittleFingerUnder), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_leftLittleFingerUnder_MetaData), NewProp_leftLittleFingerUnder_MetaData) }; // 4218265988
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_leftLittleFingerMid = { "leftLittleFingerMid", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMotionPose, leftLittleFingerMid), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_leftLittleFingerMid_MetaData), NewProp_leftLittleFingerMid_MetaData) }; // 4218265988
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_leftLittleFingerUp = { "leftLittleFingerUp", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMotionPose, leftLittleFingerUp), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_leftLittleFingerUp_MetaData), NewProp_leftLittleFingerUp_MetaData) }; // 4218265988
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_rightThumbUnder = { "rightThumbUnder", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMotionPose, rightThumbUnder), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_rightThumbUnder_MetaData), NewProp_rightThumbUnder_MetaData) }; // 4218265988
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_rightThumbMid = { "rightThumbMid", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMotionPose, rightThumbMid), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_rightThumbMid_MetaData), NewProp_rightThumbMid_MetaData) }; // 4218265988
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_rightThumbUp = { "rightThumbUp", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMotionPose, rightThumbUp), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_rightThumbUp_MetaData), NewProp_rightThumbUp_MetaData) }; // 4218265988
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_rightForeFingerUnder = { "rightForeFingerUnder", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMotionPose, rightForeFingerUnder), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_rightForeFingerUnder_MetaData), NewProp_rightForeFingerUnder_MetaData) }; // 4218265988
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_rightForeFingerMid = { "rightForeFingerMid", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMotionPose, rightForeFingerMid), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_rightForeFingerMid_MetaData), NewProp_rightForeFingerMid_MetaData) }; // 4218265988
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_rightForeFingerUp = { "rightForeFingerUp", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMotionPose, rightForeFingerUp), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_rightForeFingerUp_MetaData), NewProp_rightForeFingerUp_MetaData) }; // 4218265988
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_rightMiddleFingerUnder = { "rightMiddleFingerUnder", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMotionPose, rightMiddleFingerUnder), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_rightMiddleFingerUnder_MetaData), NewProp_rightMiddleFingerUnder_MetaData) }; // 4218265988
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_rightMiddleFingerMid = { "rightMiddleFingerMid", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMotionPose, rightMiddleFingerMid), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_rightMiddleFingerMid_MetaData), NewProp_rightMiddleFingerMid_MetaData) }; // 4218265988
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_rightMiddleFingerUp = { "rightMiddleFingerUp", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMotionPose, rightMiddleFingerUp), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_rightMiddleFingerUp_MetaData), NewProp_rightMiddleFingerUp_MetaData) }; // 4218265988
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_rightRingFingerUnder = { "rightRingFingerUnder", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMotionPose, rightRingFingerUnder), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_rightRingFingerUnder_MetaData), NewProp_rightRingFingerUnder_MetaData) }; // 4218265988
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_rightRingFingerMid = { "rightRingFingerMid", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMotionPose, rightRingFingerMid), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_rightRingFingerMid_MetaData), NewProp_rightRingFingerMid_MetaData) }; // 4218265988
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_rightRingFingerUp = { "rightRingFingerUp", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMotionPose, rightRingFingerUp), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_rightRingFingerUp_MetaData), NewProp_rightRingFingerUp_MetaData) }; // 4218265988
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_rightLittleFingerUnder = { "rightLittleFingerUnder", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMotionPose, rightLittleFingerUnder), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_rightLittleFingerUnder_MetaData), NewProp_rightLittleFingerUnder_MetaData) }; // 4218265988
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_rightLittleFingerMid = { "rightLittleFingerMid", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMotionPose, rightLittleFingerMid), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_rightLittleFingerMid_MetaData), NewProp_rightLittleFingerMid_MetaData) }; // 4218265988
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_rightLittleFingerUp = { "rightLittleFingerUp", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMotionPose, rightLittleFingerUp), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_rightLittleFingerUp_MetaData), NewProp_rightLittleFingerUp_MetaData) }; // 4218265988
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMotionPose_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_TPose,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_HipsRotator,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_crotch,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_waistTwo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_waistOne,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_back,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_head,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_leftShoulder,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_leftUpperArm,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_leftLowerArm,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_leftHand,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_leftUpperLeg,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_leftLowerLeg,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_leftFoot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_leftToe,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_rightShoulder,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_rightUpperArm,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_rightLowerArm,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_rightHand,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_rightUpperLeg,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_rightLowerLeg,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_rightFoot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_rightToe,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_leftThumbUnder,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_leftThumbMid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_leftThumbUp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_leftForeFingerUnder,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_leftForeFingerMid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_leftForeFingerUp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_leftMiddleFingerUnder,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_leftMiddleFingerMid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_leftMiddleFingerUp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_leftRingFingerUnder,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_leftRingFingerMid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_leftRingFingerUp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_leftLittleFingerUnder,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_leftLittleFingerMid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_leftLittleFingerUp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_rightThumbUnder,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_rightThumbMid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_rightThumbUp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_rightForeFingerUnder,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_rightForeFingerMid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_rightForeFingerUp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_rightMiddleFingerUnder,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_rightMiddleFingerMid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_rightMiddleFingerUp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_rightRingFingerUnder,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_rightRingFingerMid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_rightRingFingerUp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_rightLittleFingerUnder,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_rightLittleFingerMid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_rightLittleFingerUp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMotionPose_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMotionPose_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MotionSuit,
	Z_Construct_UScriptStruct_FAnimNode_Base,
	&NewStructOps,
	"MotionPose",
	Z_Construct_UScriptStruct_FMotionPose_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMotionPose_Statics::PropPointers),
	sizeof(FMotionPose),
	alignof(FMotionPose),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMotionPose_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMotionPose_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMotionPose()
{
	if (!Z_Registration_Info_UScriptStruct_MotionPose.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MotionPose.InnerSingleton, Z_Construct_UScriptStruct_FMotionPose_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MotionPose.InnerSingleton;
}
// End ScriptStruct FMotionPose

// Begin Registration
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_MotionSuit_Source_MotionSuit_Public_MotionPose_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMotionPose::StaticStruct, Z_Construct_UScriptStruct_FMotionPose_Statics::NewStructOps, TEXT("MotionPose"), &Z_Registration_Info_UScriptStruct_MotionPose, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMotionPose), 4266485859U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_MotionSuit_Source_MotionSuit_Public_MotionPose_h_8420582(TEXT("/Script/MotionSuit"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_HostProject_Plugins_MotionSuit_Source_MotionSuit_Public_MotionPose_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_MotionSuit_Source_MotionSuit_Public_MotionPose_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
