// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MotionSuit/Public/MotionPose.h"
#include "../../Source/Runtime/Engine/Classes/Animation/AnimNodeBase.h"
#include "../../Source/Runtime/Engine/Public/Animation/BoneReference.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMotionPose() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_Base();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBoneReference();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPoseLink();
	MOTIONSUIT_API UScriptStruct* Z_Construct_UScriptStruct_FMotionPose();
	UPackage* Z_Construct_UPackage__Script_MotionSuit();
// End Cross Module References

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
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TPose_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TPose;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HipsRotator_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HipsRotator;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_crotch_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_crotch;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_waistTwo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_waistTwo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_waistOne_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_waistOne;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_back_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_back;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_head_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_head;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_leftShoulder_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_leftShoulder;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_leftUpperArm_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_leftUpperArm;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_leftLowerArm_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_leftLowerArm;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_leftHand_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_leftHand;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_leftUpperLeg_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_leftUpperLeg;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_leftLowerLeg_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_leftLowerLeg;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_leftFoot_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_leftFoot;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_leftToe_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_leftToe;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_rightShoulder_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_rightShoulder;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_rightUpperArm_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_rightUpperArm;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_rightLowerArm_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_rightLowerArm;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_rightHand_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_rightHand;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_rightUpperLeg_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_rightUpperLeg;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_rightLowerLeg_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_rightLowerLeg;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_rightFoot_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_rightFoot;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_rightToe_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_rightToe;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_leftThumbUnder_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_leftThumbUnder;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_leftThumbMid_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_leftThumbMid;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_leftThumbUp_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_leftThumbUp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_leftForeFingerUnder_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_leftForeFingerUnder;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_leftForeFingerMid_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_leftForeFingerMid;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_leftForeFingerUp_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_leftForeFingerUp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_leftMiddleFingerUnder_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_leftMiddleFingerUnder;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_leftMiddleFingerMid_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_leftMiddleFingerMid;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_leftMiddleFingerUp_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_leftMiddleFingerUp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_leftRingFingerUnder_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_leftRingFingerUnder;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_leftRingFingerMid_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_leftRingFingerMid;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_leftRingFingerUp_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_leftRingFingerUp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_leftLittleFingerUnder_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_leftLittleFingerUnder;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_leftLittleFingerMid_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_leftLittleFingerMid;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_leftLittleFingerUp_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_leftLittleFingerUp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_rightThumbUnder_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_rightThumbUnder;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_rightThumbMid_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_rightThumbMid;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_rightThumbUp_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_rightThumbUp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_rightForeFingerUnder_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_rightForeFingerUnder;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_rightForeFingerMid_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_rightForeFingerMid;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_rightForeFingerUp_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_rightForeFingerUp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_rightMiddleFingerUnder_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_rightMiddleFingerUnder;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_rightMiddleFingerMid_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_rightMiddleFingerMid;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_rightMiddleFingerUp_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_rightMiddleFingerUp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_rightRingFingerUnder_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_rightRingFingerUnder;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_rightRingFingerMid_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_rightRingFingerMid;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_rightRingFingerUp_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_rightRingFingerUp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_rightLittleFingerUnder_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_rightLittleFingerUnder;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_rightLittleFingerMid_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_rightLittleFingerMid;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_rightLittleFingerUp_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_rightLittleFingerUp;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMotionPose_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MotionPose.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMotionPose_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMotionPose>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_TPose_MetaData[] = {
		{ "Category", "Links" },
		{ "ModuleRelativePath", "Public/MotionPose.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_TPose = { "TPose", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMotionPose, TPose), Z_Construct_UScriptStruct_FPoseLink, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_TPose_MetaData), Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_TPose_MetaData) }; // 1465313103
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_HipsRotator_MetaData[] = {
		{ "Category", "MotionSetting" },
		{ "ModuleRelativePath", "Public/MotionPose.h" },
		{ "PinShownByDefault", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_HipsRotator = { "HipsRotator", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMotionPose, HipsRotator), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_HipsRotator_MetaData), Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_HipsRotator_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_crotch_MetaData[] = {
		{ "Category", "MotionBodyMap" },
		{ "Comment", "/*\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd*/" },
		{ "ModuleRelativePath", "Public/MotionPose.h" },
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_crotch = { "crotch", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMotionPose, crotch), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_crotch_MetaData), Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_crotch_MetaData) }; // 1286936164
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_waistTwo_MetaData[] = {
		{ "Category", "MotionBodyMap" },
		{ "ModuleRelativePath", "Public/MotionPose.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_waistTwo = { "waistTwo", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMotionPose, waistTwo), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_waistTwo_MetaData), Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_waistTwo_MetaData) }; // 1286936164
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_waistOne_MetaData[] = {
		{ "Category", "MotionBodyMap" },
		{ "ModuleRelativePath", "Public/MotionPose.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_waistOne = { "waistOne", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMotionPose, waistOne), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_waistOne_MetaData), Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_waistOne_MetaData) }; // 1286936164
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_back_MetaData[] = {
		{ "Category", "MotionBodyMap" },
		{ "ModuleRelativePath", "Public/MotionPose.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_back = { "back", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMotionPose, back), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_back_MetaData), Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_back_MetaData) }; // 1286936164
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_head_MetaData[] = {
		{ "Category", "MotionBodyMap" },
		{ "ModuleRelativePath", "Public/MotionPose.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_head = { "head", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMotionPose, head), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_head_MetaData), Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_head_MetaData) }; // 1286936164
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_leftShoulder_MetaData[] = {
		{ "Category", "MotionBodyMap" },
		{ "Comment", "/*\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd*/" },
		{ "ModuleRelativePath", "Public/MotionPose.h" },
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_leftShoulder = { "leftShoulder", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMotionPose, leftShoulder), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_leftShoulder_MetaData), Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_leftShoulder_MetaData) }; // 1286936164
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_leftUpperArm_MetaData[] = {
		{ "Category", "MotionBodyMap" },
		{ "ModuleRelativePath", "Public/MotionPose.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_leftUpperArm = { "leftUpperArm", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMotionPose, leftUpperArm), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_leftUpperArm_MetaData), Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_leftUpperArm_MetaData) }; // 1286936164
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_leftLowerArm_MetaData[] = {
		{ "Category", "MotionBodyMap" },
		{ "ModuleRelativePath", "Public/MotionPose.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_leftLowerArm = { "leftLowerArm", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMotionPose, leftLowerArm), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_leftLowerArm_MetaData), Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_leftLowerArm_MetaData) }; // 1286936164
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_leftHand_MetaData[] = {
		{ "Category", "MotionBodyMap" },
		{ "ModuleRelativePath", "Public/MotionPose.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_leftHand = { "leftHand", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMotionPose, leftHand), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_leftHand_MetaData), Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_leftHand_MetaData) }; // 1286936164
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_leftUpperLeg_MetaData[] = {
		{ "Category", "MotionBodyMap" },
		{ "ModuleRelativePath", "Public/MotionPose.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_leftUpperLeg = { "leftUpperLeg", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMotionPose, leftUpperLeg), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_leftUpperLeg_MetaData), Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_leftUpperLeg_MetaData) }; // 1286936164
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_leftLowerLeg_MetaData[] = {
		{ "Category", "MotionBodyMap" },
		{ "ModuleRelativePath", "Public/MotionPose.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_leftLowerLeg = { "leftLowerLeg", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMotionPose, leftLowerLeg), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_leftLowerLeg_MetaData), Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_leftLowerLeg_MetaData) }; // 1286936164
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_leftFoot_MetaData[] = {
		{ "Category", "MotionBodyMap" },
		{ "ModuleRelativePath", "Public/MotionPose.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_leftFoot = { "leftFoot", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMotionPose, leftFoot), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_leftFoot_MetaData), Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_leftFoot_MetaData) }; // 1286936164
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_leftToe_MetaData[] = {
		{ "Category", "MotionBodyMap" },
		{ "ModuleRelativePath", "Public/MotionPose.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_leftToe = { "leftToe", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMotionPose, leftToe), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_leftToe_MetaData), Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_leftToe_MetaData) }; // 1286936164
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_rightShoulder_MetaData[] = {
		{ "Category", "MotionBodyMap" },
		{ "Comment", "/*\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd2\xbd\xef\xbf\xbd*/" },
		{ "ModuleRelativePath", "Public/MotionPose.h" },
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd2\xbd\xef\xbf\xbd" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_rightShoulder = { "rightShoulder", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMotionPose, rightShoulder), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_rightShoulder_MetaData), Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_rightShoulder_MetaData) }; // 1286936164
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_rightUpperArm_MetaData[] = {
		{ "Category", "MotionBodyMap" },
		{ "ModuleRelativePath", "Public/MotionPose.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_rightUpperArm = { "rightUpperArm", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMotionPose, rightUpperArm), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_rightUpperArm_MetaData), Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_rightUpperArm_MetaData) }; // 1286936164
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_rightLowerArm_MetaData[] = {
		{ "Category", "MotionBodyMap" },
		{ "ModuleRelativePath", "Public/MotionPose.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_rightLowerArm = { "rightLowerArm", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMotionPose, rightLowerArm), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_rightLowerArm_MetaData), Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_rightLowerArm_MetaData) }; // 1286936164
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_rightHand_MetaData[] = {
		{ "Category", "MotionBodyMap" },
		{ "ModuleRelativePath", "Public/MotionPose.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_rightHand = { "rightHand", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMotionPose, rightHand), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_rightHand_MetaData), Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_rightHand_MetaData) }; // 1286936164
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_rightUpperLeg_MetaData[] = {
		{ "Category", "MotionBodyMap" },
		{ "ModuleRelativePath", "Public/MotionPose.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_rightUpperLeg = { "rightUpperLeg", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMotionPose, rightUpperLeg), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_rightUpperLeg_MetaData), Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_rightUpperLeg_MetaData) }; // 1286936164
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_rightLowerLeg_MetaData[] = {
		{ "Category", "MotionBodyMap" },
		{ "ModuleRelativePath", "Public/MotionPose.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_rightLowerLeg = { "rightLowerLeg", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMotionPose, rightLowerLeg), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_rightLowerLeg_MetaData), Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_rightLowerLeg_MetaData) }; // 1286936164
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_rightFoot_MetaData[] = {
		{ "Category", "MotionBodyMap" },
		{ "ModuleRelativePath", "Public/MotionPose.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_rightFoot = { "rightFoot", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMotionPose, rightFoot), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_rightFoot_MetaData), Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_rightFoot_MetaData) }; // 1286936164
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_rightToe_MetaData[] = {
		{ "Category", "MotionBodyMap" },
		{ "ModuleRelativePath", "Public/MotionPose.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_rightToe = { "rightToe", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMotionPose, rightToe), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_rightToe_MetaData), Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_rightToe_MetaData) }; // 1286936164
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_leftThumbUnder_MetaData[] = {
		{ "Category", "LeftFingersMap" },
		{ "Comment", "//\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd6\xb8\n" },
		{ "ModuleRelativePath", "Public/MotionPose.h" },
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd6\xb8" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_leftThumbUnder = { "leftThumbUnder", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMotionPose, leftThumbUnder), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_leftThumbUnder_MetaData), Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_leftThumbUnder_MetaData) }; // 1286936164
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_leftThumbMid_MetaData[] = {
		{ "Category", "LeftFingersMap" },
		{ "ModuleRelativePath", "Public/MotionPose.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_leftThumbMid = { "leftThumbMid", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMotionPose, leftThumbMid), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_leftThumbMid_MetaData), Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_leftThumbMid_MetaData) }; // 1286936164
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_leftThumbUp_MetaData[] = {
		{ "Category", "LeftFingersMap" },
		{ "ModuleRelativePath", "Public/MotionPose.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_leftThumbUp = { "leftThumbUp", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMotionPose, leftThumbUp), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_leftThumbUp_MetaData), Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_leftThumbUp_MetaData) }; // 1286936164
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_leftForeFingerUnder_MetaData[] = {
		{ "Category", "LeftFingersMap" },
		{ "ModuleRelativePath", "Public/MotionPose.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_leftForeFingerUnder = { "leftForeFingerUnder", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMotionPose, leftForeFingerUnder), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_leftForeFingerUnder_MetaData), Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_leftForeFingerUnder_MetaData) }; // 1286936164
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_leftForeFingerMid_MetaData[] = {
		{ "Category", "LeftFingersMap" },
		{ "ModuleRelativePath", "Public/MotionPose.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_leftForeFingerMid = { "leftForeFingerMid", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMotionPose, leftForeFingerMid), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_leftForeFingerMid_MetaData), Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_leftForeFingerMid_MetaData) }; // 1286936164
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_leftForeFingerUp_MetaData[] = {
		{ "Category", "LeftFingersMap" },
		{ "ModuleRelativePath", "Public/MotionPose.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_leftForeFingerUp = { "leftForeFingerUp", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMotionPose, leftForeFingerUp), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_leftForeFingerUp_MetaData), Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_leftForeFingerUp_MetaData) }; // 1286936164
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_leftMiddleFingerUnder_MetaData[] = {
		{ "Category", "LeftFingersMap" },
		{ "ModuleRelativePath", "Public/MotionPose.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_leftMiddleFingerUnder = { "leftMiddleFingerUnder", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMotionPose, leftMiddleFingerUnder), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_leftMiddleFingerUnder_MetaData), Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_leftMiddleFingerUnder_MetaData) }; // 1286936164
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_leftMiddleFingerMid_MetaData[] = {
		{ "Category", "LeftFingersMap" },
		{ "ModuleRelativePath", "Public/MotionPose.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_leftMiddleFingerMid = { "leftMiddleFingerMid", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMotionPose, leftMiddleFingerMid), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_leftMiddleFingerMid_MetaData), Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_leftMiddleFingerMid_MetaData) }; // 1286936164
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_leftMiddleFingerUp_MetaData[] = {
		{ "Category", "LeftFingersMap" },
		{ "ModuleRelativePath", "Public/MotionPose.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_leftMiddleFingerUp = { "leftMiddleFingerUp", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMotionPose, leftMiddleFingerUp), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_leftMiddleFingerUp_MetaData), Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_leftMiddleFingerUp_MetaData) }; // 1286936164
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_leftRingFingerUnder_MetaData[] = {
		{ "Category", "LeftFingersMap" },
		{ "ModuleRelativePath", "Public/MotionPose.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_leftRingFingerUnder = { "leftRingFingerUnder", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMotionPose, leftRingFingerUnder), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_leftRingFingerUnder_MetaData), Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_leftRingFingerUnder_MetaData) }; // 1286936164
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_leftRingFingerMid_MetaData[] = {
		{ "Category", "LeftFingersMap" },
		{ "ModuleRelativePath", "Public/MotionPose.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_leftRingFingerMid = { "leftRingFingerMid", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMotionPose, leftRingFingerMid), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_leftRingFingerMid_MetaData), Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_leftRingFingerMid_MetaData) }; // 1286936164
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_leftRingFingerUp_MetaData[] = {
		{ "Category", "LeftFingersMap" },
		{ "ModuleRelativePath", "Public/MotionPose.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_leftRingFingerUp = { "leftRingFingerUp", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMotionPose, leftRingFingerUp), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_leftRingFingerUp_MetaData), Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_leftRingFingerUp_MetaData) }; // 1286936164
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_leftLittleFingerUnder_MetaData[] = {
		{ "Category", "LeftFingersMap" },
		{ "ModuleRelativePath", "Public/MotionPose.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_leftLittleFingerUnder = { "leftLittleFingerUnder", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMotionPose, leftLittleFingerUnder), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_leftLittleFingerUnder_MetaData), Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_leftLittleFingerUnder_MetaData) }; // 1286936164
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_leftLittleFingerMid_MetaData[] = {
		{ "Category", "LeftFingersMap" },
		{ "ModuleRelativePath", "Public/MotionPose.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_leftLittleFingerMid = { "leftLittleFingerMid", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMotionPose, leftLittleFingerMid), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_leftLittleFingerMid_MetaData), Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_leftLittleFingerMid_MetaData) }; // 1286936164
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_leftLittleFingerUp_MetaData[] = {
		{ "Category", "LeftFingersMap" },
		{ "ModuleRelativePath", "Public/MotionPose.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_leftLittleFingerUp = { "leftLittleFingerUp", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMotionPose, leftLittleFingerUp), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_leftLittleFingerUp_MetaData), Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_leftLittleFingerUp_MetaData) }; // 1286936164
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_rightThumbUnder_MetaData[] = {
		{ "Category", "RightFingersMap" },
		{ "Comment", "//\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd6\xb8\n" },
		{ "ModuleRelativePath", "Public/MotionPose.h" },
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd6\xb8" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_rightThumbUnder = { "rightThumbUnder", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMotionPose, rightThumbUnder), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_rightThumbUnder_MetaData), Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_rightThumbUnder_MetaData) }; // 1286936164
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_rightThumbMid_MetaData[] = {
		{ "Category", "RightFingersMap" },
		{ "ModuleRelativePath", "Public/MotionPose.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_rightThumbMid = { "rightThumbMid", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMotionPose, rightThumbMid), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_rightThumbMid_MetaData), Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_rightThumbMid_MetaData) }; // 1286936164
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_rightThumbUp_MetaData[] = {
		{ "Category", "RightFingersMap" },
		{ "ModuleRelativePath", "Public/MotionPose.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_rightThumbUp = { "rightThumbUp", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMotionPose, rightThumbUp), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_rightThumbUp_MetaData), Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_rightThumbUp_MetaData) }; // 1286936164
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_rightForeFingerUnder_MetaData[] = {
		{ "Category", "RightFingersMap" },
		{ "ModuleRelativePath", "Public/MotionPose.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_rightForeFingerUnder = { "rightForeFingerUnder", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMotionPose, rightForeFingerUnder), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_rightForeFingerUnder_MetaData), Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_rightForeFingerUnder_MetaData) }; // 1286936164
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_rightForeFingerMid_MetaData[] = {
		{ "Category", "RightFingersMap" },
		{ "ModuleRelativePath", "Public/MotionPose.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_rightForeFingerMid = { "rightForeFingerMid", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMotionPose, rightForeFingerMid), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_rightForeFingerMid_MetaData), Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_rightForeFingerMid_MetaData) }; // 1286936164
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_rightForeFingerUp_MetaData[] = {
		{ "Category", "RightFingersMap" },
		{ "ModuleRelativePath", "Public/MotionPose.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_rightForeFingerUp = { "rightForeFingerUp", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMotionPose, rightForeFingerUp), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_rightForeFingerUp_MetaData), Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_rightForeFingerUp_MetaData) }; // 1286936164
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_rightMiddleFingerUnder_MetaData[] = {
		{ "Category", "RightFingersMap" },
		{ "ModuleRelativePath", "Public/MotionPose.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_rightMiddleFingerUnder = { "rightMiddleFingerUnder", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMotionPose, rightMiddleFingerUnder), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_rightMiddleFingerUnder_MetaData), Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_rightMiddleFingerUnder_MetaData) }; // 1286936164
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_rightMiddleFingerMid_MetaData[] = {
		{ "Category", "RightFingersMap" },
		{ "ModuleRelativePath", "Public/MotionPose.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_rightMiddleFingerMid = { "rightMiddleFingerMid", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMotionPose, rightMiddleFingerMid), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_rightMiddleFingerMid_MetaData), Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_rightMiddleFingerMid_MetaData) }; // 1286936164
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_rightMiddleFingerUp_MetaData[] = {
		{ "Category", "RightFingersMap" },
		{ "ModuleRelativePath", "Public/MotionPose.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_rightMiddleFingerUp = { "rightMiddleFingerUp", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMotionPose, rightMiddleFingerUp), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_rightMiddleFingerUp_MetaData), Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_rightMiddleFingerUp_MetaData) }; // 1286936164
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_rightRingFingerUnder_MetaData[] = {
		{ "Category", "RightFingersMap" },
		{ "ModuleRelativePath", "Public/MotionPose.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_rightRingFingerUnder = { "rightRingFingerUnder", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMotionPose, rightRingFingerUnder), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_rightRingFingerUnder_MetaData), Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_rightRingFingerUnder_MetaData) }; // 1286936164
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_rightRingFingerMid_MetaData[] = {
		{ "Category", "RightFingersMap" },
		{ "ModuleRelativePath", "Public/MotionPose.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_rightRingFingerMid = { "rightRingFingerMid", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMotionPose, rightRingFingerMid), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_rightRingFingerMid_MetaData), Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_rightRingFingerMid_MetaData) }; // 1286936164
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_rightRingFingerUp_MetaData[] = {
		{ "Category", "RightFingersMap" },
		{ "ModuleRelativePath", "Public/MotionPose.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_rightRingFingerUp = { "rightRingFingerUp", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMotionPose, rightRingFingerUp), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_rightRingFingerUp_MetaData), Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_rightRingFingerUp_MetaData) }; // 1286936164
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_rightLittleFingerUnder_MetaData[] = {
		{ "Category", "RightFingersMap" },
		{ "ModuleRelativePath", "Public/MotionPose.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_rightLittleFingerUnder = { "rightLittleFingerUnder", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMotionPose, rightLittleFingerUnder), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_rightLittleFingerUnder_MetaData), Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_rightLittleFingerUnder_MetaData) }; // 1286936164
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_rightLittleFingerMid_MetaData[] = {
		{ "Category", "RightFingersMap" },
		{ "ModuleRelativePath", "Public/MotionPose.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_rightLittleFingerMid = { "rightLittleFingerMid", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMotionPose, rightLittleFingerMid), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_rightLittleFingerMid_MetaData), Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_rightLittleFingerMid_MetaData) }; // 1286936164
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_rightLittleFingerUp_MetaData[] = {
		{ "Category", "RightFingersMap" },
		{ "ModuleRelativePath", "Public/MotionPose.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_rightLittleFingerUp = { "rightLittleFingerUp", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMotionPose, rightLittleFingerUp), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_rightLittleFingerUp_MetaData), Z_Construct_UScriptStruct_FMotionPose_Statics::NewProp_rightLittleFingerUp_MetaData) }; // 1286936164
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
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMotionPose_Statics::ReturnStructParams = {
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
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMotionPose_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FMotionPose()
	{
		if (!Z_Registration_Info_UScriptStruct_MotionPose.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MotionPose.InnerSingleton, Z_Construct_UScriptStruct_FMotionPose_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MotionPose.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_MotionSuit_Source_MotionSuit_Public_MotionPose_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_MotionSuit_Source_MotionSuit_Public_MotionPose_h_Statics::ScriptStructInfo[] = {
		{ FMotionPose::StaticStruct, Z_Construct_UScriptStruct_FMotionPose_Statics::NewStructOps, TEXT("MotionPose"), &Z_Registration_Info_UScriptStruct_MotionPose, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMotionPose), 3845410058U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_MotionSuit_Source_MotionSuit_Public_MotionPose_h_3833580052(TEXT("/Script/MotionSuit"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_HostProject_Plugins_MotionSuit_Source_MotionSuit_Public_MotionPose_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_MotionSuit_Source_MotionSuit_Public_MotionPose_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
