// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MotionSuit/Public/MotionLib.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMotionLib() {}
// Cross Module References
	MOTIONSUIT_API UEnum* Z_Construct_UEnum_MotionSuit_EModelOrientation();
	MOTIONSUIT_API UEnum* Z_Construct_UEnum_MotionSuit_EMotionBoneEnum();
	MOTIONSUIT_API UEnum* Z_Construct_UEnum_MotionSuit_ERotatingOrder();
	UPackage* Z_Construct_UPackage__Script_MotionSuit();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EModelOrientation;
	static UEnum* EModelOrientation_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EModelOrientation.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EModelOrientation.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MotionSuit_EModelOrientation, (UObject*)Z_Construct_UPackage__Script_MotionSuit(), TEXT("EModelOrientation"));
		}
		return Z_Registration_Info_UEnum_EModelOrientation.OuterSingleton;
	}
	template<> MOTIONSUIT_API UEnum* StaticEnum<EModelOrientation>()
	{
		return EModelOrientation_StaticEnum();
	}
	struct Z_Construct_UEnum_MotionSuit_EModelOrientation_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MotionSuit_EModelOrientation_Statics::Enumerators[] = {
		{ "EModelOrientation::X", (int64)EModelOrientation::X },
		{ "EModelOrientation::X_", (int64)EModelOrientation::X_ },
		{ "EModelOrientation::Y", (int64)EModelOrientation::Y },
		{ "EModelOrientation::Y_", (int64)EModelOrientation::Y_ },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MotionSuit_EModelOrientation_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//\xc4\xa3\xef\xbf\xbd\xcd\xb3\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
		{ "ModuleRelativePath", "Public/MotionLib.h" },
		{ "ToolTip", "\xc4\xa3\xef\xbf\xbd\xcd\xb3\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
		{ "X.DisplayName", "X" },
		{ "X.Name", "EModelOrientation::X" },
		{ "X_.DisplayName", "-X" },
		{ "X_.Name", "EModelOrientation::X_" },
		{ "Y.DisplayName", "Y" },
		{ "Y.Name", "EModelOrientation::Y" },
		{ "Y_.DisplayName", "-Y" },
		{ "Y_.Name", "EModelOrientation::Y_" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MotionSuit_EModelOrientation_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MotionSuit,
		nullptr,
		"EModelOrientation",
		"EModelOrientation",
		Z_Construct_UEnum_MotionSuit_EModelOrientation_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MotionSuit_EModelOrientation_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MotionSuit_EModelOrientation_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MotionSuit_EModelOrientation_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_MotionSuit_EModelOrientation()
	{
		if (!Z_Registration_Info_UEnum_EModelOrientation.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EModelOrientation.InnerSingleton, Z_Construct_UEnum_MotionSuit_EModelOrientation_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EModelOrientation.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERotatingOrder;
	static UEnum* ERotatingOrder_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ERotatingOrder.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ERotatingOrder.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MotionSuit_ERotatingOrder, (UObject*)Z_Construct_UPackage__Script_MotionSuit(), TEXT("ERotatingOrder"));
		}
		return Z_Registration_Info_UEnum_ERotatingOrder.OuterSingleton;
	}
	template<> MOTIONSUIT_API UEnum* StaticEnum<ERotatingOrder>()
	{
		return ERotatingOrder_StaticEnum();
	}
	struct Z_Construct_UEnum_MotionSuit_ERotatingOrder_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MotionSuit_ERotatingOrder_Statics::Enumerators[] = {
		{ "ERotatingOrder::XYZ", (int64)ERotatingOrder::XYZ },
		{ "ERotatingOrder::XZY", (int64)ERotatingOrder::XZY },
		{ "ERotatingOrder::YZX", (int64)ERotatingOrder::YZX },
		{ "ERotatingOrder::YXZ", (int64)ERotatingOrder::YXZ },
		{ "ERotatingOrder::ZXY", (int64)ERotatingOrder::ZXY },
		{ "ERotatingOrder::ZYX", (int64)ERotatingOrder::ZYX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MotionSuit_ERotatingOrder_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//\xc5\xb7\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd1\xa1\xd7\xa5\xcb\xb3\xef\xbf\xbd\xef\xbf\xbd\xc3\xb6\xef\xbf\xbd\xef\xbf\xbd\n" },
		{ "ModuleRelativePath", "Public/MotionLib.h" },
		{ "ToolTip", "\xc5\xb7\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd1\xa1\xd7\xa5\xcb\xb3\xef\xbf\xbd\xef\xbf\xbd\xc3\xb6\xef\xbf\xbd\xef\xbf\xbd" },
		{ "XYZ.Name", "ERotatingOrder::XYZ" },
		{ "XZY.Name", "ERotatingOrder::XZY" },
		{ "YXZ.Name", "ERotatingOrder::YXZ" },
		{ "YZX.Name", "ERotatingOrder::YZX" },
		{ "ZXY.Name", "ERotatingOrder::ZXY" },
		{ "ZYX.Name", "ERotatingOrder::ZYX" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MotionSuit_ERotatingOrder_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MotionSuit,
		nullptr,
		"ERotatingOrder",
		"ERotatingOrder",
		Z_Construct_UEnum_MotionSuit_ERotatingOrder_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MotionSuit_ERotatingOrder_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MotionSuit_ERotatingOrder_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MotionSuit_ERotatingOrder_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_MotionSuit_ERotatingOrder()
	{
		if (!Z_Registration_Info_UEnum_ERotatingOrder.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERotatingOrder.InnerSingleton, Z_Construct_UEnum_MotionSuit_ERotatingOrder_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ERotatingOrder.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMotionBoneEnum;
	static UEnum* EMotionBoneEnum_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMotionBoneEnum.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMotionBoneEnum.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MotionSuit_EMotionBoneEnum, (UObject*)Z_Construct_UPackage__Script_MotionSuit(), TEXT("EMotionBoneEnum"));
		}
		return Z_Registration_Info_UEnum_EMotionBoneEnum.OuterSingleton;
	}
	template<> MOTIONSUIT_API UEnum* StaticEnum<EMotionBoneEnum>()
	{
		return EMotionBoneEnum_StaticEnum();
	}
	struct Z_Construct_UEnum_MotionSuit_EMotionBoneEnum_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MotionSuit_EMotionBoneEnum_Statics::Enumerators[] = {
		{ "EMotionBoneEnum::crotch", (int64)EMotionBoneEnum::crotch },
		{ "EMotionBoneEnum::waistTwo", (int64)EMotionBoneEnum::waistTwo },
		{ "EMotionBoneEnum::waistOne", (int64)EMotionBoneEnum::waistOne },
		{ "EMotionBoneEnum::back", (int64)EMotionBoneEnum::back },
		{ "EMotionBoneEnum::head", (int64)EMotionBoneEnum::head },
		{ "EMotionBoneEnum::leftShoulder", (int64)EMotionBoneEnum::leftShoulder },
		{ "EMotionBoneEnum::leftUpperArm", (int64)EMotionBoneEnum::leftUpperArm },
		{ "EMotionBoneEnum::leftLowerArm", (int64)EMotionBoneEnum::leftLowerArm },
		{ "EMotionBoneEnum::leftHand", (int64)EMotionBoneEnum::leftHand },
		{ "EMotionBoneEnum::leftUpperLeg", (int64)EMotionBoneEnum::leftUpperLeg },
		{ "EMotionBoneEnum::leftLowerLeg", (int64)EMotionBoneEnum::leftLowerLeg },
		{ "EMotionBoneEnum::leftFoot", (int64)EMotionBoneEnum::leftFoot },
		{ "EMotionBoneEnum::leftToe", (int64)EMotionBoneEnum::leftToe },
		{ "EMotionBoneEnum::rightShoulder", (int64)EMotionBoneEnum::rightShoulder },
		{ "EMotionBoneEnum::rightUpperArm", (int64)EMotionBoneEnum::rightUpperArm },
		{ "EMotionBoneEnum::rightLowerArm", (int64)EMotionBoneEnum::rightLowerArm },
		{ "EMotionBoneEnum::rightHand", (int64)EMotionBoneEnum::rightHand },
		{ "EMotionBoneEnum::rightUpperLeg", (int64)EMotionBoneEnum::rightUpperLeg },
		{ "EMotionBoneEnum::rightLowerLeg", (int64)EMotionBoneEnum::rightLowerLeg },
		{ "EMotionBoneEnum::rightFoot", (int64)EMotionBoneEnum::rightFoot },
		{ "EMotionBoneEnum::rightToe", (int64)EMotionBoneEnum::rightToe },
		{ "EMotionBoneEnum::leftThumbUnder", (int64)EMotionBoneEnum::leftThumbUnder },
		{ "EMotionBoneEnum::leftThumbMid", (int64)EMotionBoneEnum::leftThumbMid },
		{ "EMotionBoneEnum::leftThumbUp", (int64)EMotionBoneEnum::leftThumbUp },
		{ "EMotionBoneEnum::leftForeFingerUnder", (int64)EMotionBoneEnum::leftForeFingerUnder },
		{ "EMotionBoneEnum::leftForeFingerMid", (int64)EMotionBoneEnum::leftForeFingerMid },
		{ "EMotionBoneEnum::leftForeFingerUp", (int64)EMotionBoneEnum::leftForeFingerUp },
		{ "EMotionBoneEnum::leftMiddleFingerUnder", (int64)EMotionBoneEnum::leftMiddleFingerUnder },
		{ "EMotionBoneEnum::leftMiddleFingerMid", (int64)EMotionBoneEnum::leftMiddleFingerMid },
		{ "EMotionBoneEnum::leftMiddleFingerUp", (int64)EMotionBoneEnum::leftMiddleFingerUp },
		{ "EMotionBoneEnum::leftRingFingerUnder", (int64)EMotionBoneEnum::leftRingFingerUnder },
		{ "EMotionBoneEnum::leftRingFingerMid", (int64)EMotionBoneEnum::leftRingFingerMid },
		{ "EMotionBoneEnum::leftRingFingerUp", (int64)EMotionBoneEnum::leftRingFingerUp },
		{ "EMotionBoneEnum::leftLittleFingerUnder", (int64)EMotionBoneEnum::leftLittleFingerUnder },
		{ "EMotionBoneEnum::leftLittleFingerMid", (int64)EMotionBoneEnum::leftLittleFingerMid },
		{ "EMotionBoneEnum::leftLittleFingerUp", (int64)EMotionBoneEnum::leftLittleFingerUp },
		{ "EMotionBoneEnum::rightThumbUnder", (int64)EMotionBoneEnum::rightThumbUnder },
		{ "EMotionBoneEnum::rightThumbMid", (int64)EMotionBoneEnum::rightThumbMid },
		{ "EMotionBoneEnum::rightThumbUp", (int64)EMotionBoneEnum::rightThumbUp },
		{ "EMotionBoneEnum::rightForeFingerUnder", (int64)EMotionBoneEnum::rightForeFingerUnder },
		{ "EMotionBoneEnum::rightForeFingerMid", (int64)EMotionBoneEnum::rightForeFingerMid },
		{ "EMotionBoneEnum::rightForeFingerUp", (int64)EMotionBoneEnum::rightForeFingerUp },
		{ "EMotionBoneEnum::rightMiddleFingerUnder", (int64)EMotionBoneEnum::rightMiddleFingerUnder },
		{ "EMotionBoneEnum::rightMiddleFingerMid", (int64)EMotionBoneEnum::rightMiddleFingerMid },
		{ "EMotionBoneEnum::rightMiddleFingerUp", (int64)EMotionBoneEnum::rightMiddleFingerUp },
		{ "EMotionBoneEnum::rightRingFingerUnder", (int64)EMotionBoneEnum::rightRingFingerUnder },
		{ "EMotionBoneEnum::rightRingFingerMid", (int64)EMotionBoneEnum::rightRingFingerMid },
		{ "EMotionBoneEnum::rightRingFingerUp", (int64)EMotionBoneEnum::rightRingFingerUp },
		{ "EMotionBoneEnum::rightLittleFingerUnder", (int64)EMotionBoneEnum::rightLittleFingerUnder },
		{ "EMotionBoneEnum::rightLittleFingerMid", (int64)EMotionBoneEnum::rightLittleFingerMid },
		{ "EMotionBoneEnum::rightLittleFingerUp", (int64)EMotionBoneEnum::rightLittleFingerUp },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MotionSuit_EMotionBoneEnum_Statics::Enum_MetaDataParams[] = {
		{ "back.Name", "EMotionBoneEnum::back" },
		{ "BlueprintType", "true" },
		{ "Comment", "//\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc3\xb6\xef\xbf\xbd\xef\xbf\xbd\n" },
		{ "crotch.Name", "EMotionBoneEnum::crotch" },
		{ "head.Name", "EMotionBoneEnum::head" },
		{ "leftFoot.Name", "EMotionBoneEnum::leftFoot" },
		{ "leftForeFingerMid.Name", "EMotionBoneEnum::leftForeFingerMid" },
		{ "leftForeFingerUnder.Name", "EMotionBoneEnum::leftForeFingerUnder" },
		{ "leftForeFingerUp.Name", "EMotionBoneEnum::leftForeFingerUp" },
		{ "leftHand.Name", "EMotionBoneEnum::leftHand" },
		{ "leftLittleFingerMid.Name", "EMotionBoneEnum::leftLittleFingerMid" },
		{ "leftLittleFingerUnder.Name", "EMotionBoneEnum::leftLittleFingerUnder" },
		{ "leftLittleFingerUp.Name", "EMotionBoneEnum::leftLittleFingerUp" },
		{ "leftLowerArm.Name", "EMotionBoneEnum::leftLowerArm" },
		{ "leftLowerLeg.Name", "EMotionBoneEnum::leftLowerLeg" },
		{ "leftMiddleFingerMid.Name", "EMotionBoneEnum::leftMiddleFingerMid" },
		{ "leftMiddleFingerUnder.Name", "EMotionBoneEnum::leftMiddleFingerUnder" },
		{ "leftMiddleFingerUp.Name", "EMotionBoneEnum::leftMiddleFingerUp" },
		{ "leftRingFingerMid.Name", "EMotionBoneEnum::leftRingFingerMid" },
		{ "leftRingFingerUnder.Name", "EMotionBoneEnum::leftRingFingerUnder" },
		{ "leftRingFingerUp.Name", "EMotionBoneEnum::leftRingFingerUp" },
		{ "leftShoulder.Name", "EMotionBoneEnum::leftShoulder" },
		{ "leftThumbMid.Name", "EMotionBoneEnum::leftThumbMid" },
		{ "leftThumbUnder.Comment", "//\xef\xbf\xbd\xef\xbf\xbd\xd6\xb8\n" },
		{ "leftThumbUnder.Name", "EMotionBoneEnum::leftThumbUnder" },
		{ "leftThumbUnder.ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xd6\xb8" },
		{ "leftThumbUp.Name", "EMotionBoneEnum::leftThumbUp" },
		{ "leftToe.Name", "EMotionBoneEnum::leftToe" },
		{ "leftUpperArm.Name", "EMotionBoneEnum::leftUpperArm" },
		{ "leftUpperLeg.Name", "EMotionBoneEnum::leftUpperLeg" },
		{ "ModuleRelativePath", "Public/MotionLib.h" },
		{ "rightFoot.Name", "EMotionBoneEnum::rightFoot" },
		{ "rightForeFingerMid.Name", "EMotionBoneEnum::rightForeFingerMid" },
		{ "rightForeFingerUnder.Name", "EMotionBoneEnum::rightForeFingerUnder" },
		{ "rightForeFingerUp.Name", "EMotionBoneEnum::rightForeFingerUp" },
		{ "rightHand.Name", "EMotionBoneEnum::rightHand" },
		{ "rightLittleFingerMid.Name", "EMotionBoneEnum::rightLittleFingerMid" },
		{ "rightLittleFingerUnder.Name", "EMotionBoneEnum::rightLittleFingerUnder" },
		{ "rightLittleFingerUp.Name", "EMotionBoneEnum::rightLittleFingerUp" },
		{ "rightLowerArm.Name", "EMotionBoneEnum::rightLowerArm" },
		{ "rightLowerLeg.Name", "EMotionBoneEnum::rightLowerLeg" },
		{ "rightMiddleFingerMid.Name", "EMotionBoneEnum::rightMiddleFingerMid" },
		{ "rightMiddleFingerUnder.Name", "EMotionBoneEnum::rightMiddleFingerUnder" },
		{ "rightMiddleFingerUp.Name", "EMotionBoneEnum::rightMiddleFingerUp" },
		{ "rightRingFingerMid.Name", "EMotionBoneEnum::rightRingFingerMid" },
		{ "rightRingFingerUnder.Name", "EMotionBoneEnum::rightRingFingerUnder" },
		{ "rightRingFingerUp.Name", "EMotionBoneEnum::rightRingFingerUp" },
		{ "rightShoulder.Name", "EMotionBoneEnum::rightShoulder" },
		{ "rightThumbMid.Name", "EMotionBoneEnum::rightThumbMid" },
		{ "rightThumbUnder.Name", "EMotionBoneEnum::rightThumbUnder" },
		{ "rightThumbUp.Name", "EMotionBoneEnum::rightThumbUp" },
		{ "rightToe.Name", "EMotionBoneEnum::rightToe" },
		{ "rightUpperArm.Name", "EMotionBoneEnum::rightUpperArm" },
		{ "rightUpperLeg.Name", "EMotionBoneEnum::rightUpperLeg" },
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc3\xb6\xef\xbf\xbd\xef\xbf\xbd" },
		{ "waistOne.Name", "EMotionBoneEnum::waistOne" },
		{ "waistTwo.Name", "EMotionBoneEnum::waistTwo" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MotionSuit_EMotionBoneEnum_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MotionSuit,
		nullptr,
		"EMotionBoneEnum",
		"EMotionBoneEnum",
		Z_Construct_UEnum_MotionSuit_EMotionBoneEnum_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MotionSuit_EMotionBoneEnum_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MotionSuit_EMotionBoneEnum_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MotionSuit_EMotionBoneEnum_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_MotionSuit_EMotionBoneEnum()
	{
		if (!Z_Registration_Info_UEnum_EMotionBoneEnum.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMotionBoneEnum.InnerSingleton, Z_Construct_UEnum_MotionSuit_EMotionBoneEnum_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMotionBoneEnum.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_MotionSuit_Source_MotionSuit_Public_MotionLib_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_MotionSuit_Source_MotionSuit_Public_MotionLib_h_Statics::EnumInfo[] = {
		{ EModelOrientation_StaticEnum, TEXT("EModelOrientation"), &Z_Registration_Info_UEnum_EModelOrientation, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1742004623U) },
		{ ERotatingOrder_StaticEnum, TEXT("ERotatingOrder"), &Z_Registration_Info_UEnum_ERotatingOrder, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2837705490U) },
		{ EMotionBoneEnum_StaticEnum, TEXT("EMotionBoneEnum"), &Z_Registration_Info_UEnum_EMotionBoneEnum, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 193397142U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_MotionSuit_Source_MotionSuit_Public_MotionLib_h_3239173992(TEXT("/Script/MotionSuit"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_HostProject_Plugins_MotionSuit_Source_MotionSuit_Public_MotionLib_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_MotionSuit_Source_MotionSuit_Public_MotionLib_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
