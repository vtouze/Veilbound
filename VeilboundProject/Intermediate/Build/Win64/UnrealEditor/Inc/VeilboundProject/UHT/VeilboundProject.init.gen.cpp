// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVeilboundProject_init() {}
	VEILBOUNDPROJECT_API UFunction* Z_Construct_UDelegateFunction_VeilboundProject_OnPickUp__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_VeilboundProject;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_VeilboundProject()
	{
		if (!Z_Registration_Info_UPackage__Script_VeilboundProject.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_VeilboundProject_OnPickUp__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/VeilboundProject",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x49EB9470,
				0x869940DB,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_VeilboundProject.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_VeilboundProject.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_VeilboundProject(Z_Construct_UPackage__Script_VeilboundProject, TEXT("/Script/VeilboundProject"), Z_Registration_Info_UPackage__Script_VeilboundProject, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x49EB9470, 0x869940DB));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
