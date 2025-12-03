// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MotionPoseNode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MOTIONSUITEDITOR_MotionPoseNode_generated_h
#error "MotionPoseNode.generated.h already included, missing '#pragma once' in MotionPoseNode.h"
#endif
#define MOTIONSUITEDITOR_MotionPoseNode_generated_h

#define FID_HostProject_Plugins_MotionSuit_Source_MotionSuitEditor_Public_MotionPoseNode_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMotionPoseNode(); \
	friend struct Z_Construct_UClass_UMotionPoseNode_Statics; \
public: \
	DECLARE_CLASS(UMotionPoseNode, UAnimGraphNode_Base, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MotionSuitEditor"), NO_API) \
	DECLARE_SERIALIZER(UMotionPoseNode)


#define FID_HostProject_Plugins_MotionSuit_Source_MotionSuitEditor_Public_MotionPoseNode_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMotionPoseNode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMotionPoseNode(UMotionPoseNode&&); \
	UMotionPoseNode(const UMotionPoseNode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMotionPoseNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMotionPoseNode); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMotionPoseNode) \
	NO_API virtual ~UMotionPoseNode();


#define FID_HostProject_Plugins_MotionSuit_Source_MotionSuitEditor_Public_MotionPoseNode_h_13_PROLOG
#define FID_HostProject_Plugins_MotionSuit_Source_MotionSuitEditor_Public_MotionPoseNode_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_MotionSuit_Source_MotionSuitEditor_Public_MotionPoseNode_h_16_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_MotionSuit_Source_MotionSuitEditor_Public_MotionPoseNode_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOTIONSUITEDITOR_API UClass* StaticClass<class UMotionPoseNode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_MotionSuit_Source_MotionSuitEditor_Public_MotionPoseNode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
