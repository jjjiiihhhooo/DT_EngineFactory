// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EngineFactory/ManagerComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeManagerComponent() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINEFACTORY_API UClass* Z_Construct_UClass_UManagerComponent();
ENGINEFACTORY_API UClass* Z_Construct_UClass_UManagerComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_EngineFactory();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UManagerComponent Function AddCountByIndex *******************************
struct Z_Construct_UFunction_UManagerComponent_AddCountByIndex_Statics
{
	struct ManagerComponent_eventAddCountByIndex_Parms
	{
		int32 Index;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Count" },
		{ "ModuleRelativePath", "ManagerComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UManagerComponent_AddCountByIndex_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ManagerComponent_eventAddCountByIndex_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManagerComponent_AddCountByIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManagerComponent_AddCountByIndex_Statics::NewProp_Index,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UManagerComponent_AddCountByIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UManagerComponent_AddCountByIndex_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UManagerComponent, nullptr, "AddCountByIndex", Z_Construct_UFunction_UManagerComponent_AddCountByIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManagerComponent_AddCountByIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_UManagerComponent_AddCountByIndex_Statics::ManagerComponent_eventAddCountByIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UManagerComponent_AddCountByIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UManagerComponent_AddCountByIndex_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UManagerComponent_AddCountByIndex_Statics::ManagerComponent_eventAddCountByIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UManagerComponent_AddCountByIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UManagerComponent_AddCountByIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UManagerComponent::execAddCountByIndex)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddCountByIndex(Z_Param_Index);
	P_NATIVE_END;
}
// ********** End Class UManagerComponent Function AddCountByIndex *********************************

// ********** Begin Class UManagerComponent Function GetCountByIndex *******************************
struct Z_Construct_UFunction_UManagerComponent_GetCountByIndex_Statics
{
	struct ManagerComponent_eventGetCountByIndex_Parms
	{
		int32 Index;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Count" },
		{ "ModuleRelativePath", "ManagerComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UManagerComponent_GetCountByIndex_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ManagerComponent_eventGetCountByIndex_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UManagerComponent_GetCountByIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ManagerComponent_eventGetCountByIndex_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManagerComponent_GetCountByIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManagerComponent_GetCountByIndex_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManagerComponent_GetCountByIndex_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UManagerComponent_GetCountByIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UManagerComponent_GetCountByIndex_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UManagerComponent, nullptr, "GetCountByIndex", Z_Construct_UFunction_UManagerComponent_GetCountByIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManagerComponent_GetCountByIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_UManagerComponent_GetCountByIndex_Statics::ManagerComponent_eventGetCountByIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UManagerComponent_GetCountByIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UManagerComponent_GetCountByIndex_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UManagerComponent_GetCountByIndex_Statics::ManagerComponent_eventGetCountByIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UManagerComponent_GetCountByIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UManagerComponent_GetCountByIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UManagerComponent::execGetCountByIndex)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetCountByIndex(Z_Param_Index);
	P_NATIVE_END;
}
// ********** End Class UManagerComponent Function GetCountByIndex *********************************

// ********** Begin Class UManagerComponent ********************************************************
void UManagerComponent::StaticRegisterNativesUManagerComponent()
{
	UClass* Class = UManagerComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddCountByIndex", &UManagerComponent::execAddCountByIndex },
		{ "GetCountByIndex", &UManagerComponent::execGetCountByIndex },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UManagerComponent;
UClass* UManagerComponent::GetPrivateStaticClass()
{
	using TClass = UManagerComponent;
	if (!Z_Registration_Info_UClass_UManagerComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ManagerComponent"),
			Z_Registration_Info_UClass_UManagerComponent.InnerSingleton,
			StaticRegisterNativesUManagerComponent,
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
	return Z_Registration_Info_UClass_UManagerComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UManagerComponent_NoRegister()
{
	return UManagerComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UManagerComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "ManagerComponent.h" },
		{ "ModuleRelativePath", "ManagerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CountArray_MetaData[] = {
		{ "Category", "Count" },
		{ "ModuleRelativePath", "ManagerComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_CountArray_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CountArray;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UManagerComponent_AddCountByIndex, "AddCountByIndex" }, // 3677887104
		{ &Z_Construct_UFunction_UManagerComponent_GetCountByIndex, "GetCountByIndex" }, // 2423696841
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UManagerComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UManagerComponent_Statics::NewProp_CountArray_Inner = { "CountArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UManagerComponent_Statics::NewProp_CountArray = { "CountArray", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UManagerComponent, CountArray), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CountArray_MetaData), NewProp_CountArray_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UManagerComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManagerComponent_Statics::NewProp_CountArray_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManagerComponent_Statics::NewProp_CountArray,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UManagerComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UManagerComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_EngineFactory,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UManagerComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UManagerComponent_Statics::ClassParams = {
	&UManagerComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UManagerComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UManagerComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UManagerComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UManagerComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UManagerComponent()
{
	if (!Z_Registration_Info_UClass_UManagerComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UManagerComponent.OuterSingleton, Z_Construct_UClass_UManagerComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UManagerComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UManagerComponent);
UManagerComponent::~UManagerComponent() {}
// ********** End Class UManagerComponent **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_JIHO_UE5_DT_EngineFactory_EngineFactory_Source_EngineFactory_ManagerComponent_h__Script_EngineFactory_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UManagerComponent, UManagerComponent::StaticClass, TEXT("UManagerComponent"), &Z_Registration_Info_UClass_UManagerComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UManagerComponent), 3631676020U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_JIHO_UE5_DT_EngineFactory_EngineFactory_Source_EngineFactory_ManagerComponent_h__Script_EngineFactory_1666712667(TEXT("/Script/EngineFactory"),
	Z_CompiledInDeferFile_FID_JIHO_UE5_DT_EngineFactory_EngineFactory_Source_EngineFactory_ManagerComponent_h__Script_EngineFactory_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_JIHO_UE5_DT_EngineFactory_EngineFactory_Source_EngineFactory_ManagerComponent_h__Script_EngineFactory_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
