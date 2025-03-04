// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VeilboundProject/LevelStreamerActor.h"
#include "../../Source/Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLevelStreamerActor() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	UPackage* Z_Construct_UPackage__Script_VeilboundProject();
	VEILBOUNDPROJECT_API UClass* Z_Construct_UClass_ALevelStreamerActor();
	VEILBOUNDPROJECT_API UClass* Z_Construct_UClass_ALevelStreamerActor_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ALevelStreamerActor::execOverlapEnds)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OverlapEnds(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALevelStreamerActor::execOverlapBegins)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OverlapBegins(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
		P_NATIVE_END;
	}
	void ALevelStreamerActor::StaticRegisterNativesALevelStreamerActor()
	{
		UClass* Class = ALevelStreamerActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OverlapBegins", &ALevelStreamerActor::execOverlapBegins },
			{ "OverlapEnds", &ALevelStreamerActor::execOverlapEnds },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ALevelStreamerActor_OverlapBegins_Statics
	{
		struct LevelStreamerActor_eventOverlapBegins_Parms
		{
			UPrimitiveComponent* OverlappedComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALevelStreamerActor_OverlapBegins_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALevelStreamerActor_OverlapBegins_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LevelStreamerActor_eventOverlapBegins_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelStreamerActor_OverlapBegins_Statics::NewProp_OverlappedComponent_MetaData), Z_Construct_UFunction_ALevelStreamerActor_OverlapBegins_Statics::NewProp_OverlappedComponent_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALevelStreamerActor_OverlapBegins_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LevelStreamerActor_eventOverlapBegins_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALevelStreamerActor_OverlapBegins_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALevelStreamerActor_OverlapBegins_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LevelStreamerActor_eventOverlapBegins_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelStreamerActor_OverlapBegins_Statics::NewProp_OtherComp_MetaData), Z_Construct_UFunction_ALevelStreamerActor_OverlapBegins_Statics::NewProp_OtherComp_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ALevelStreamerActor_OverlapBegins_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LevelStreamerActor_eventOverlapBegins_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_ALevelStreamerActor_OverlapBegins_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((LevelStreamerActor_eventOverlapBegins_Parms*)Obj)->bFromSweep = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ALevelStreamerActor_OverlapBegins_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LevelStreamerActor_eventOverlapBegins_Parms), &Z_Construct_UFunction_ALevelStreamerActor_OverlapBegins_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALevelStreamerActor_OverlapBegins_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ALevelStreamerActor_OverlapBegins_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LevelStreamerActor_eventOverlapBegins_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelStreamerActor_OverlapBegins_Statics::NewProp_SweepResult_MetaData), Z_Construct_UFunction_ALevelStreamerActor_OverlapBegins_Statics::NewProp_SweepResult_MetaData) }; // 1891709922
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALevelStreamerActor_OverlapBegins_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelStreamerActor_OverlapBegins_Statics::NewProp_OverlappedComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelStreamerActor_OverlapBegins_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelStreamerActor_OverlapBegins_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelStreamerActor_OverlapBegins_Statics::NewProp_OtherBodyIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelStreamerActor_OverlapBegins_Statics::NewProp_bFromSweep,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelStreamerActor_OverlapBegins_Statics::NewProp_SweepResult,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALevelStreamerActor_OverlapBegins_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "LevelStreamerActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALevelStreamerActor_OverlapBegins_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALevelStreamerActor, nullptr, "OverlapBegins", nullptr, nullptr, Z_Construct_UFunction_ALevelStreamerActor_OverlapBegins_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelStreamerActor_OverlapBegins_Statics::PropPointers), sizeof(Z_Construct_UFunction_ALevelStreamerActor_OverlapBegins_Statics::LevelStreamerActor_eventOverlapBegins_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelStreamerActor_OverlapBegins_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALevelStreamerActor_OverlapBegins_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelStreamerActor_OverlapBegins_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ALevelStreamerActor_OverlapBegins_Statics::LevelStreamerActor_eventOverlapBegins_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ALevelStreamerActor_OverlapBegins()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALevelStreamerActor_OverlapBegins_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALevelStreamerActor_OverlapEnds_Statics
	{
		struct LevelStreamerActor_eventOverlapEnds_Parms
		{
			UPrimitiveComponent* OverlappedComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALevelStreamerActor_OverlapEnds_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALevelStreamerActor_OverlapEnds_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LevelStreamerActor_eventOverlapEnds_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelStreamerActor_OverlapEnds_Statics::NewProp_OverlappedComponent_MetaData), Z_Construct_UFunction_ALevelStreamerActor_OverlapEnds_Statics::NewProp_OverlappedComponent_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALevelStreamerActor_OverlapEnds_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LevelStreamerActor_eventOverlapEnds_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALevelStreamerActor_OverlapEnds_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALevelStreamerActor_OverlapEnds_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LevelStreamerActor_eventOverlapEnds_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelStreamerActor_OverlapEnds_Statics::NewProp_OtherComp_MetaData), Z_Construct_UFunction_ALevelStreamerActor_OverlapEnds_Statics::NewProp_OtherComp_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ALevelStreamerActor_OverlapEnds_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LevelStreamerActor_eventOverlapEnds_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALevelStreamerActor_OverlapEnds_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelStreamerActor_OverlapEnds_Statics::NewProp_OverlappedComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelStreamerActor_OverlapEnds_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelStreamerActor_OverlapEnds_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelStreamerActor_OverlapEnds_Statics::NewProp_OtherBodyIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALevelStreamerActor_OverlapEnds_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "LevelStreamerActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALevelStreamerActor_OverlapEnds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALevelStreamerActor, nullptr, "OverlapEnds", nullptr, nullptr, Z_Construct_UFunction_ALevelStreamerActor_OverlapEnds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelStreamerActor_OverlapEnds_Statics::PropPointers), sizeof(Z_Construct_UFunction_ALevelStreamerActor_OverlapEnds_Statics::LevelStreamerActor_eventOverlapEnds_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelStreamerActor_OverlapEnds_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALevelStreamerActor_OverlapEnds_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelStreamerActor_OverlapEnds_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ALevelStreamerActor_OverlapEnds_Statics::LevelStreamerActor_eventOverlapEnds_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ALevelStreamerActor_OverlapEnds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALevelStreamerActor_OverlapEnds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ALevelStreamerActor);
	UClass* Z_Construct_UClass_ALevelStreamerActor_NoRegister()
	{
		return ALevelStreamerActor::StaticClass();
	}
	struct Z_Construct_UClass_ALevelStreamerActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlapVolume_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlapVolume;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LevelToLoad_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_LevelToLoad;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LevelToUnload_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_LevelToUnload;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALevelStreamerActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_VeilboundProject,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALevelStreamerActor_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ALevelStreamerActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ALevelStreamerActor_OverlapBegins, "OverlapBegins" }, // 2803333511
		{ &Z_Construct_UFunction_ALevelStreamerActor_OverlapEnds, "OverlapEnds" }, // 295668763
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALevelStreamerActor_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALevelStreamerActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LevelStreamerActor.h" },
		{ "ModuleRelativePath", "LevelStreamerActor.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALevelStreamerActor_Statics::NewProp_OverlapVolume_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "LevelStreamerActor" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Overlap volume to trigger level streaming\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "LevelStreamerActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Overlap volume to trigger level streaming" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALevelStreamerActor_Statics::NewProp_OverlapVolume = { "OverlapVolume", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALevelStreamerActor, OverlapVolume), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALevelStreamerActor_Statics::NewProp_OverlapVolume_MetaData), Z_Construct_UClass_ALevelStreamerActor_Statics::NewProp_OverlapVolume_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALevelStreamerActor_Statics::NewProp_LevelToLoad_MetaData[] = {
		{ "Category", "LevelStreamerActor" },
		{ "ModuleRelativePath", "LevelStreamerActor.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_ALevelStreamerActor_Statics::NewProp_LevelToLoad = { "LevelToLoad", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALevelStreamerActor, LevelToLoad), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALevelStreamerActor_Statics::NewProp_LevelToLoad_MetaData), Z_Construct_UClass_ALevelStreamerActor_Statics::NewProp_LevelToLoad_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALevelStreamerActor_Statics::NewProp_LevelToUnload_MetaData[] = {
		{ "Category", "LevelStreamerActor" },
		{ "ModuleRelativePath", "LevelStreamerActor.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_ALevelStreamerActor_Statics::NewProp_LevelToUnload = { "LevelToUnload", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALevelStreamerActor, LevelToUnload), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALevelStreamerActor_Statics::NewProp_LevelToUnload_MetaData), Z_Construct_UClass_ALevelStreamerActor_Statics::NewProp_LevelToUnload_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALevelStreamerActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelStreamerActor_Statics::NewProp_OverlapVolume,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelStreamerActor_Statics::NewProp_LevelToLoad,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelStreamerActor_Statics::NewProp_LevelToUnload,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALevelStreamerActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALevelStreamerActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ALevelStreamerActor_Statics::ClassParams = {
		&ALevelStreamerActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ALevelStreamerActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ALevelStreamerActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALevelStreamerActor_Statics::Class_MetaDataParams), Z_Construct_UClass_ALevelStreamerActor_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALevelStreamerActor_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ALevelStreamerActor()
	{
		if (!Z_Registration_Info_UClass_ALevelStreamerActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALevelStreamerActor.OuterSingleton, Z_Construct_UClass_ALevelStreamerActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ALevelStreamerActor.OuterSingleton;
	}
	template<> VEILBOUNDPROJECT_API UClass* StaticClass<ALevelStreamerActor>()
	{
		return ALevelStreamerActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALevelStreamerActor);
	ALevelStreamerActor::~ALevelStreamerActor() {}
	struct Z_CompiledInDeferFile_FID_VeilboundProject_Source_VeilboundProject_LevelStreamerActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_VeilboundProject_Source_VeilboundProject_LevelStreamerActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ALevelStreamerActor, ALevelStreamerActor::StaticClass, TEXT("ALevelStreamerActor"), &Z_Registration_Info_UClass_ALevelStreamerActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALevelStreamerActor), 1599800700U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_VeilboundProject_Source_VeilboundProject_LevelStreamerActor_h_1961037483(TEXT("/Script/VeilboundProject"),
		Z_CompiledInDeferFile_FID_VeilboundProject_Source_VeilboundProject_LevelStreamerActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_VeilboundProject_Source_VeilboundProject_LevelStreamerActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
