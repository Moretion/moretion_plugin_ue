// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MotionConnect.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MOTIONSUIT_MotionConnect_generated_h
#error "MotionConnect.generated.h already included, missing '#pragma once' in MotionConnect.h"
#endif
#define MOTIONSUIT_MotionConnect_generated_h

#define FID_HostProject_Plugins_MotionSuit_Source_MotionSuit_Public_MotionConnect_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execTryConnectServer);


#define FID_HostProject_Plugins_MotionSuit_Source_MotionSuit_Public_MotionConnect_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMotionConnect(); \
	friend struct Z_Construct_UClass_AMotionConnect_Statics; \
public: \
	DECLARE_CLASS(AMotionConnect, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MotionSuit"), NO_API) \
	DECLARE_SERIALIZER(AMotionConnect)


#define FID_HostProject_Plugins_MotionSuit_Source_MotionSuit_Public_MotionConnect_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AMotionConnect(AMotionConnect&&); \
	AMotionConnect(const AMotionConnect&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMotionConnect); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMotionConnect); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMotionConnect) \
	NO_API virtual ~AMotionConnect();


#define FID_HostProject_Plugins_MotionSuit_Source_MotionSuit_Public_MotionConnect_h_11_PROLOG
#define FID_HostProject_Plugins_MotionSuit_Source_MotionSuit_Public_MotionConnect_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_MotionSuit_Source_MotionSuit_Public_MotionConnect_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_MotionSuit_Source_MotionSuit_Public_MotionConnect_h_14_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_MotionSuit_Source_MotionSuit_Public_MotionConnect_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOTIONSUIT_API UClass* StaticClass<class AMotionConnect>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_MotionSuit_Source_MotionSuit_Public_MotionConnect_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
