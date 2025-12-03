// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MotionSuit/Public/MotionData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMotionData() {}

// Begin Cross Module References
MOTIONSUIT_API UScriptStruct* Z_Construct_UScriptStruct_FMotionData();
UPackage* Z_Construct_UPackage__Script_MotionSuit();
// End Cross Module References

// Begin ScriptStruct FMotionData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MotionData;
class UScriptStruct* FMotionData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MotionData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MotionData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMotionData, (UObject*)Z_Construct_UPackage__Script_MotionSuit(), TEXT("MotionData"));
	}
	return Z_Registration_Info_UScriptStruct_MotionData.OuterSingleton;
}
template<> MOTIONSUIT_API UScriptStruct* StaticStruct<FMotionData>()
{
	return FMotionData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMotionData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n\x09\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n */" },
		{ "ModuleRelativePath", "Public/MotionData.h" },
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMotionData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMotionData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MotionSuit,
	nullptr,
	&NewStructOps,
	"MotionData",
	nullptr,
	0,
	sizeof(FMotionData),
	alignof(FMotionData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMotionData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMotionData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMotionData()
{
	if (!Z_Registration_Info_UScriptStruct_MotionData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MotionData.InnerSingleton, Z_Construct_UScriptStruct_FMotionData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MotionData.InnerSingleton;
}
// End ScriptStruct FMotionData

// Begin Registration
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_MotionSuit_Source_MotionSuit_Public_MotionData_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMotionData::StaticStruct, Z_Construct_UScriptStruct_FMotionData_Statics::NewStructOps, TEXT("MotionData"), &Z_Registration_Info_UScriptStruct_MotionData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMotionData), 3840242755U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_MotionSuit_Source_MotionSuit_Public_MotionData_h_2576518175(TEXT("/Script/MotionSuit"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_HostProject_Plugins_MotionSuit_Source_MotionSuit_Public_MotionData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_MotionSuit_Source_MotionSuit_Public_MotionData_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
