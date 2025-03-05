// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VeilboundProject/Flashlight.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFlashlight() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_USpotLightComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_VeilboundProject();
	VEILBOUNDPROJECT_API UClass* Z_Construct_UClass_AFlashlight();
	VEILBOUNDPROJECT_API UClass* Z_Construct_UClass_AFlashlight_NoRegister();
// End Cross Module References
	void AFlashlight::StaticRegisterNativesAFlashlight()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFlashlight);
	UClass* Z_Construct_UClass_AFlashlight_NoRegister()
	{
		return AFlashlight::StaticClass();
	}
	struct Z_Construct_UClass_AFlashlight_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpotLight_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SpotLight;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFlashlight_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_VeilboundProject,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFlashlight_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlashlight_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Flashlight.h" },
		{ "ModuleRelativePath", "Flashlight.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlashlight_Statics::NewProp_SpotLight_MetaData[] = {
		{ "Category", "Flashlight" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Spot Light Component (Flashlight Beam)\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Flashlight.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Spot Light Component (Flashlight Beam)" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFlashlight_Statics::NewProp_SpotLight = { "SpotLight", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFlashlight, SpotLight), Z_Construct_UClass_USpotLightComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFlashlight_Statics::NewProp_SpotLight_MetaData), Z_Construct_UClass_AFlashlight_Statics::NewProp_SpotLight_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFlashlight_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlashlight_Statics::NewProp_SpotLight,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFlashlight_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFlashlight>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AFlashlight_Statics::ClassParams = {
		&AFlashlight::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AFlashlight_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AFlashlight_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFlashlight_Statics::Class_MetaDataParams), Z_Construct_UClass_AFlashlight_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFlashlight_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AFlashlight()
	{
		if (!Z_Registration_Info_UClass_AFlashlight.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFlashlight.OuterSingleton, Z_Construct_UClass_AFlashlight_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AFlashlight.OuterSingleton;
	}
	template<> VEILBOUNDPROJECT_API UClass* StaticClass<AFlashlight>()
	{
		return AFlashlight::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFlashlight);
	AFlashlight::~AFlashlight() {}
	struct Z_CompiledInDeferFile_FID_VeilboundProject_Source_VeilboundProject_Flashlight_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_VeilboundProject_Source_VeilboundProject_Flashlight_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AFlashlight, AFlashlight::StaticClass, TEXT("AFlashlight"), &Z_Registration_Info_UClass_AFlashlight, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFlashlight), 3585723590U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_VeilboundProject_Source_VeilboundProject_Flashlight_h_4218661521(TEXT("/Script/VeilboundProject"),
		Z_CompiledInDeferFile_FID_VeilboundProject_Source_VeilboundProject_Flashlight_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_VeilboundProject_Source_VeilboundProject_Flashlight_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
