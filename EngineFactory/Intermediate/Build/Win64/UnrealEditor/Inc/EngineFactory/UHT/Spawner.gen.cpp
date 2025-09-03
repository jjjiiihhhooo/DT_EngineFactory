// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EngineFactory/Spawner.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeSpawner() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINEFACTORY_API UClass* Z_Construct_UClass_AEngineParts_NoRegister();
ENGINEFACTORY_API UClass* Z_Construct_UClass_ASpawner();
ENGINEFACTORY_API UClass* Z_Construct_UClass_ASpawner_NoRegister();
UPackage* Z_Construct_UPackage__Script_EngineFactory();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ASpawner Function GetPartsByIndex ****************************************
struct Z_Construct_UFunction_ASpawner_GetPartsByIndex_Statics
{
	struct Spawner_eventGetPartsByIndex_Parms
	{
		int32 Index;
		AEngineParts* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pool" },
		{ "ModuleRelativePath", "Spawner.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASpawner_GetPartsByIndex_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Spawner_eventGetPartsByIndex_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASpawner_GetPartsByIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Spawner_eventGetPartsByIndex_Parms, ReturnValue), Z_Construct_UClass_AEngineParts_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASpawner_GetPartsByIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpawner_GetPartsByIndex_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpawner_GetPartsByIndex_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASpawner_GetPartsByIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASpawner_GetPartsByIndex_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASpawner, nullptr, "GetPartsByIndex", Z_Construct_UFunction_ASpawner_GetPartsByIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpawner_GetPartsByIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASpawner_GetPartsByIndex_Statics::Spawner_eventGetPartsByIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASpawner_GetPartsByIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASpawner_GetPartsByIndex_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ASpawner_GetPartsByIndex_Statics::Spawner_eventGetPartsByIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASpawner_GetPartsByIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASpawner_GetPartsByIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASpawner::execGetPartsByIndex)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AEngineParts**)Z_Param__Result=P_THIS->GetPartsByIndex(Z_Param_Index);
	P_NATIVE_END;
}
// ********** End Class ASpawner Function GetPartsByIndex ******************************************

// ********** Begin Class ASpawner Function ReturnParts ********************************************
struct Z_Construct_UFunction_ASpawner_ReturnParts_Statics
{
	struct Spawner_eventReturnParts_Parms
	{
		AEngineParts* Parts;
		int32 Index;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pool" },
		{ "ModuleRelativePath", "Spawner.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Parts;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASpawner_ReturnParts_Statics::NewProp_Parts = { "Parts", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Spawner_eventReturnParts_Parms, Parts), Z_Construct_UClass_AEngineParts_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASpawner_ReturnParts_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Spawner_eventReturnParts_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASpawner_ReturnParts_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpawner_ReturnParts_Statics::NewProp_Parts,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpawner_ReturnParts_Statics::NewProp_Index,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASpawner_ReturnParts_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASpawner_ReturnParts_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASpawner, nullptr, "ReturnParts", Z_Construct_UFunction_ASpawner_ReturnParts_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpawner_ReturnParts_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASpawner_ReturnParts_Statics::Spawner_eventReturnParts_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASpawner_ReturnParts_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASpawner_ReturnParts_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ASpawner_ReturnParts_Statics::Spawner_eventReturnParts_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASpawner_ReturnParts()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASpawner_ReturnParts_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASpawner::execReturnParts)
{
	P_GET_OBJECT(AEngineParts,Z_Param_Parts);
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ReturnParts(Z_Param_Parts,Z_Param_Index);
	P_NATIVE_END;
}
// ********** End Class ASpawner Function ReturnParts **********************************************

// ********** Begin Class ASpawner *****************************************************************
void ASpawner::StaticRegisterNativesASpawner()
{
	UClass* Class = ASpawner::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetPartsByIndex", &ASpawner::execGetPartsByIndex },
		{ "ReturnParts", &ASpawner::execReturnParts },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_ASpawner;
UClass* ASpawner::GetPrivateStaticClass()
{
	using TClass = ASpawner;
	if (!Z_Registration_Info_UClass_ASpawner.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("Spawner"),
			Z_Registration_Info_UClass_ASpawner.InnerSingleton,
			StaticRegisterNativesASpawner,
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
	return Z_Registration_Info_UClass_ASpawner.InnerSingleton;
}
UClass* Z_Construct_UClass_ASpawner_NoRegister()
{
	return ASpawner::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ASpawner_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Spawner.h" },
		{ "ModuleRelativePath", "Spawner.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AllPooledParts_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//GC\xea\xb0\x80 \xec\xb6\x94\xec\xa0\x81\xed\x95\xa0 \xec\x88\x98 \xec\x9e\x88\xeb\x8a\x94 \xec\x9a\xa9\xeb\x8f\x84\xeb\xa1\x9c \xec\x82\xac\xec\x9a\xa9\n" },
#endif
		{ "ModuleRelativePath", "Spawner.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "GC\xea\xb0\x80 \xec\xb6\x94\xec\xa0\x81\xed\x95\xa0 \xec\x88\x98 \xec\x9e\x88\xeb\x8a\x94 \xec\x9a\xa9\xeb\x8f\x84\xeb\xa1\x9c \xec\x82\xac\xec\x9a\xa9" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PartsClassArray_MetaData[] = {
		{ "Category", "Pool" },
		{ "ModuleRelativePath", "Spawner.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AllPooledParts_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_AllPooledParts;
	static const UECodeGen_Private::FClassPropertyParams NewProp_PartsClassArray_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PartsClassArray;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ASpawner_GetPartsByIndex, "GetPartsByIndex" }, // 405818723
		{ &Z_Construct_UFunction_ASpawner_ReturnParts, "ReturnParts" }, // 30894362
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASpawner>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASpawner_Statics::NewProp_AllPooledParts_ElementProp = { "AllPooledParts", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AEngineParts_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_ASpawner_Statics::NewProp_AllPooledParts = { "AllPooledParts", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpawner, AllPooledParts), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AllPooledParts_MetaData), NewProp_AllPooledParts_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASpawner_Statics::NewProp_PartsClassArray_Inner = { "PartsClassArray", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_AEngineParts_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASpawner_Statics::NewProp_PartsClassArray = { "PartsClassArray", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpawner, PartsClassArray), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PartsClassArray_MetaData), NewProp_PartsClassArray_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASpawner_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpawner_Statics::NewProp_AllPooledParts_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpawner_Statics::NewProp_AllPooledParts,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpawner_Statics::NewProp_PartsClassArray_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpawner_Statics::NewProp_PartsClassArray,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASpawner_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ASpawner_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_EngineFactory,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASpawner_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASpawner_Statics::ClassParams = {
	&ASpawner::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ASpawner_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ASpawner_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASpawner_Statics::Class_MetaDataParams), Z_Construct_UClass_ASpawner_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASpawner()
{
	if (!Z_Registration_Info_UClass_ASpawner.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASpawner.OuterSingleton, Z_Construct_UClass_ASpawner_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASpawner.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASpawner);
ASpawner::~ASpawner() {}
// ********** End Class ASpawner *******************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_JIHO_UE5_DT_EngineFactory_EngineFactory_Source_EngineFactory_Spawner_h__Script_EngineFactory_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASpawner, ASpawner::StaticClass, TEXT("ASpawner"), &Z_Registration_Info_UClass_ASpawner, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASpawner), 155160696U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_JIHO_UE5_DT_EngineFactory_EngineFactory_Source_EngineFactory_Spawner_h__Script_EngineFactory_1035237655(TEXT("/Script/EngineFactory"),
	Z_CompiledInDeferFile_FID_JIHO_UE5_DT_EngineFactory_EngineFactory_Source_EngineFactory_Spawner_h__Script_EngineFactory_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_JIHO_UE5_DT_EngineFactory_EngineFactory_Source_EngineFactory_Spawner_h__Script_EngineFactory_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
