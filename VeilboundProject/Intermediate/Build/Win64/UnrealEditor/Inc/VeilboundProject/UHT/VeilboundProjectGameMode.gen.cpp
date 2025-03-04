// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VeilboundProject/VeilboundProjectGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVeilboundProjectGameMode() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_VeilboundProject();
	VEILBOUNDPROJECT_API UClass* Z_Construct_UClass_AVeilboundProjectGameMode();
	VEILBOUNDPROJECT_API UClass* Z_Construct_UClass_AVeilboundProjectGameMode_NoRegister();
// End Cross Module References
	void AVeilboundProjectGameMode::StaticRegisterNativesAVeilboundProjectGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AVeilboundProjectGameMode);
	UClass* Z_Construct_UClass_AVeilboundProjectGameMode_NoRegister()
	{
		return AVeilboundProjectGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AVeilboundProjectGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AVeilboundProjectGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_VeilboundProject,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AVeilboundProjectGameMode_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVeilboundProjectGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "VeilboundProjectGameMode.h" },
		{ "ModuleRelativePath", "VeilboundProjectGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AVeilboundProjectGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVeilboundProjectGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AVeilboundProjectGameMode_Statics::ClassParams = {
		&AVeilboundProjectGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AVeilboundProjectGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AVeilboundProjectGameMode_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AVeilboundProjectGameMode()
	{
		if (!Z_Registration_Info_UClass_AVeilboundProjectGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AVeilboundProjectGameMode.OuterSingleton, Z_Construct_UClass_AVeilboundProjectGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AVeilboundProjectGameMode.OuterSingleton;
	}
	template<> VEILBOUNDPROJECT_API UClass* StaticClass<AVeilboundProjectGameMode>()
	{
		return AVeilboundProjectGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AVeilboundProjectGameMode);
	AVeilboundProjectGameMode::~AVeilboundProjectGameMode() {}
	struct Z_CompiledInDeferFile_FID_VeilboundProject_Source_VeilboundProject_VeilboundProjectGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_VeilboundProject_Source_VeilboundProject_VeilboundProjectGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AVeilboundProjectGameMode, AVeilboundProjectGameMode::StaticClass, TEXT("AVeilboundProjectGameMode"), &Z_Registration_Info_UClass_AVeilboundProjectGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AVeilboundProjectGameMode), 2432529127U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_VeilboundProject_Source_VeilboundProject_VeilboundProjectGameMode_h_3303936070(TEXT("/Script/VeilboundProject"),
		Z_CompiledInDeferFile_FID_VeilboundProject_Source_VeilboundProject_VeilboundProjectGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_VeilboundProject_Source_VeilboundProject_VeilboundProjectGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
