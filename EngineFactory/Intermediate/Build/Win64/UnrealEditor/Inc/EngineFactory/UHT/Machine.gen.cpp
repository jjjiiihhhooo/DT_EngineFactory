// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EngineFactory/Machine.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMachine() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINEFACTORY_API UClass* Z_Construct_UClass_AEngineParts_NoRegister();
ENGINEFACTORY_API UClass* Z_Construct_UClass_AMachine();
ENGINEFACTORY_API UClass* Z_Construct_UClass_AMachine_NoRegister();
UPackage* Z_Construct_UPackage__Script_EngineFactory();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AMachine Function TimeRate ***********************************************
struct Z_Construct_UFunction_AMachine_TimeRate_Statics
{
	struct Machine_eventTimeRate_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Action" },
		{ "ModuleRelativePath", "Machine.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMachine_TimeRate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Machine_eventTimeRate_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMachine_TimeRate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMachine_TimeRate_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMachine_TimeRate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMachine_TimeRate_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AMachine, nullptr, "TimeRate", Z_Construct_UFunction_AMachine_TimeRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMachine_TimeRate_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMachine_TimeRate_Statics::Machine_eventTimeRate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMachine_TimeRate_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMachine_TimeRate_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AMachine_TimeRate_Statics::Machine_eventTimeRate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMachine_TimeRate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMachine_TimeRate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMachine::execTimeRate)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->TimeRate();
	P_NATIVE_END;
}
// ********** End Class AMachine Function TimeRate *************************************************

// ********** Begin Class AMachine *****************************************************************
void AMachine::StaticRegisterNativesAMachine()
{
	UClass* Class = AMachine::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "TimeRate", &AMachine::execTimeRate },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_AMachine;
UClass* AMachine::GetPrivateStaticClass()
{
	using TClass = AMachine;
	if (!Z_Registration_Info_UClass_AMachine.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("Machine"),
			Z_Registration_Info_UClass_AMachine.InnerSingleton,
			StaticRegisterNativesAMachine,
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
	return Z_Registration_Info_UClass_AMachine.InnerSingleton;
}
UClass* Z_Construct_UClass_AMachine_NoRegister()
{
	return AMachine::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AMachine_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Machine.h" },
		{ "ModuleRelativePath", "Machine.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Parts_MetaData[] = {
		{ "Category", "Action" },
		{ "ModuleRelativePath", "Machine.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAction_MetaData[] = {
		{ "Category", "Action" },
		{ "ModuleRelativePath", "Machine.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActionTime_MetaData[] = {
		{ "Category", "Action" },
		{ "ModuleRelativePath", "Machine.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurActionTime_MetaData[] = {
		{ "Category", "Action" },
		{ "ModuleRelativePath", "Machine.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TagName_MetaData[] = {
		{ "Category", "Trigger" },
		{ "ModuleRelativePath", "Machine.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Parts;
	static void NewProp_bAction_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAction;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ActionTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurActionTime;
	static const UECodeGen_Private::FNamePropertyParams NewProp_TagName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AMachine_TimeRate, "TimeRate" }, // 4185174152
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMachine>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMachine_Statics::NewProp_Parts = { "Parts", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMachine, Parts), Z_Construct_UClass_AEngineParts_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Parts_MetaData), NewProp_Parts_MetaData) };
void Z_Construct_UClass_AMachine_Statics::NewProp_bAction_SetBit(void* Obj)
{
	((AMachine*)Obj)->bAction = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMachine_Statics::NewProp_bAction = { "bAction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMachine), &Z_Construct_UClass_AMachine_Statics::NewProp_bAction_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAction_MetaData), NewProp_bAction_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMachine_Statics::NewProp_ActionTime = { "ActionTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMachine, ActionTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActionTime_MetaData), NewProp_ActionTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMachine_Statics::NewProp_CurActionTime = { "CurActionTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMachine, CurActionTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurActionTime_MetaData), NewProp_CurActionTime_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AMachine_Statics::NewProp_TagName = { "TagName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMachine, TagName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TagName_MetaData), NewProp_TagName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMachine_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMachine_Statics::NewProp_Parts,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMachine_Statics::NewProp_bAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMachine_Statics::NewProp_ActionTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMachine_Statics::NewProp_CurActionTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMachine_Statics::NewProp_TagName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMachine_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMachine_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_EngineFactory,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMachine_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMachine_Statics::ClassParams = {
	&AMachine::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AMachine_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AMachine_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMachine_Statics::Class_MetaDataParams), Z_Construct_UClass_AMachine_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMachine()
{
	if (!Z_Registration_Info_UClass_AMachine.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMachine.OuterSingleton, Z_Construct_UClass_AMachine_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMachine.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMachine);
AMachine::~AMachine() {}
// ********** End Class AMachine *******************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_JIHO_UE5_DT_EngineFactory_EngineFactory_Source_EngineFactory_Machine_h__Script_EngineFactory_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMachine, AMachine::StaticClass, TEXT("AMachine"), &Z_Registration_Info_UClass_AMachine, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMachine), 3375733011U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_JIHO_UE5_DT_EngineFactory_EngineFactory_Source_EngineFactory_Machine_h__Script_EngineFactory_3097131551(TEXT("/Script/EngineFactory"),
	Z_CompiledInDeferFile_FID_JIHO_UE5_DT_EngineFactory_EngineFactory_Source_EngineFactory_Machine_h__Script_EngineFactory_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_JIHO_UE5_DT_EngineFactory_EngineFactory_Source_EngineFactory_Machine_h__Script_EngineFactory_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
