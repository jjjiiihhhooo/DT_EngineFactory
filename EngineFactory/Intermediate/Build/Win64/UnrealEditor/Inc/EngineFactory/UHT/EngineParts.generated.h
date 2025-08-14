// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EngineParts.h"

#ifdef ENGINEFACTORY_EngineParts_generated_h
#error "EngineParts.generated.h already included, missing '#pragma once' in EngineParts.h"
#endif
#define ENGINEFACTORY_EngineParts_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AEngineParts *************************************************************
#define FID_JIHO_UE5_DT_EngineFactory_EngineFactory_Source_EngineFactory_EngineParts_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetCanMove); \
	DECLARE_FUNCTION(execCanMove); \
	DECLARE_FUNCTION(execGetCurDistance); \
	DECLARE_FUNCTION(execSetMoveSpeed); \
	DECLARE_FUNCTION(execGetMoveSpeed);


ENGINEFACTORY_API UClass* Z_Construct_UClass_AEngineParts_NoRegister();

#define FID_JIHO_UE5_DT_EngineFactory_EngineFactory_Source_EngineFactory_EngineParts_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAEngineParts(); \
	friend struct Z_Construct_UClass_AEngineParts_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINEFACTORY_API UClass* Z_Construct_UClass_AEngineParts_NoRegister(); \
public: \
	DECLARE_CLASS2(AEngineParts, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/EngineFactory"), Z_Construct_UClass_AEngineParts_NoRegister) \
	DECLARE_SERIALIZER(AEngineParts)


#define FID_JIHO_UE5_DT_EngineFactory_EngineFactory_Source_EngineFactory_EngineParts_h_13_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AEngineParts(AEngineParts&&) = delete; \
	AEngineParts(const AEngineParts&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEngineParts); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEngineParts); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AEngineParts) \
	NO_API virtual ~AEngineParts();


#define FID_JIHO_UE5_DT_EngineFactory_EngineFactory_Source_EngineFactory_EngineParts_h_10_PROLOG
#define FID_JIHO_UE5_DT_EngineFactory_EngineFactory_Source_EngineFactory_EngineParts_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_JIHO_UE5_DT_EngineFactory_EngineFactory_Source_EngineFactory_EngineParts_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_JIHO_UE5_DT_EngineFactory_EngineFactory_Source_EngineFactory_EngineParts_h_13_INCLASS_NO_PURE_DECLS \
	FID_JIHO_UE5_DT_EngineFactory_EngineFactory_Source_EngineFactory_EngineParts_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AEngineParts;

// ********** End Class AEngineParts ***************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_JIHO_UE5_DT_EngineFactory_EngineFactory_Source_EngineFactory_EngineParts_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
