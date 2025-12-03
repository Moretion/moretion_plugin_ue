// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ModelController.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EModelOrientation : uint8;
#ifdef MOTIONSUIT_ModelController_generated_h
#error "ModelController.generated.h already included, missing '#pragma once' in ModelController.h"
#endif
#define MOTIONSUIT_ModelController_generated_h

#define FID_HostProject_Plugins_MotionSuit_Source_MotionSuit_Public_ModelController_h_15_SPARSE_DATA
#define FID_HostProject_Plugins_MotionSuit_Source_MotionSuit_Public_ModelController_h_15_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_HostProject_Plugins_MotionSuit_Source_MotionSuit_Public_ModelController_h_15_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_HostProject_Plugins_MotionSuit_Source_MotionSuit_Public_ModelController_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetModelOrientation); \
	DECLARE_FUNCTION(execSetMoveRate); \
	DECLARE_FUNCTION(execToCoordinate);


#define FID_HostProject_Plugins_MotionSuit_Source_MotionSuit_Public_ModelController_h_15_ACCESSORS
#define FID_HostProject_Plugins_MotionSuit_Source_MotionSuit_Public_ModelController_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAModelController(); \
	friend struct Z_Construct_UClass_AModelController_Statics; \
public: \
	DECLARE_CLASS(AModelController, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MotionSuit"), NO_API) \
	DECLARE_SERIALIZER(AModelController)


#define FID_HostProject_Plugins_MotionSuit_Source_MotionSuit_Public_ModelController_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AModelController(AModelController&&); \
	NO_API AModelController(const AModelController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AModelController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AModelController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AModelController) \
	NO_API virtual ~AModelController();


#define FID_HostProject_Plugins_MotionSuit_Source_MotionSuit_Public_ModelController_h_12_PROLOG
#define FID_HostProject_Plugins_MotionSuit_Source_MotionSuit_Public_ModelController_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_MotionSuit_Source_MotionSuit_Public_ModelController_h_15_SPARSE_DATA \
	FID_HostProject_Plugins_MotionSuit_Source_MotionSuit_Public_ModelController_h_15_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_HostProject_Plugins_MotionSuit_Source_MotionSuit_Public_ModelController_h_15_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_HostProject_Plugins_MotionSuit_Source_MotionSuit_Public_ModelController_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_MotionSuit_Source_MotionSuit_Public_ModelController_h_15_ACCESSORS \
	FID_HostProject_Plugins_MotionSuit_Source_MotionSuit_Public_ModelController_h_15_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_MotionSuit_Source_MotionSuit_Public_ModelController_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOTIONSUIT_API UClass* StaticClass<class AModelController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_MotionSuit_Source_MotionSuit_Public_ModelController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
