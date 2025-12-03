// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MotionSuitEditor/Public/MotionPoseNode.h"
#include "MotionSuit/Public/MotionPose.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMotionPoseNode() {}
// Cross Module References
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_Base();
	MOTIONSUIT_API UScriptStruct* Z_Construct_UScriptStruct_FMotionPose();
	MOTIONSUITEDITOR_API UClass* Z_Construct_UClass_UMotionPoseNode();
	MOTIONSUITEDITOR_API UClass* Z_Construct_UClass_UMotionPoseNode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MotionSuitEditor();
// End Cross Module References
	void UMotionPoseNode::StaticRegisterNativesUMotionPoseNode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMotionPoseNode);
	UClass* Z_Construct_UClass_UMotionPoseNode_NoRegister()
	{
		return UMotionPoseNode::StaticClass();
	}
	struct Z_Construct_UClass_UMotionPoseNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_node_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_node;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMotionPoseNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimGraphNode_Base,
		(UObject* (*)())Z_Construct_UPackage__Script_MotionSuitEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMotionPoseNode_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMotionPoseNode_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "MotionPoseNode.h" },
		{ "ModuleRelativePath", "Public/MotionPoseNode.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMotionPoseNode_Statics::NewProp_node_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/MotionPoseNode.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMotionPoseNode_Statics::NewProp_node = { "node", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMotionPoseNode, node), Z_Construct_UScriptStruct_FMotionPose, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMotionPoseNode_Statics::NewProp_node_MetaData), Z_Construct_UClass_UMotionPoseNode_Statics::NewProp_node_MetaData) }; // 3845410058
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMotionPoseNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMotionPoseNode_Statics::NewProp_node,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMotionPoseNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMotionPoseNode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMotionPoseNode_Statics::ClassParams = {
		&UMotionPoseNode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMotionPoseNode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMotionPoseNode_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMotionPoseNode_Statics::Class_MetaDataParams), Z_Construct_UClass_UMotionPoseNode_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMotionPoseNode_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UMotionPoseNode()
	{
		if (!Z_Registration_Info_UClass_UMotionPoseNode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMotionPoseNode.OuterSingleton, Z_Construct_UClass_UMotionPoseNode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMotionPoseNode.OuterSingleton;
	}
	template<> MOTIONSUITEDITOR_API UClass* StaticClass<UMotionPoseNode>()
	{
		return UMotionPoseNode::StaticClass();
	}
	UMotionPoseNode::UMotionPoseNode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMotionPoseNode);
	UMotionPoseNode::~UMotionPoseNode() {}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_MotionSuit_Source_MotionSuitEditor_Public_MotionPoseNode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_MotionSuit_Source_MotionSuitEditor_Public_MotionPoseNode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMotionPoseNode, UMotionPoseNode::StaticClass, TEXT("UMotionPoseNode"), &Z_Registration_Info_UClass_UMotionPoseNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMotionPoseNode), 3241638833U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_MotionSuit_Source_MotionSuitEditor_Public_MotionPoseNode_h_430114995(TEXT("/Script/MotionSuitEditor"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_MotionSuit_Source_MotionSuitEditor_Public_MotionPoseNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_MotionSuit_Source_MotionSuitEditor_Public_MotionPoseNode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
