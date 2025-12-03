// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MotionLib.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MOTIONSUIT_MotionLib_generated_h
#error "MotionLib.generated.h already included, missing '#pragma once' in MotionLib.h"
#endif
#define MOTIONSUIT_MotionLib_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_MotionSuit_Source_MotionSuit_Public_MotionLib_h


#define FOREACH_ENUM_EMODELORIENTATION(op) \
	op(EModelOrientation::X) \
	op(EModelOrientation::X_) \
	op(EModelOrientation::Y) \
	op(EModelOrientation::Y_) 

enum class EModelOrientation : uint8;
template<> struct TIsUEnumClass<EModelOrientation> { enum { Value = true }; };
template<> MOTIONSUIT_API UEnum* StaticEnum<EModelOrientation>();

#define FOREACH_ENUM_EROTATINGORDER(op) \
	op(ERotatingOrder::XYZ) \
	op(ERotatingOrder::XZY) \
	op(ERotatingOrder::YZX) \
	op(ERotatingOrder::YXZ) \
	op(ERotatingOrder::ZXY) \
	op(ERotatingOrder::ZYX) 

enum class ERotatingOrder : uint8;
template<> struct TIsUEnumClass<ERotatingOrder> { enum { Value = true }; };
template<> MOTIONSUIT_API UEnum* StaticEnum<ERotatingOrder>();

#define FOREACH_ENUM_EMOTIONBONEENUM(op) \
	op(EMotionBoneEnum::crotch) \
	op(EMotionBoneEnum::waistTwo) \
	op(EMotionBoneEnum::waistOne) \
	op(EMotionBoneEnum::back) \
	op(EMotionBoneEnum::head) \
	op(EMotionBoneEnum::leftShoulder) \
	op(EMotionBoneEnum::leftUpperArm) \
	op(EMotionBoneEnum::leftLowerArm) \
	op(EMotionBoneEnum::leftHand) \
	op(EMotionBoneEnum::leftUpperLeg) \
	op(EMotionBoneEnum::leftLowerLeg) \
	op(EMotionBoneEnum::leftFoot) \
	op(EMotionBoneEnum::leftToe) \
	op(EMotionBoneEnum::rightShoulder) \
	op(EMotionBoneEnum::rightUpperArm) \
	op(EMotionBoneEnum::rightLowerArm) \
	op(EMotionBoneEnum::rightHand) \
	op(EMotionBoneEnum::rightUpperLeg) \
	op(EMotionBoneEnum::rightLowerLeg) \
	op(EMotionBoneEnum::rightFoot) \
	op(EMotionBoneEnum::rightToe) \
	op(EMotionBoneEnum::leftThumbUnder) \
	op(EMotionBoneEnum::leftThumbMid) \
	op(EMotionBoneEnum::leftThumbUp) \
	op(EMotionBoneEnum::leftForeFingerUnder) \
	op(EMotionBoneEnum::leftForeFingerMid) \
	op(EMotionBoneEnum::leftForeFingerUp) \
	op(EMotionBoneEnum::leftMiddleFingerUnder) \
	op(EMotionBoneEnum::leftMiddleFingerMid) \
	op(EMotionBoneEnum::leftMiddleFingerUp) \
	op(EMotionBoneEnum::leftRingFingerUnder) \
	op(EMotionBoneEnum::leftRingFingerMid) \
	op(EMotionBoneEnum::leftRingFingerUp) \
	op(EMotionBoneEnum::leftLittleFingerUnder) \
	op(EMotionBoneEnum::leftLittleFingerMid) \
	op(EMotionBoneEnum::leftLittleFingerUp) \
	op(EMotionBoneEnum::rightThumbUnder) \
	op(EMotionBoneEnum::rightThumbMid) \
	op(EMotionBoneEnum::rightThumbUp) \
	op(EMotionBoneEnum::rightForeFingerUnder) \
	op(EMotionBoneEnum::rightForeFingerMid) \
	op(EMotionBoneEnum::rightForeFingerUp) \
	op(EMotionBoneEnum::rightMiddleFingerUnder) \
	op(EMotionBoneEnum::rightMiddleFingerMid) \
	op(EMotionBoneEnum::rightMiddleFingerUp) \
	op(EMotionBoneEnum::rightRingFingerUnder) \
	op(EMotionBoneEnum::rightRingFingerMid) \
	op(EMotionBoneEnum::rightRingFingerUp) \
	op(EMotionBoneEnum::rightLittleFingerUnder) \
	op(EMotionBoneEnum::rightLittleFingerMid) \
	op(EMotionBoneEnum::rightLittleFingerUp) 

enum class EMotionBoneEnum : uint8;
template<> struct TIsUEnumClass<EMotionBoneEnum> { enum { Value = true }; };
template<> MOTIONSUIT_API UEnum* StaticEnum<EMotionBoneEnum>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
