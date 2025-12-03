// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MotionSuit/Public/ModelController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeModelController() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
MOTIONSUIT_API UClass* Z_Construct_UClass_AModelController();
MOTIONSUIT_API UClass* Z_Construct_UClass_AModelController_NoRegister();
MOTIONSUIT_API UEnum* Z_Construct_UEnum_MotionSuit_EModelOrientation();
UPackage* Z_Construct_UPackage__Script_MotionSuit();
// End Cross Module References

// Begin Class AModelController Function SetModelOrientation
struct Z_Construct_UFunction_AModelController_SetModelOrientation_Statics
{
	struct ModelController_eventSetModelOrientation_Parms
	{
		EModelOrientation ModelOrientation;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MotionModel" },
		{ "Comment", "//\xef\xbf\xbd\xef\xbf\xbd\xc9\xab\xef\xbf\xbd\xef\xbf\xbd\xce\xbb\xef\xbf\xbd\xc6\xb1\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc9\xbf\xef\xbf\xbd\xc4\xb8\xdf\xb6\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd7\xbc\xc4\xa3\xef\xbf\xbd\xcd\xb5\xc4\xb8\xdf\xb6\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc8\xb5\xc3\xb3\xef\xbf\xbd\x09\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd2\xaa\xef\xbf\xbd\xc4\xb1\xef\xbf\xbd\xce\xbb\xef\xbf\xbd\xc6\xb1\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcd\xa8\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd 1 \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd2\xb5\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n//\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc4\xa3\xef\xbf\xbd\xcd\xa1\xef\xbf\xbd""API\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd8\xa3\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xde\xb7\xef\xbf\xbd\xd6\xb1\xef\xbf\xbd\xd3\xbe\xef\xbf\xbd\xc8\xb7\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc7\xb0\xc4\xa3\xef\xbf\xbd\xcd\xb5\xef\xbf\xbd\xef\xbf\xbd\xc8\xb3\xef\xbf\xbd\n" },
		{ "ModuleRelativePath", "Public/ModelController.h" },
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xc9\xab\xef\xbf\xbd\xef\xbf\xbd\xce\xbb\xef\xbf\xbd\xc6\xb1\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc9\xbf\xef\xbf\xbd\xc4\xb8\xdf\xb6\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd7\xbc\xc4\xa3\xef\xbf\xbd\xcd\xb5\xc4\xb8\xdf\xb6\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc8\xb5\xc3\xb3\xef\xbf\xbd        \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd2\xaa\xef\xbf\xbd\xc4\xb1\xef\xbf\xbd\xce\xbb\xef\xbf\xbd\xc6\xb1\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcd\xa8\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd 1 \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd2\xb5\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc4\xa3\xef\xbf\xbd\xcd\xa1\xef\xbf\xbd""API\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd8\xa3\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xde\xb7\xef\xbf\xbd\xd6\xb1\xef\xbf\xbd\xd3\xbe\xef\xbf\xbd\xc8\xb7\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc7\xb0\xc4\xa3\xef\xbf\xbd\xcd\xb5\xef\xbf\xbd\xef\xbf\xbd\xc8\xb3\xef\xbf\xbd" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ModelOrientation_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ModelOrientation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AModelController_SetModelOrientation_Statics::NewProp_ModelOrientation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AModelController_SetModelOrientation_Statics::NewProp_ModelOrientation = { "ModelOrientation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModelController_eventSetModelOrientation_Parms, ModelOrientation), Z_Construct_UEnum_MotionSuit_EModelOrientation, METADATA_PARAMS(0, nullptr) }; // 807700658
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AModelController_SetModelOrientation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AModelController_SetModelOrientation_Statics::NewProp_ModelOrientation_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AModelController_SetModelOrientation_Statics::NewProp_ModelOrientation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AModelController_SetModelOrientation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AModelController_SetModelOrientation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AModelController, nullptr, "SetModelOrientation", nullptr, nullptr, Z_Construct_UFunction_AModelController_SetModelOrientation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AModelController_SetModelOrientation_Statics::PropPointers), sizeof(Z_Construct_UFunction_AModelController_SetModelOrientation_Statics::ModelController_eventSetModelOrientation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AModelController_SetModelOrientation_Statics::Function_MetaDataParams), Z_Construct_UFunction_AModelController_SetModelOrientation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AModelController_SetModelOrientation_Statics::ModelController_eventSetModelOrientation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AModelController_SetModelOrientation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AModelController_SetModelOrientation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AModelController::execSetModelOrientation)
{
	P_GET_ENUM(EModelOrientation,Z_Param_ModelOrientation);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetModelOrientation(EModelOrientation(Z_Param_ModelOrientation));
	P_NATIVE_END;
}
// End Class AModelController Function SetModelOrientation

// Begin Class AModelController Function SetMoveRate
struct Z_Construct_UFunction_AModelController_SetMoveRate_Statics
{
	struct ModelController_eventSetMoveRate_Parms
	{
		float NewMoveRate;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MotionModel" },
		{ "Comment", "//The character's displacement ratio is calculated by comparing the height of the crotch to the height of the standard model call this function if you need to change the displacement ratio\n" },
		{ "ModuleRelativePath", "Public/ModelController.h" },
		{ "ToolTip", "The character's displacement ratio is calculated by comparing the height of the crotch to the height of the standard model call this function if you need to change the displacement ratio" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewMoveRate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AModelController_SetMoveRate_Statics::NewProp_NewMoveRate = { "NewMoveRate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModelController_eventSetMoveRate_Parms, NewMoveRate), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AModelController_SetMoveRate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AModelController_SetMoveRate_Statics::NewProp_NewMoveRate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AModelController_SetMoveRate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AModelController_SetMoveRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AModelController, nullptr, "SetMoveRate", nullptr, nullptr, Z_Construct_UFunction_AModelController_SetMoveRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AModelController_SetMoveRate_Statics::PropPointers), sizeof(Z_Construct_UFunction_AModelController_SetMoveRate_Statics::ModelController_eventSetMoveRate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AModelController_SetMoveRate_Statics::Function_MetaDataParams), Z_Construct_UFunction_AModelController_SetMoveRate_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AModelController_SetMoveRate_Statics::ModelController_eventSetMoveRate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AModelController_SetMoveRate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AModelController_SetMoveRate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AModelController::execSetMoveRate)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewMoveRate);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMoveRate(Z_Param_NewMoveRate);
	P_NATIVE_END;
}
// End Class AModelController Function SetMoveRate

// Begin Class AModelController Function ToCoordinate
struct Z_Construct_UFunction_AModelController_ToCoordinate_Statics
{
	struct ModelController_eventToCoordinate_Parms
	{
		FVector Coordinate;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MotionModel" },
		{ "Comment", "//After BeginPlay, call this function if you want to change the position of the role \n//BeginPlay\xd6\xae\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xde\xb7\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xb6\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xca\xbd\xef\xbf\xbd\xc4\xb1\xef\xbf\xbd\xef\xbf\xbd\xc9\xab\xce\xbb\xef\xbf\xbd\xef\xbf\xbd   \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd2\xaa\xef\xbf\xbd\xc4\xb1\xef\xbf\xbd\xef\xbf\xbd\xc9\xab\xce\xbb\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
		{ "ModuleRelativePath", "Public/ModelController.h" },
		{ "ToolTip", "After BeginPlay, call this function if you want to change the position of the role\nBeginPlay\xd6\xae\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xde\xb7\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xb6\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xca\xbd\xef\xbf\xbd\xc4\xb1\xef\xbf\xbd\xef\xbf\xbd\xc9\xab\xce\xbb\xef\xbf\xbd\xef\xbf\xbd   \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd2\xaa\xef\xbf\xbd\xc4\xb1\xef\xbf\xbd\xef\xbf\xbd\xc9\xab\xce\xbb\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Coordinate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AModelController_ToCoordinate_Statics::NewProp_Coordinate = { "Coordinate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModelController_eventToCoordinate_Parms, Coordinate), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AModelController_ToCoordinate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AModelController_ToCoordinate_Statics::NewProp_Coordinate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AModelController_ToCoordinate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AModelController_ToCoordinate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AModelController, nullptr, "ToCoordinate", nullptr, nullptr, Z_Construct_UFunction_AModelController_ToCoordinate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AModelController_ToCoordinate_Statics::PropPointers), sizeof(Z_Construct_UFunction_AModelController_ToCoordinate_Statics::ModelController_eventToCoordinate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AModelController_ToCoordinate_Statics::Function_MetaDataParams), Z_Construct_UFunction_AModelController_ToCoordinate_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AModelController_ToCoordinate_Statics::ModelController_eventToCoordinate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AModelController_ToCoordinate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AModelController_ToCoordinate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AModelController::execToCoordinate)
{
	P_GET_STRUCT(FVector,Z_Param_Coordinate);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ToCoordinate(Z_Param_Coordinate);
	P_NATIVE_END;
}
// End Class AModelController Function ToCoordinate

// Begin Class AModelController
void AModelController::StaticRegisterNativesAModelController()
{
	UClass* Class = AModelController::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SetModelOrientation", &AModelController::execSetModelOrientation },
		{ "SetMoveRate", &AModelController::execSetMoveRate },
		{ "ToCoordinate", &AModelController::execToCoordinate },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AModelController);
UClass* Z_Construct_UClass_AModelController_NoRegister()
{
	return AModelController::StaticClass();
}
struct Z_Construct_UClass_AModelController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "ModelController.h" },
		{ "ModuleRelativePath", "Public/ModelController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ModelMesh_MetaData[] = {
		{ "Category", "Mesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ModelController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveRate_MetaData[] = {
		{ "Category", "MotionModel" },
		{ "Comment", "//\xc4\xa3\xef\xbf\xbd\xcd\xb3\xef\xbf\xbd\xca\xbc\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
		{ "ModuleRelativePath", "Public/ModelController.h" },
		{ "ToolTip", "\xc4\xa3\xef\xbf\xbd\xcd\xb3\xef\xbf\xbd\xca\xbc\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActorName_MetaData[] = {
		{ "Category", "MotionModel" },
		{ "Comment", "//\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xce\xbb\xef\xbf\xbd\xc6\xb1\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
		{ "ModuleRelativePath", "Public/ModelController.h" },
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xce\xbb\xef\xbf\xbd\xc6\xb1\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ModelMesh;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MoveRate;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ActorName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AModelController_SetModelOrientation, "SetModelOrientation" }, // 2383740023
		{ &Z_Construct_UFunction_AModelController_SetMoveRate, "SetMoveRate" }, // 1541979047
		{ &Z_Construct_UFunction_AModelController_ToCoordinate, "ToCoordinate" }, // 1299851052
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AModelController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AModelController_Statics::NewProp_ModelMesh = { "ModelMesh", nullptr, (EPropertyFlags)0x00100000000b0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AModelController, ModelMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ModelMesh_MetaData), NewProp_ModelMesh_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AModelController_Statics::NewProp_MoveRate = { "MoveRate", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AModelController, MoveRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveRate_MetaData), NewProp_MoveRate_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AModelController_Statics::NewProp_ActorName = { "ActorName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AModelController, ActorName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorName_MetaData), NewProp_ActorName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AModelController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AModelController_Statics::NewProp_ModelMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AModelController_Statics::NewProp_MoveRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AModelController_Statics::NewProp_ActorName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AModelController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AModelController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_MotionSuit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AModelController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AModelController_Statics::ClassParams = {
	&AModelController::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AModelController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AModelController_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AModelController_Statics::Class_MetaDataParams), Z_Construct_UClass_AModelController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AModelController()
{
	if (!Z_Registration_Info_UClass_AModelController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AModelController.OuterSingleton, Z_Construct_UClass_AModelController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AModelController.OuterSingleton;
}
template<> MOTIONSUIT_API UClass* StaticClass<AModelController>()
{
	return AModelController::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AModelController);
AModelController::~AModelController() {}
// End Class AModelController

// Begin Registration
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_MotionSuit_Source_MotionSuit_Public_ModelController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AModelController, AModelController::StaticClass, TEXT("AModelController"), &Z_Registration_Info_UClass_AModelController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AModelController), 197352575U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_MotionSuit_Source_MotionSuit_Public_ModelController_h_3998881680(TEXT("/Script/MotionSuit"),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_MotionSuit_Source_MotionSuit_Public_ModelController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_MotionSuit_Source_MotionSuit_Public_ModelController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
