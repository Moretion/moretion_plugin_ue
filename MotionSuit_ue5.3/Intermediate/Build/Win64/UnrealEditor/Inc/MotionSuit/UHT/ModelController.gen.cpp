// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MotionSuit/Public/ModelController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeModelController() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	MOTIONSUIT_API UClass* Z_Construct_UClass_AModelController();
	MOTIONSUIT_API UClass* Z_Construct_UClass_AModelController_NoRegister();
	MOTIONSUIT_API UEnum* Z_Construct_UEnum_MotionSuit_EModelOrientation();
	UPackage* Z_Construct_UPackage__Script_MotionSuit();
// End Cross Module References
	DEFINE_FUNCTION(AModelController::execSetModelOrientation)
	{
		P_GET_ENUM(EModelOrientation,Z_Param_ModelOrientation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetModelOrientation(EModelOrientation(Z_Param_ModelOrientation));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AModelController::execSetMoveRate)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewMoveRate);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMoveRate(Z_Param_NewMoveRate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AModelController::execToCoordinate)
	{
		P_GET_STRUCT(FVector,Z_Param_Coordinate);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ToCoordinate(Z_Param_Coordinate);
		P_NATIVE_END;
	}
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
	struct Z_Construct_UFunction_AModelController_SetModelOrientation_Statics
	{
		struct ModelController_eventSetModelOrientation_Parms
		{
			EModelOrientation ModelOrientation;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ModelOrientation_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ModelOrientation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AModelController_SetModelOrientation_Statics::NewProp_ModelOrientation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AModelController_SetModelOrientation_Statics::NewProp_ModelOrientation = { "ModelOrientation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModelController_eventSetModelOrientation_Parms, ModelOrientation), Z_Construct_UEnum_MotionSuit_EModelOrientation, METADATA_PARAMS(0, nullptr) }; // 1742004623
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AModelController_SetModelOrientation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AModelController_SetModelOrientation_Statics::NewProp_ModelOrientation_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AModelController_SetModelOrientation_Statics::NewProp_ModelOrientation,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AModelController_SetModelOrientation_Statics::Function_MetaDataParams[] = {
		{ "Category", "MotionModel" },
		{ "Comment", "//\xef\xbf\xbd\xef\xbf\xbd\xc9\xab\xef\xbf\xbd\xef\xbf\xbd\xce\xbb\xef\xbf\xbd\xc6\xb1\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc9\xbf\xef\xbf\xbd\xc4\xb8\xdf\xb6\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd7\xbc\xc4\xa3\xef\xbf\xbd\xcd\xb5\xc4\xb8\xdf\xb6\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc8\xb5\xc3\xb3\xef\xbf\xbd\x09\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd2\xaa\xef\xbf\xbd\xc4\xb1\xef\xbf\xbd\xce\xbb\xef\xbf\xbd\xc6\xb1\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcd\xa8\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd 1 \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd2\xb5\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n//\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc4\xa3\xef\xbf\xbd\xcd\xa1\xef\xbf\xbd""API\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd8\xa3\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xde\xb7\xef\xbf\xbd\xd6\xb1\xef\xbf\xbd\xd3\xbe\xef\xbf\xbd\xc8\xb7\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc7\xb0\xc4\xa3\xef\xbf\xbd\xcd\xb5\xef\xbf\xbd\xef\xbf\xbd\xc8\xb3\xef\xbf\xbd\n" },
		{ "ModuleRelativePath", "Public/ModelController.h" },
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xc9\xab\xef\xbf\xbd\xef\xbf\xbd\xce\xbb\xef\xbf\xbd\xc6\xb1\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc9\xbf\xef\xbf\xbd\xc4\xb8\xdf\xb6\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd7\xbc\xc4\xa3\xef\xbf\xbd\xcd\xb5\xc4\xb8\xdf\xb6\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc8\xb5\xc3\xb3\xef\xbf\xbd        \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd2\xaa\xef\xbf\xbd\xc4\xb1\xef\xbf\xbd\xce\xbb\xef\xbf\xbd\xc6\xb1\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcd\xa8\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd 1 \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd2\xb5\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc4\xa3\xef\xbf\xbd\xcd\xa1\xef\xbf\xbd""API\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd8\xa3\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xde\xb7\xef\xbf\xbd\xd6\xb1\xef\xbf\xbd\xd3\xbe\xef\xbf\xbd\xc8\xb7\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc7\xb0\xc4\xa3\xef\xbf\xbd\xcd\xb5\xef\xbf\xbd\xef\xbf\xbd\xc8\xb3\xef\xbf\xbd" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AModelController_SetModelOrientation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AModelController, nullptr, "SetModelOrientation", nullptr, nullptr, Z_Construct_UFunction_AModelController_SetModelOrientation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AModelController_SetModelOrientation_Statics::PropPointers), sizeof(Z_Construct_UFunction_AModelController_SetModelOrientation_Statics::ModelController_eventSetModelOrientation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AModelController_SetModelOrientation_Statics::Function_MetaDataParams), Z_Construct_UFunction_AModelController_SetModelOrientation_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AModelController_SetModelOrientation_Statics::PropPointers) < 2048);
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
	struct Z_Construct_UFunction_AModelController_SetMoveRate_Statics
	{
		struct ModelController_eventSetMoveRate_Parms
		{
			float NewMoveRate;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewMoveRate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AModelController_SetMoveRate_Statics::NewProp_NewMoveRate = { "NewMoveRate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModelController_eventSetMoveRate_Parms, NewMoveRate), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AModelController_SetMoveRate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AModelController_SetMoveRate_Statics::NewProp_NewMoveRate,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AModelController_SetMoveRate_Statics::Function_MetaDataParams[] = {
		{ "Category", "MotionModel" },
		{ "Comment", "//The character's displacement ratio is calculated by comparing the height of the crotch to the height of the standard model call this function if you need to change the displacement ratio\n" },
		{ "ModuleRelativePath", "Public/ModelController.h" },
		{ "ToolTip", "The character's displacement ratio is calculated by comparing the height of the crotch to the height of the standard model call this function if you need to change the displacement ratio" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AModelController_SetMoveRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AModelController, nullptr, "SetMoveRate", nullptr, nullptr, Z_Construct_UFunction_AModelController_SetMoveRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AModelController_SetMoveRate_Statics::PropPointers), sizeof(Z_Construct_UFunction_AModelController_SetMoveRate_Statics::ModelController_eventSetMoveRate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AModelController_SetMoveRate_Statics::Function_MetaDataParams), Z_Construct_UFunction_AModelController_SetMoveRate_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AModelController_SetMoveRate_Statics::PropPointers) < 2048);
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
	struct Z_Construct_UFunction_AModelController_ToCoordinate_Statics
	{
		struct ModelController_eventToCoordinate_Parms
		{
			FVector Coordinate;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Coordinate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AModelController_ToCoordinate_Statics::NewProp_Coordinate = { "Coordinate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModelController_eventToCoordinate_Parms, Coordinate), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AModelController_ToCoordinate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AModelController_ToCoordinate_Statics::NewProp_Coordinate,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AModelController_ToCoordinate_Statics::Function_MetaDataParams[] = {
		{ "Category", "MotionModel" },
		{ "Comment", "//After BeginPlay, call this function if you want to change the position of the role \n//BeginPlay\xd6\xae\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xde\xb7\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xb6\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xca\xbd\xef\xbf\xbd\xc4\xb1\xef\xbf\xbd\xef\xbf\xbd\xc9\xab\xce\xbb\xef\xbf\xbd\xef\xbf\xbd   \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd2\xaa\xef\xbf\xbd\xc4\xb1\xef\xbf\xbd\xef\xbf\xbd\xc9\xab\xce\xbb\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
		{ "ModuleRelativePath", "Public/ModelController.h" },
		{ "ToolTip", "After BeginPlay, call this function if you want to change the position of the role\nBeginPlay\xd6\xae\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xde\xb7\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xb6\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xca\xbd\xef\xbf\xbd\xc4\xb1\xef\xbf\xbd\xef\xbf\xbd\xc9\xab\xce\xbb\xef\xbf\xbd\xef\xbf\xbd   \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd2\xaa\xef\xbf\xbd\xc4\xb1\xef\xbf\xbd\xef\xbf\xbd\xc9\xab\xce\xbb\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AModelController_ToCoordinate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AModelController, nullptr, "ToCoordinate", nullptr, nullptr, Z_Construct_UFunction_AModelController_ToCoordinate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AModelController_ToCoordinate_Statics::PropPointers), sizeof(Z_Construct_UFunction_AModelController_ToCoordinate_Statics::ModelController_eventToCoordinate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AModelController_ToCoordinate_Statics::Function_MetaDataParams), Z_Construct_UFunction_AModelController_ToCoordinate_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AModelController_ToCoordinate_Statics::PropPointers) < 2048);
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
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AModelController);
	UClass* Z_Construct_UClass_AModelController_NoRegister()
	{
		return AModelController::StaticClass();
	}
	struct Z_Construct_UClass_AModelController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ModelMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ModelMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MoveRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MoveRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ActorName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AModelController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MotionSuit,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AModelController_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AModelController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AModelController_SetModelOrientation, "SetModelOrientation" }, // 538747845
		{ &Z_Construct_UFunction_AModelController_SetMoveRate, "SetMoveRate" }, // 1931351777
		{ &Z_Construct_UFunction_AModelController_ToCoordinate, "ToCoordinate" }, // 2276952505
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AModelController_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AModelController_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ModelController.h" },
		{ "ModuleRelativePath", "Public/ModelController.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AModelController_Statics::NewProp_ModelMesh_MetaData[] = {
		{ "Category", "Mesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ModelController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AModelController_Statics::NewProp_ModelMesh = { "ModelMesh", nullptr, (EPropertyFlags)0x00100000000b0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AModelController, ModelMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AModelController_Statics::NewProp_ModelMesh_MetaData), Z_Construct_UClass_AModelController_Statics::NewProp_ModelMesh_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AModelController_Statics::NewProp_MoveRate_MetaData[] = {
		{ "Category", "MotionModel" },
		{ "Comment", "//\xc4\xa3\xef\xbf\xbd\xcd\xb3\xef\xbf\xbd\xca\xbc\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
		{ "ModuleRelativePath", "Public/ModelController.h" },
		{ "ToolTip", "\xc4\xa3\xef\xbf\xbd\xcd\xb3\xef\xbf\xbd\xca\xbc\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AModelController_Statics::NewProp_MoveRate = { "MoveRate", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AModelController, MoveRate), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AModelController_Statics::NewProp_MoveRate_MetaData), Z_Construct_UClass_AModelController_Statics::NewProp_MoveRate_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AModelController_Statics::NewProp_ActorName_MetaData[] = {
		{ "Category", "MotionModel" },
		{ "Comment", "//\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xce\xbb\xef\xbf\xbd\xc6\xb1\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
		{ "ModuleRelativePath", "Public/ModelController.h" },
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xce\xbb\xef\xbf\xbd\xc6\xb1\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AModelController_Statics::NewProp_ActorName = { "ActorName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AModelController, ActorName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AModelController_Statics::NewProp_ActorName_MetaData), Z_Construct_UClass_AModelController_Statics::NewProp_ActorName_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AModelController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AModelController_Statics::NewProp_ModelMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AModelController_Statics::NewProp_MoveRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AModelController_Statics::NewProp_ActorName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AModelController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AModelController>::IsAbstract,
	};
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
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AModelController_Statics::PropPointers) < 2048);
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
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_MotionSuit_Source_MotionSuit_Public_ModelController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_MotionSuit_Source_MotionSuit_Public_ModelController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AModelController, AModelController::StaticClass, TEXT("AModelController"), &Z_Registration_Info_UClass_AModelController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AModelController), 563600474U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_MotionSuit_Source_MotionSuit_Public_ModelController_h_3615198441(TEXT("/Script/MotionSuit"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_MotionSuit_Source_MotionSuit_Public_ModelController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_MotionSuit_Source_MotionSuit_Public_ModelController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
