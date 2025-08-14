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
ENGINEFACTORY_API UClass* Z_Construct_UClass_AMachine();
ENGINEFACTORY_API UClass* Z_Construct_UClass_AMachine_NoRegister();
UPackage* Z_Construct_UPackage__Script_EngineFactory();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AMachine *****************************************************************
void AMachine::StaticRegisterNativesAMachine()
{
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TagName_MetaData[] = {
		{ "Category", "Trigger" },
		{ "ModuleRelativePath", "Machine.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NextTagName_MetaData[] = {
		{ "Category", "Trigger" },
		{ "ModuleRelativePath", "Machine.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_TagName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_NextTagName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMachine>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AMachine_Statics::NewProp_TagName = { "TagName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMachine, TagName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TagName_MetaData), NewProp_TagName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AMachine_Statics::NewProp_NextTagName = { "NextTagName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMachine, NextTagName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NextTagName_MetaData), NewProp_NextTagName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMachine_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMachine_Statics::NewProp_TagName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMachine_Statics::NewProp_NextTagName,
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
	nullptr,
	Z_Construct_UClass_AMachine_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
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
		{ Z_Construct_UClass_AMachine, AMachine::StaticClass, TEXT("AMachine"), &Z_Registration_Info_UClass_AMachine, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMachine), 2685670630U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_JIHO_UE5_DT_EngineFactory_EngineFactory_Source_EngineFactory_Machine_h__Script_EngineFactory_998050374(TEXT("/Script/EngineFactory"),
	Z_CompiledInDeferFile_FID_JIHO_UE5_DT_EngineFactory_EngineFactory_Source_EngineFactory_Machine_h__Script_EngineFactory_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_JIHO_UE5_DT_EngineFactory_EngineFactory_Source_EngineFactory_Machine_h__Script_EngineFactory_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
