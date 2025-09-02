// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FactoryGameMode.h"

#ifdef ENGINEFACTORY_FactoryGameMode_generated_h
#error "FactoryGameMode.generated.h already included, missing '#pragma once' in FactoryGameMode.h"
#endif
#define ENGINEFACTORY_FactoryGameMode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AFactoryGameMode *********************************************************
#define FID_JIHO_UE5_DT_EngineFactory_EngineFactory_Source_EngineFactory_FactoryGameMode_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execChangeCamera);


ENGINEFACTORY_API UClass* Z_Construct_UClass_AFactoryGameMode_NoRegister();

#define FID_JIHO_UE5_DT_EngineFactory_EngineFactory_Source_EngineFactory_FactoryGameMode_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFactoryGameMode(); \
	friend struct Z_Construct_UClass_AFactoryGameMode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINEFACTORY_API UClass* Z_Construct_UClass_AFactoryGameMode_NoRegister(); \
public: \
	DECLARE_CLASS2(AFactoryGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/EngineFactory"), Z_Construct_UClass_AFactoryGameMode_NoRegister) \
	DECLARE_SERIALIZER(AFactoryGameMode)


#define FID_JIHO_UE5_DT_EngineFactory_EngineFactory_Source_EngineFactory_FactoryGameMode_h_12_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AFactoryGameMode(AFactoryGameMode&&) = delete; \
	AFactoryGameMode(const AFactoryGameMode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFactoryGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFactoryGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFactoryGameMode) \
	NO_API virtual ~AFactoryGameMode();


#define FID_JIHO_UE5_DT_EngineFactory_EngineFactory_Source_EngineFactory_FactoryGameMode_h_9_PROLOG
#define FID_JIHO_UE5_DT_EngineFactory_EngineFactory_Source_EngineFactory_FactoryGameMode_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_JIHO_UE5_DT_EngineFactory_EngineFactory_Source_EngineFactory_FactoryGameMode_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_JIHO_UE5_DT_EngineFactory_EngineFactory_Source_EngineFactory_FactoryGameMode_h_12_INCLASS_NO_PURE_DECLS \
	FID_JIHO_UE5_DT_EngineFactory_EngineFactory_Source_EngineFactory_FactoryGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AFactoryGameMode;

// ********** End Class AFactoryGameMode ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_JIHO_UE5_DT_EngineFactory_EngineFactory_Source_EngineFactory_FactoryGameMode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
