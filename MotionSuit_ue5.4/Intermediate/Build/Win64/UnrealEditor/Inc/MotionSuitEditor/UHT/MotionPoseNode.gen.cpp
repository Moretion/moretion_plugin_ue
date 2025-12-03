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

// Begin Cross Module References
ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_Base();
MOTIONSUIT_API UScriptStruct* Z_Construct_UScriptStruct_FMotionPose();
MOTIONSUITEDITOR_API UClass* Z_Construct_UClass_UMotionPoseNode();
MOTIONSUITEDITOR_API UClass* Z_Construct_UClass_UMotionPoseNode_NoRegister();
UPackage* Z_Construct_UPackage__Script_MotionSuitEditor();
// End Cross Module References

// Begin Class UMotionPoseNode
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
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "MotionPoseNode.h" },
		{ "ModuleRelativePath", "Public/MotionPoseNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_node_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/MotionPoseNode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_node;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMotionPoseNode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMotionPoseNode_Statics::NewProp_node = { "node", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMotionPoseNode, node), Z_Construct_UScriptStruct_FMotionPose, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_node_MetaData), NewProp_node_MetaData) }; // 4266485859
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMotionPoseNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMotionPoseNode_Statics::NewProp_node,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMotionPoseNode_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMotionPoseNode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimGraphNode_Base,
	(UObject* (*)())Z_Construct_UPackage__Script_MotionSuitEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMotionPoseNode_Statics::DependentSingletons) < 16);
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
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMotionPoseNode_Statics::Class_MetaDataParams), Z_Construct_UClass_UMotionPoseNode_Statics::Class_MetaDataParams)
};
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
// End Class UMotionPoseNode

// Begin Registration
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_MotionSuit_Source_MotionSuitEditor_Public_MotionPoseNode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMotionPoseNode, UMotionPoseNode::StaticClass, TEXT("UMotionPoseNode"), &Z_Registration_Info_UClass_UMotionPoseNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMotionPoseNode), 1982068223U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_MotionSuit_Source_MotionSuitEditor_Public_MotionPoseNode_h_2710206602(TEXT("/Script/MotionSuitEditor"),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_MotionSuit_Source_MotionSuitEditor_Public_MotionPoseNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_MotionSuit_Source_MotionSuitEditor_Public_MotionPoseNode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
