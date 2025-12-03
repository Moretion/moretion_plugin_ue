// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MotionSuit/Public/MotionConnect.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMotionConnect() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
MOTIONSUIT_API UClass* Z_Construct_UClass_AMotionConnect();
MOTIONSUIT_API UClass* Z_Construct_UClass_AMotionConnect_NoRegister();
UPackage* Z_Construct_UPackage__Script_MotionSuit();
// End Cross Module References

// Begin Class AMotionConnect Function TryConnectServer
struct Z_Construct_UFunction_AMotionConnect_TryConnectServer_Statics
{
	struct MotionConnect_eventTryConnectServer_Parms
	{
		FString address;
		int32 port;
		bool useUdp;
		bool logMessage;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VeinSocket" },
		{ "Comment", "//\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd3\xb7\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
		{ "CPP_Default_address", "127.0.0.1" },
		{ "CPP_Default_logMessage", "false" },
		{ "CPP_Default_port", "6666" },
		{ "CPP_Default_useUdp", "false" },
		{ "ModuleRelativePath", "Public/MotionConnect.h" },
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd3\xb7\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_address_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_address;
	static const UECodeGen_Private::FIntPropertyParams NewProp_port;
	static void NewProp_useUdp_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_useUdp;
	static void NewProp_logMessage_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_logMessage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AMotionConnect_TryConnectServer_Statics::NewProp_address = { "address", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MotionConnect_eventTryConnectServer_Parms, address), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_address_MetaData), NewProp_address_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMotionConnect_TryConnectServer_Statics::NewProp_port = { "port", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MotionConnect_eventTryConnectServer_Parms, port), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AMotionConnect_TryConnectServer_Statics::NewProp_useUdp_SetBit(void* Obj)
{
	((MotionConnect_eventTryConnectServer_Parms*)Obj)->useUdp = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMotionConnect_TryConnectServer_Statics::NewProp_useUdp = { "useUdp", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MotionConnect_eventTryConnectServer_Parms), &Z_Construct_UFunction_AMotionConnect_TryConnectServer_Statics::NewProp_useUdp_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AMotionConnect_TryConnectServer_Statics::NewProp_logMessage_SetBit(void* Obj)
{
	((MotionConnect_eventTryConnectServer_Parms*)Obj)->logMessage = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMotionConnect_TryConnectServer_Statics::NewProp_logMessage = { "logMessage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MotionConnect_eventTryConnectServer_Parms), &Z_Construct_UFunction_AMotionConnect_TryConnectServer_Statics::NewProp_logMessage_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMotionConnect_TryConnectServer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMotionConnect_TryConnectServer_Statics::NewProp_address,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMotionConnect_TryConnectServer_Statics::NewProp_port,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMotionConnect_TryConnectServer_Statics::NewProp_useUdp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMotionConnect_TryConnectServer_Statics::NewProp_logMessage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMotionConnect_TryConnectServer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMotionConnect_TryConnectServer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMotionConnect, nullptr, "TryConnectServer", nullptr, nullptr, Z_Construct_UFunction_AMotionConnect_TryConnectServer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMotionConnect_TryConnectServer_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMotionConnect_TryConnectServer_Statics::MotionConnect_eventTryConnectServer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMotionConnect_TryConnectServer_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMotionConnect_TryConnectServer_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMotionConnect_TryConnectServer_Statics::MotionConnect_eventTryConnectServer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMotionConnect_TryConnectServer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMotionConnect_TryConnectServer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMotionConnect::execTryConnectServer)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_address);
	P_GET_PROPERTY(FIntProperty,Z_Param_port);
	P_GET_UBOOL(Z_Param_useUdp);
	P_GET_UBOOL(Z_Param_logMessage);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->TryConnectServer(Z_Param_address,Z_Param_port,Z_Param_useUdp,Z_Param_logMessage);
	P_NATIVE_END;
}
// End Class AMotionConnect Function TryConnectServer

// Begin Class AMotionConnect
void AMotionConnect::StaticRegisterNativesAMotionConnect()
{
	UClass* Class = AMotionConnect::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "TryConnectServer", &AMotionConnect::execTryConnectServer },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMotionConnect);
UClass* Z_Construct_UClass_AMotionConnect_NoRegister()
{
	return AMotionConnect::StaticClass();
}
struct Z_Construct_UClass_AMotionConnect_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MotionConnect.h" },
		{ "ModuleRelativePath", "Public/MotionConnect.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AMotionConnect_TryConnectServer, "TryConnectServer" }, // 632044865
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMotionConnect>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AMotionConnect_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_MotionSuit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMotionConnect_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMotionConnect_Statics::ClassParams = {
	&AMotionConnect::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMotionConnect_Statics::Class_MetaDataParams), Z_Construct_UClass_AMotionConnect_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMotionConnect()
{
	if (!Z_Registration_Info_UClass_AMotionConnect.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMotionConnect.OuterSingleton, Z_Construct_UClass_AMotionConnect_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMotionConnect.OuterSingleton;
}
template<> MOTIONSUIT_API UClass* StaticClass<AMotionConnect>()
{
	return AMotionConnect::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMotionConnect);
AMotionConnect::~AMotionConnect() {}
// End Class AMotionConnect

// Begin Registration
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_MotionSuit_Source_MotionSuit_Public_MotionConnect_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMotionConnect, AMotionConnect::StaticClass, TEXT("AMotionConnect"), &Z_Registration_Info_UClass_AMotionConnect, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMotionConnect), 3432488799U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_MotionSuit_Source_MotionSuit_Public_MotionConnect_h_3474326537(TEXT("/Script/MotionSuit"),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_MotionSuit_Source_MotionSuit_Public_MotionConnect_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_MotionSuit_Source_MotionSuit_Public_MotionConnect_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
