// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ManagerComponent.h"

#ifdef ENGINEFACTORY_ManagerComponent_generated_h
#error "ManagerComponent.generated.h already included, missing '#pragma once' in ManagerComponent.h"
#endif
#define ENGINEFACTORY_ManagerComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UManagerComponent ********************************************************
#define FID_JIHO_UE5_DT_EngineFactory_EngineFactory_Source_EngineFactory_ManagerComponent_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetCountByIndex); \
	DECLARE_FUNCTION(execAddCountByIndex);


ENGINEFACTORY_API UClass* Z_Construct_UClass_UManagerComponent_NoRegister();

#define FID_JIHO_UE5_DT_EngineFactory_EngineFactory_Source_EngineFactory_ManagerComponent_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUManagerComponent(); \
	friend struct Z_Construct_UClass_UManagerComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINEFACTORY_API UClass* Z_Construct_UClass_UManagerComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UManagerComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/EngineFactory"), Z_Construct_UClass_UManagerComponent_NoRegister) \
	DECLARE_SERIALIZER(UManagerComponent)


#define FID_JIHO_UE5_DT_EngineFactory_EngineFactory_Source_EngineFactory_ManagerComponent_h_11_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UManagerComponent(UManagerComponent&&) = delete; \
	UManagerComponent(const UManagerComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UManagerComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UManagerComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UManagerComponent) \
	NO_API virtual ~UManagerComponent();


#define FID_JIHO_UE5_DT_EngineFactory_EngineFactory_Source_EngineFactory_ManagerComponent_h_8_PROLOG
#define FID_JIHO_UE5_DT_EngineFactory_EngineFactory_Source_EngineFactory_ManagerComponent_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_JIHO_UE5_DT_EngineFactory_EngineFactory_Source_EngineFactory_ManagerComponent_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_JIHO_UE5_DT_EngineFactory_EngineFactory_Source_EngineFactory_ManagerComponent_h_11_INCLASS_NO_PURE_DECLS \
	FID_JIHO_UE5_DT_EngineFactory_EngineFactory_Source_EngineFactory_ManagerComponent_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UManagerComponent;

// ********** End Class UManagerComponent **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_JIHO_UE5_DT_EngineFactory_EngineFactory_Source_EngineFactory_ManagerComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
