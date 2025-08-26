// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RobotArm.h"

#ifdef ENGINEFACTORY_RobotArm_generated_h
#error "RobotArm.generated.h already included, missing '#pragma once' in RobotArm.h"
#endif
#define ENGINEFACTORY_RobotArm_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ARobotArm ****************************************************************
ENGINEFACTORY_API UClass* Z_Construct_UClass_ARobotArm_NoRegister();

#define FID_JIHO_UE5_DT_EngineFactory_EngineFactory_Source_EngineFactory_RobotArm_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesARobotArm(); \
	friend struct Z_Construct_UClass_ARobotArm_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINEFACTORY_API UClass* Z_Construct_UClass_ARobotArm_NoRegister(); \
public: \
	DECLARE_CLASS2(ARobotArm, AMachine, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/EngineFactory"), Z_Construct_UClass_ARobotArm_NoRegister) \
	DECLARE_SERIALIZER(ARobotArm)


#define FID_JIHO_UE5_DT_EngineFactory_EngineFactory_Source_EngineFactory_RobotArm_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ARobotArm(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ARobotArm(ARobotArm&&) = delete; \
	ARobotArm(const ARobotArm&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARobotArm); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARobotArm); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ARobotArm) \
	NO_API virtual ~ARobotArm();


#define FID_JIHO_UE5_DT_EngineFactory_EngineFactory_Source_EngineFactory_RobotArm_h_9_PROLOG
#define FID_JIHO_UE5_DT_EngineFactory_EngineFactory_Source_EngineFactory_RobotArm_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_JIHO_UE5_DT_EngineFactory_EngineFactory_Source_EngineFactory_RobotArm_h_12_INCLASS_NO_PURE_DECLS \
	FID_JIHO_UE5_DT_EngineFactory_EngineFactory_Source_EngineFactory_RobotArm_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ARobotArm;

// ********** End Class ARobotArm ******************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_JIHO_UE5_DT_EngineFactory_EngineFactory_Source_EngineFactory_RobotArm_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
