// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Machine.h"

#ifdef ENGINEFACTORY_Machine_generated_h
#error "Machine.generated.h already included, missing '#pragma once' in Machine.h"
#endif
#define ENGINEFACTORY_Machine_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AMachine *****************************************************************
#define FID_JIHO_UE5_DT_EngineFactory_EngineFactory_Source_EngineFactory_Machine_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execTimeRate);


ENGINEFACTORY_API UClass* Z_Construct_UClass_AMachine_NoRegister();

#define FID_JIHO_UE5_DT_EngineFactory_EngineFactory_Source_EngineFactory_Machine_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMachine(); \
	friend struct Z_Construct_UClass_AMachine_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINEFACTORY_API UClass* Z_Construct_UClass_AMachine_NoRegister(); \
public: \
	DECLARE_CLASS2(AMachine, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/EngineFactory"), Z_Construct_UClass_AMachine_NoRegister) \
	DECLARE_SERIALIZER(AMachine)


#define FID_JIHO_UE5_DT_EngineFactory_EngineFactory_Source_EngineFactory_Machine_h_12_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AMachine(AMachine&&) = delete; \
	AMachine(const AMachine&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMachine); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMachine); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMachine) \
	NO_API virtual ~AMachine();


#define FID_JIHO_UE5_DT_EngineFactory_EngineFactory_Source_EngineFactory_Machine_h_9_PROLOG
#define FID_JIHO_UE5_DT_EngineFactory_EngineFactory_Source_EngineFactory_Machine_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_JIHO_UE5_DT_EngineFactory_EngineFactory_Source_EngineFactory_Machine_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_JIHO_UE5_DT_EngineFactory_EngineFactory_Source_EngineFactory_Machine_h_12_INCLASS_NO_PURE_DECLS \
	FID_JIHO_UE5_DT_EngineFactory_EngineFactory_Source_EngineFactory_Machine_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AMachine;

// ********** End Class AMachine *******************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_JIHO_UE5_DT_EngineFactory_EngineFactory_Source_EngineFactory_Machine_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
