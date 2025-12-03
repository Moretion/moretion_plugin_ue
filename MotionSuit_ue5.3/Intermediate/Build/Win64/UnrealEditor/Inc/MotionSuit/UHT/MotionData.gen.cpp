// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MotionSuit/Public/MotionData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMotionData() {}
// Cross Module References
	MOTIONSUIT_API UScriptStruct* Z_Construct_UScriptStruct_FMotionData();
	UPackage* Z_Construct_UPackage__Script_MotionSuit();
// End Cross Module References
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
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMotionData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n\x09\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n */" },
		{ "ModuleRelativePath", "Public/MotionData.h" },
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMotionData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMotionData>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMotionData_Statics::ReturnStructParams = {
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
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MotionData.InnerSingleton, Z_Construct_UScriptStruct_FMotionData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MotionData.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_MotionSuit_Source_MotionSuit_Public_MotionData_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_MotionSuit_Source_MotionSuit_Public_MotionData_h_Statics::ScriptStructInfo[] = {
		{ FMotionData::StaticStruct, Z_Construct_UScriptStruct_FMotionData_Statics::NewStructOps, TEXT("MotionData"), &Z_Registration_Info_UScriptStruct_MotionData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMotionData), 1459748357U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_MotionSuit_Source_MotionSuit_Public_MotionData_h_1632764406(TEXT("/Script/MotionSuit"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_HostProject_Plugins_MotionSuit_Source_MotionSuit_Public_MotionData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_MotionSuit_Source_MotionSuit_Public_MotionData_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
