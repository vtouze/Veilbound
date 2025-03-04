// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VeilboundProjectProjectile.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef VEILBOUNDPROJECT_VeilboundProjectProjectile_generated_h
#error "VeilboundProjectProjectile.generated.h already included, missing '#pragma once' in VeilboundProjectProjectile.h"
#endif
#define VEILBOUNDPROJECT_VeilboundProjectProjectile_generated_h

#define FID_VeilboundProject_Source_VeilboundProject_VeilboundProjectProjectile_h_15_SPARSE_DATA
#define FID_VeilboundProject_Source_VeilboundProject_VeilboundProjectProjectile_h_15_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_VeilboundProject_Source_VeilboundProject_VeilboundProjectProjectile_h_15_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_VeilboundProject_Source_VeilboundProject_VeilboundProjectProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define FID_VeilboundProject_Source_VeilboundProject_VeilboundProjectProjectile_h_15_ACCESSORS
#define FID_VeilboundProject_Source_VeilboundProject_VeilboundProjectProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAVeilboundProjectProjectile(); \
	friend struct Z_Construct_UClass_AVeilboundProjectProjectile_Statics; \
public: \
	DECLARE_CLASS(AVeilboundProjectProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VeilboundProject"), NO_API) \
	DECLARE_SERIALIZER(AVeilboundProjectProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_VeilboundProject_Source_VeilboundProject_VeilboundProjectProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AVeilboundProjectProjectile(AVeilboundProjectProjectile&&); \
	NO_API AVeilboundProjectProjectile(const AVeilboundProjectProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AVeilboundProjectProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AVeilboundProjectProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AVeilboundProjectProjectile) \
	NO_API virtual ~AVeilboundProjectProjectile();


#define FID_VeilboundProject_Source_VeilboundProject_VeilboundProjectProjectile_h_12_PROLOG
#define FID_VeilboundProject_Source_VeilboundProject_VeilboundProjectProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_VeilboundProject_Source_VeilboundProject_VeilboundProjectProjectile_h_15_SPARSE_DATA \
	FID_VeilboundProject_Source_VeilboundProject_VeilboundProjectProjectile_h_15_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_VeilboundProject_Source_VeilboundProject_VeilboundProjectProjectile_h_15_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_VeilboundProject_Source_VeilboundProject_VeilboundProjectProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_VeilboundProject_Source_VeilboundProject_VeilboundProjectProjectile_h_15_ACCESSORS \
	FID_VeilboundProject_Source_VeilboundProject_VeilboundProjectProjectile_h_15_INCLASS_NO_PURE_DECLS \
	FID_VeilboundProject_Source_VeilboundProject_VeilboundProjectProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VEILBOUNDPROJECT_API UClass* StaticClass<class AVeilboundProjectProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_VeilboundProject_Source_VeilboundProject_VeilboundProjectProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
