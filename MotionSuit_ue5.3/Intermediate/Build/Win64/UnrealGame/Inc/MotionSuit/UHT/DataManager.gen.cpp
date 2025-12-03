// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MotionSuit/Public/DataManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDataManager() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	MOTIONSUIT_API UClass* Z_Construct_UClass_UDataManager();
	MOTIONSUIT_API UClass* Z_Construct_UClass_UDataManager_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MotionSuit();
// End Cross Module References
	void UDataManager::StaticRegisterNativesUDataManager()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDataManager);
	UClass* Z_Construct_UClass_UDataManager_NoRegister()
	{
		return UDataManager::StaticClass();
	}
	struct Z_Construct_UClass_UDataManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDataManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MotionSuit,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDataManager_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataManager_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "DataManager.h" },
		{ "ModuleRelativePath", "Public/DataManager.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDataManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDataManager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDataManager_Statics::ClassParams = {
		&UDataManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDataManager_Statics::Class_MetaDataParams), Z_Construct_UClass_UDataManager_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UDataManager()
	{
		if (!Z_Registration_Info_UClass_UDataManager.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDataManager.OuterSingleton, Z_Construct_UClass_UDataManager_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDataManager.OuterSingleton;
	}
	template<> MOTIONSUIT_API UClass* StaticClass<UDataManager>()
	{
		return UDataManager::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDataManager);
	UDataManager::~UDataManager() {}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_MotionSuit_Source_MotionSuit_Public_DataManager_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_MotionSuit_Source_MotionSuit_Public_DataManager_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDataManager, UDataManager::StaticClass, TEXT("UDataManager"), &Z_Registration_Info_UClass_UDataManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDataManager), 4154610709U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_MotionSuit_Source_MotionSuit_Public_DataManager_h_3367657347(TEXT("/Script/MotionSuit"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_MotionSuit_Source_MotionSuit_Public_DataManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_MotionSuit_Source_MotionSuit_Public_DataManager_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
