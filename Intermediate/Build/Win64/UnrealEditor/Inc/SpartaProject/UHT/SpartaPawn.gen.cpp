// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpartaProject/Public/SpartaPawn.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpartaPawn() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_APawn();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCapsuleComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
SPARTAPROJECT_API UClass* Z_Construct_UClass_ASpartaPawn();
SPARTAPROJECT_API UClass* Z_Construct_UClass_ASpartaPawn_NoRegister();
UPackage* Z_Construct_UPackage__Script_SpartaProject();
// End Cross Module References

// Begin Class ASpartaPawn
void ASpartaPawn::StaticRegisterNativesASpartaPawn()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASpartaPawn);
UClass* Z_Construct_UClass_ASpartaPawn_NoRegister()
{
	return ASpartaPawn::StaticClass();
}
struct Z_Construct_UClass_ASpartaPawn_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "SpartaPawn.h" },
		{ "ModuleRelativePath", "Public/SpartaPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CapsuleComp_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SpartaPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshComp_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SpartaPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpringArmComp_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SpartaPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraComp_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SpartaPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMappingContext_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/SpartaPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/SpartaPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LookAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/SpartaPawn.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CapsuleComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpringArmComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultMappingContext;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LookAction;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASpartaPawn>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASpartaPawn_Statics::NewProp_CapsuleComp = { "CapsuleComp", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpartaPawn, CapsuleComp), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CapsuleComp_MetaData), NewProp_CapsuleComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASpartaPawn_Statics::NewProp_MeshComp = { "MeshComp", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpartaPawn, MeshComp), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshComp_MetaData), NewProp_MeshComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASpartaPawn_Statics::NewProp_SpringArmComp = { "SpringArmComp", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpartaPawn, SpringArmComp), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpringArmComp_MetaData), NewProp_SpringArmComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASpartaPawn_Statics::NewProp_CameraComp = { "CameraComp", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpartaPawn, CameraComp), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraComp_MetaData), NewProp_CameraComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASpartaPawn_Statics::NewProp_DefaultMappingContext = { "DefaultMappingContext", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpartaPawn, DefaultMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultMappingContext_MetaData), NewProp_DefaultMappingContext_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASpartaPawn_Statics::NewProp_MoveAction = { "MoveAction", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpartaPawn, MoveAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveAction_MetaData), NewProp_MoveAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASpartaPawn_Statics::NewProp_LookAction = { "LookAction", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpartaPawn, LookAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LookAction_MetaData), NewProp_LookAction_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASpartaPawn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpartaPawn_Statics::NewProp_CapsuleComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpartaPawn_Statics::NewProp_MeshComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpartaPawn_Statics::NewProp_SpringArmComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpartaPawn_Statics::NewProp_CameraComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpartaPawn_Statics::NewProp_DefaultMappingContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpartaPawn_Statics::NewProp_MoveAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpartaPawn_Statics::NewProp_LookAction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASpartaPawn_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ASpartaPawn_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APawn,
	(UObject* (*)())Z_Construct_UPackage__Script_SpartaProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASpartaPawn_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASpartaPawn_Statics::ClassParams = {
	&ASpartaPawn::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ASpartaPawn_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ASpartaPawn_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASpartaPawn_Statics::Class_MetaDataParams), Z_Construct_UClass_ASpartaPawn_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASpartaPawn()
{
	if (!Z_Registration_Info_UClass_ASpartaPawn.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASpartaPawn.OuterSingleton, Z_Construct_UClass_ASpartaPawn_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASpartaPawn.OuterSingleton;
}
template<> SPARTAPROJECT_API UClass* StaticClass<ASpartaPawn>()
{
	return ASpartaPawn::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASpartaPawn);
ASpartaPawn::~ASpartaPawn() {}
// End Class ASpartaPawn

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5_Projects_SpartaProject_Source_SpartaProject_Public_SpartaPawn_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASpartaPawn, ASpartaPawn::StaticClass, TEXT("ASpartaPawn"), &Z_Registration_Info_UClass_ASpartaPawn, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASpartaPawn), 2036206041U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_Projects_SpartaProject_Source_SpartaProject_Public_SpartaPawn_h_3030803303(TEXT("/Script/SpartaProject"),
	Z_CompiledInDeferFile_FID_UE5_Projects_SpartaProject_Source_SpartaProject_Public_SpartaPawn_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_Projects_SpartaProject_Source_SpartaProject_Public_SpartaPawn_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
