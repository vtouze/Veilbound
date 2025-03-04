// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LevelStreamerActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef VEILBOUNDPROJECT_LevelStreamerActor_generated_h
#error "LevelStreamerActor.generated.h already included, missing '#pragma once' in LevelStreamerActor.h"
#endif
#define VEILBOUNDPROJECT_LevelStreamerActor_generated_h

#define FID_VeilboundProject_Source_VeilboundProject_LevelStreamerActor_h_11_SPARSE_DATA
#define FID_VeilboundProject_Source_VeilboundProject_LevelStreamerActor_h_11_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_VeilboundProject_Source_VeilboundProject_LevelStreamerActor_h_11_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_VeilboundProject_Source_VeilboundProject_LevelStreamerActor_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOverlapEnds); \
	DECLARE_FUNCTION(execOverlapBegins);


#define FID_VeilboundProject_Source_VeilboundProject_LevelStreamerActor_h_11_ACCESSORS
#define FID_VeilboundProject_Source_VeilboundProject_LevelStreamerActor_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALevelStreamerActor(); \
	friend struct Z_Construct_UClass_ALevelStreamerActor_Statics; \
public: \
	DECLARE_CLASS(ALevelStreamerActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VeilboundProject"), NO_API) \
	DECLARE_SERIALIZER(ALevelStreamerActor)


#define FID_VeilboundProject_Source_VeilboundProject_LevelStreamerActor_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALevelStreamerActor(ALevelStreamerActor&&); \
	NO_API ALevelStreamerActor(const ALevelStreamerActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALevelStreamerActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALevelStreamerActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ALevelStreamerActor) \
	NO_API virtual ~ALevelStreamerActor();


#define FID_VeilboundProject_Source_VeilboundProject_LevelStreamerActor_h_8_PROLOG
#define FID_VeilboundProject_Source_VeilboundProject_LevelStreamerActor_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_VeilboundProject_Source_VeilboundProject_LevelStreamerActor_h_11_SPARSE_DATA \
	FID_VeilboundProject_Source_VeilboundProject_LevelStreamerActor_h_11_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_VeilboundProject_Source_VeilboundProject_LevelStreamerActor_h_11_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_VeilboundProject_Source_VeilboundProject_LevelStreamerActor_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_VeilboundProject_Source_VeilboundProject_LevelStreamerActor_h_11_ACCESSORS \
	FID_VeilboundProject_Source_VeilboundProject_LevelStreamerActor_h_11_INCLASS_NO_PURE_DECLS \
	FID_VeilboundProject_Source_VeilboundProject_LevelStreamerActor_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VEILBOUNDPROJECT_API UClass* StaticClass<class ALevelStreamerActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_VeilboundProject_Source_VeilboundProject_LevelStreamerActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
