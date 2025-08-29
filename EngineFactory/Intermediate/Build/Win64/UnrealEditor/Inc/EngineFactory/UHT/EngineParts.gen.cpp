// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EngineFactory/EngineParts.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeEngineParts() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USplineComponent_NoRegister();
ENGINEFACTORY_API UClass* Z_Construct_UClass_AEngineParts();
ENGINEFACTORY_API UClass* Z_Construct_UClass_AEngineParts_NoRegister();
UPackage* Z_Construct_UPackage__Script_EngineFactory();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AEngineParts Function CanMove ********************************************
struct Z_Construct_UFunction_AEngineParts_CanMove_Statics
{
	struct EngineParts_eventCanMove_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "EngineParts.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AEngineParts_CanMove_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((EngineParts_eventCanMove_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AEngineParts_CanMove_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(EngineParts_eventCanMove_Parms), &Z_Construct_UFunction_AEngineParts_CanMove_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEngineParts_CanMove_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEngineParts_CanMove_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AEngineParts_CanMove_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEngineParts_CanMove_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AEngineParts, nullptr, "CanMove", Z_Construct_UFunction_AEngineParts_CanMove_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEngineParts_CanMove_Statics::PropPointers), sizeof(Z_Construct_UFunction_AEngineParts_CanMove_Statics::EngineParts_eventCanMove_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AEngineParts_CanMove_Statics::Function_MetaDataParams), Z_Construct_UFunction_AEngineParts_CanMove_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AEngineParts_CanMove_Statics::EngineParts_eventCanMove_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AEngineParts_CanMove()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEngineParts_CanMove_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AEngineParts::execCanMove)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CanMove();
	P_NATIVE_END;
}
// ********** End Class AEngineParts Function CanMove **********************************************

// ********** Begin Class AEngineParts Function Detach *********************************************
struct Z_Construct_UFunction_AEngineParts_Detach_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Physics" },
		{ "ModuleRelativePath", "EngineParts.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEngineParts_Detach_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AEngineParts, nullptr, "Detach", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AEngineParts_Detach_Statics::Function_MetaDataParams), Z_Construct_UFunction_AEngineParts_Detach_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AEngineParts_Detach()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEngineParts_Detach_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AEngineParts::execDetach)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Detach();
	P_NATIVE_END;
}
// ********** End Class AEngineParts Function Detach ***********************************************

// ********** Begin Class AEngineParts Function GetCurDistance *************************************
struct Z_Construct_UFunction_AEngineParts_GetCurDistance_Statics
{
	struct EngineParts_eventGetCurDistance_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "EngineParts.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AEngineParts_GetCurDistance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EngineParts_eventGetCurDistance_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEngineParts_GetCurDistance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEngineParts_GetCurDistance_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AEngineParts_GetCurDistance_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEngineParts_GetCurDistance_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AEngineParts, nullptr, "GetCurDistance", Z_Construct_UFunction_AEngineParts_GetCurDistance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEngineParts_GetCurDistance_Statics::PropPointers), sizeof(Z_Construct_UFunction_AEngineParts_GetCurDistance_Statics::EngineParts_eventGetCurDistance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AEngineParts_GetCurDistance_Statics::Function_MetaDataParams), Z_Construct_UFunction_AEngineParts_GetCurDistance_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AEngineParts_GetCurDistance_Statics::EngineParts_eventGetCurDistance_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AEngineParts_GetCurDistance()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEngineParts_GetCurDistance_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AEngineParts::execGetCurDistance)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetCurDistance();
	P_NATIVE_END;
}
// ********** End Class AEngineParts Function GetCurDistance ***************************************

// ********** Begin Class AEngineParts Function GetMoveSpeed ***************************************
struct Z_Construct_UFunction_AEngineParts_GetMoveSpeed_Statics
{
	struct EngineParts_eventGetMoveSpeed_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "EngineParts.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AEngineParts_GetMoveSpeed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EngineParts_eventGetMoveSpeed_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEngineParts_GetMoveSpeed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEngineParts_GetMoveSpeed_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AEngineParts_GetMoveSpeed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEngineParts_GetMoveSpeed_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AEngineParts, nullptr, "GetMoveSpeed", Z_Construct_UFunction_AEngineParts_GetMoveSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEngineParts_GetMoveSpeed_Statics::PropPointers), sizeof(Z_Construct_UFunction_AEngineParts_GetMoveSpeed_Statics::EngineParts_eventGetMoveSpeed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AEngineParts_GetMoveSpeed_Statics::Function_MetaDataParams), Z_Construct_UFunction_AEngineParts_GetMoveSpeed_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AEngineParts_GetMoveSpeed_Statics::EngineParts_eventGetMoveSpeed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AEngineParts_GetMoveSpeed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEngineParts_GetMoveSpeed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AEngineParts::execGetMoveSpeed)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetMoveSpeed();
	P_NATIVE_END;
}
// ********** End Class AEngineParts Function GetMoveSpeed *****************************************

// ********** Begin Class AEngineParts Function SetCanMove *****************************************
struct Z_Construct_UFunction_AEngineParts_SetCanMove_Statics
{
	struct EngineParts_eventSetCanMove_Parms
	{
		bool CanMove;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "EngineParts.h" },
	};
#endif // WITH_METADATA
	static void NewProp_CanMove_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_CanMove;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AEngineParts_SetCanMove_Statics::NewProp_CanMove_SetBit(void* Obj)
{
	((EngineParts_eventSetCanMove_Parms*)Obj)->CanMove = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AEngineParts_SetCanMove_Statics::NewProp_CanMove = { "CanMove", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(EngineParts_eventSetCanMove_Parms), &Z_Construct_UFunction_AEngineParts_SetCanMove_Statics::NewProp_CanMove_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEngineParts_SetCanMove_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEngineParts_SetCanMove_Statics::NewProp_CanMove,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AEngineParts_SetCanMove_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEngineParts_SetCanMove_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AEngineParts, nullptr, "SetCanMove", Z_Construct_UFunction_AEngineParts_SetCanMove_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEngineParts_SetCanMove_Statics::PropPointers), sizeof(Z_Construct_UFunction_AEngineParts_SetCanMove_Statics::EngineParts_eventSetCanMove_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AEngineParts_SetCanMove_Statics::Function_MetaDataParams), Z_Construct_UFunction_AEngineParts_SetCanMove_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AEngineParts_SetCanMove_Statics::EngineParts_eventSetCanMove_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AEngineParts_SetCanMove()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEngineParts_SetCanMove_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AEngineParts::execSetCanMove)
{
	P_GET_UBOOL(Z_Param_CanMove);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetCanMove(Z_Param_CanMove);
	P_NATIVE_END;
}
// ********** End Class AEngineParts Function SetCanMove *******************************************

// ********** Begin Class AEngineParts Function SetMoveSpeed ***************************************
struct Z_Construct_UFunction_AEngineParts_SetMoveSpeed_Statics
{
	struct EngineParts_eventSetMoveSpeed_Parms
	{
		float MoveSpeed;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "EngineParts.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MoveSpeed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AEngineParts_SetMoveSpeed_Statics::NewProp_MoveSpeed = { "MoveSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EngineParts_eventSetMoveSpeed_Parms, MoveSpeed), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEngineParts_SetMoveSpeed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEngineParts_SetMoveSpeed_Statics::NewProp_MoveSpeed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AEngineParts_SetMoveSpeed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEngineParts_SetMoveSpeed_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AEngineParts, nullptr, "SetMoveSpeed", Z_Construct_UFunction_AEngineParts_SetMoveSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEngineParts_SetMoveSpeed_Statics::PropPointers), sizeof(Z_Construct_UFunction_AEngineParts_SetMoveSpeed_Statics::EngineParts_eventSetMoveSpeed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AEngineParts_SetMoveSpeed_Statics::Function_MetaDataParams), Z_Construct_UFunction_AEngineParts_SetMoveSpeed_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AEngineParts_SetMoveSpeed_Statics::EngineParts_eventSetMoveSpeed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AEngineParts_SetMoveSpeed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEngineParts_SetMoveSpeed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AEngineParts::execSetMoveSpeed)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_MoveSpeed);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMoveSpeed(Z_Param_MoveSpeed);
	P_NATIVE_END;
}
// ********** End Class AEngineParts Function SetMoveSpeed *****************************************

// ********** Begin Class AEngineParts Function SetSplineActor *************************************
struct Z_Construct_UFunction_AEngineParts_SetSplineActor_Statics
{
	struct EngineParts_eventSetSplineActor_Parms
	{
		AActor* Actor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "EngineParts.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AEngineParts_SetSplineActor_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EngineParts_eventSetSplineActor_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEngineParts_SetSplineActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEngineParts_SetSplineActor_Statics::NewProp_Actor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AEngineParts_SetSplineActor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEngineParts_SetSplineActor_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AEngineParts, nullptr, "SetSplineActor", Z_Construct_UFunction_AEngineParts_SetSplineActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEngineParts_SetSplineActor_Statics::PropPointers), sizeof(Z_Construct_UFunction_AEngineParts_SetSplineActor_Statics::EngineParts_eventSetSplineActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AEngineParts_SetSplineActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_AEngineParts_SetSplineActor_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AEngineParts_SetSplineActor_Statics::EngineParts_eventSetSplineActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AEngineParts_SetSplineActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEngineParts_SetSplineActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AEngineParts::execSetSplineActor)
{
	P_GET_OBJECT(AActor,Z_Param_Actor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSplineActor(Z_Param_Actor);
	P_NATIVE_END;
}
// ********** End Class AEngineParts Function SetSplineActor ***************************************

// ********** Begin Class AEngineParts *************************************************************
void AEngineParts::StaticRegisterNativesAEngineParts()
{
	UClass* Class = AEngineParts::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CanMove", &AEngineParts::execCanMove },
		{ "Detach", &AEngineParts::execDetach },
		{ "GetCurDistance", &AEngineParts::execGetCurDistance },
		{ "GetMoveSpeed", &AEngineParts::execGetMoveSpeed },
		{ "SetCanMove", &AEngineParts::execSetCanMove },
		{ "SetMoveSpeed", &AEngineParts::execSetMoveSpeed },
		{ "SetSplineActor", &AEngineParts::execSetSplineActor },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_AEngineParts;
UClass* AEngineParts::GetPrivateStaticClass()
{
	using TClass = AEngineParts;
	if (!Z_Registration_Info_UClass_AEngineParts.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("EngineParts"),
			Z_Registration_Info_UClass_AEngineParts.InnerSingleton,
			StaticRegisterNativesAEngineParts,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_AEngineParts.InnerSingleton;
}
UClass* Z_Construct_UClass_AEngineParts_NoRegister()
{
	return AEngineParts::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AEngineParts_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "EngineParts.h" },
		{ "ModuleRelativePath", "EngineParts.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CheckBox_MetaData[] = {
		{ "Category", "Collision" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "EngineParts.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SplineActor_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "EngineParts.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Spline_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "EngineParts.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CheckBox;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SplineActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Spline;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AEngineParts_CanMove, "CanMove" }, // 1116869573
		{ &Z_Construct_UFunction_AEngineParts_Detach, "Detach" }, // 3745411811
		{ &Z_Construct_UFunction_AEngineParts_GetCurDistance, "GetCurDistance" }, // 3293082216
		{ &Z_Construct_UFunction_AEngineParts_GetMoveSpeed, "GetMoveSpeed" }, // 4274682811
		{ &Z_Construct_UFunction_AEngineParts_SetCanMove, "SetCanMove" }, // 3289374437
		{ &Z_Construct_UFunction_AEngineParts_SetMoveSpeed, "SetMoveSpeed" }, // 2250773034
		{ &Z_Construct_UFunction_AEngineParts_SetSplineActor, "SetSplineActor" }, // 902933525
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEngineParts>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEngineParts_Statics::NewProp_CheckBox = { "CheckBox", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEngineParts, CheckBox), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CheckBox_MetaData), NewProp_CheckBox_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEngineParts_Statics::NewProp_SplineActor = { "SplineActor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEngineParts, SplineActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SplineActor_MetaData), NewProp_SplineActor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEngineParts_Statics::NewProp_Spline = { "Spline", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEngineParts, Spline), Z_Construct_UClass_USplineComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Spline_MetaData), NewProp_Spline_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEngineParts_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEngineParts_Statics::NewProp_CheckBox,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEngineParts_Statics::NewProp_SplineActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEngineParts_Statics::NewProp_Spline,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEngineParts_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AEngineParts_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_EngineFactory,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEngineParts_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AEngineParts_Statics::ClassParams = {
	&AEngineParts::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AEngineParts_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AEngineParts_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEngineParts_Statics::Class_MetaDataParams), Z_Construct_UClass_AEngineParts_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AEngineParts()
{
	if (!Z_Registration_Info_UClass_AEngineParts.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEngineParts.OuterSingleton, Z_Construct_UClass_AEngineParts_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AEngineParts.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AEngineParts);
AEngineParts::~AEngineParts() {}
// ********** End Class AEngineParts ***************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_JIHO_UE5_DT_EngineFactory_EngineFactory_Source_EngineFactory_EngineParts_h__Script_EngineFactory_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AEngineParts, AEngineParts::StaticClass, TEXT("AEngineParts"), &Z_Registration_Info_UClass_AEngineParts, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEngineParts), 2291880957U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_JIHO_UE5_DT_EngineFactory_EngineFactory_Source_EngineFactory_EngineParts_h__Script_EngineFactory_3245174964(TEXT("/Script/EngineFactory"),
	Z_CompiledInDeferFile_FID_JIHO_UE5_DT_EngineFactory_EngineFactory_Source_EngineFactory_EngineParts_h__Script_EngineFactory_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_JIHO_UE5_DT_EngineFactory_EngineFactory_Source_EngineFactory_EngineParts_h__Script_EngineFactory_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
