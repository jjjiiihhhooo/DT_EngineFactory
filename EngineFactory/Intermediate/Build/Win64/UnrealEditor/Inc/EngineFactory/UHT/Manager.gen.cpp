// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EngineFactory/Manager.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeManager() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_ACameraActor_NoRegister();
ENGINEFACTORY_API UClass* Z_Construct_UClass_AManager();
ENGINEFACTORY_API UClass* Z_Construct_UClass_AManager_NoRegister();
UPackage* Z_Construct_UPackage__Script_EngineFactory();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AManager Function AddCountByIndex ****************************************
struct Z_Construct_UFunction_AManager_AddCountByIndex_Statics
{
	struct Manager_eventAddCountByIndex_Parms
	{
		int32 Index;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Count" },
		{ "ModuleRelativePath", "Manager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AManager_AddCountByIndex_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Manager_eventAddCountByIndex_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AManager_AddCountByIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AManager_AddCountByIndex_Statics::NewProp_Index,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AManager_AddCountByIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AManager_AddCountByIndex_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AManager, nullptr, "AddCountByIndex", Z_Construct_UFunction_AManager_AddCountByIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AManager_AddCountByIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_AManager_AddCountByIndex_Statics::Manager_eventAddCountByIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AManager_AddCountByIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_AManager_AddCountByIndex_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AManager_AddCountByIndex_Statics::Manager_eventAddCountByIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AManager_AddCountByIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AManager_AddCountByIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AManager::execAddCountByIndex)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddCountByIndex(Z_Param_Index);
	P_NATIVE_END;
}
// ********** End Class AManager Function AddCountByIndex ******************************************

// ********** Begin Class AManager Function ChangeCamera *******************************************
struct Z_Construct_UFunction_AManager_ChangeCamera_Statics
{
	struct Manager_eventChangeCamera_Parms
	{
		int32 CameraIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Manager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_CameraIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AManager_ChangeCamera_Statics::NewProp_CameraIndex = { "CameraIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Manager_eventChangeCamera_Parms, CameraIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AManager_ChangeCamera_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AManager_ChangeCamera_Statics::NewProp_CameraIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AManager_ChangeCamera_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AManager_ChangeCamera_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AManager, nullptr, "ChangeCamera", Z_Construct_UFunction_AManager_ChangeCamera_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AManager_ChangeCamera_Statics::PropPointers), sizeof(Z_Construct_UFunction_AManager_ChangeCamera_Statics::Manager_eventChangeCamera_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AManager_ChangeCamera_Statics::Function_MetaDataParams), Z_Construct_UFunction_AManager_ChangeCamera_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AManager_ChangeCamera_Statics::Manager_eventChangeCamera_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AManager_ChangeCamera()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AManager_ChangeCamera_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AManager::execChangeCamera)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_CameraIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ChangeCamera(Z_Param_CameraIndex);
	P_NATIVE_END;
}
// ********** End Class AManager Function ChangeCamera *********************************************

// ********** Begin Class AManager Function GetCountByIndex ****************************************
struct Z_Construct_UFunction_AManager_GetCountByIndex_Statics
{
	struct Manager_eventGetCountByIndex_Parms
	{
		int32 Index;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Count" },
		{ "ModuleRelativePath", "Manager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AManager_GetCountByIndex_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Manager_eventGetCountByIndex_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AManager_GetCountByIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Manager_eventGetCountByIndex_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AManager_GetCountByIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AManager_GetCountByIndex_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AManager_GetCountByIndex_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AManager_GetCountByIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AManager_GetCountByIndex_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AManager, nullptr, "GetCountByIndex", Z_Construct_UFunction_AManager_GetCountByIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AManager_GetCountByIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_AManager_GetCountByIndex_Statics::Manager_eventGetCountByIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AManager_GetCountByIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_AManager_GetCountByIndex_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AManager_GetCountByIndex_Statics::Manager_eventGetCountByIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AManager_GetCountByIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AManager_GetCountByIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AManager::execGetCountByIndex)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetCountByIndex(Z_Param_Index);
	P_NATIVE_END;
}
// ********** End Class AManager Function GetCountByIndex ******************************************

// ********** Begin Class AManager *****************************************************************
void AManager::StaticRegisterNativesAManager()
{
	UClass* Class = AManager::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddCountByIndex", &AManager::execAddCountByIndex },
		{ "ChangeCamera", &AManager::execChangeCamera },
		{ "GetCountByIndex", &AManager::execGetCountByIndex },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_AManager;
UClass* AManager::GetPrivateStaticClass()
{
	using TClass = AManager;
	if (!Z_Registration_Info_UClass_AManager.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("Manager"),
			Z_Registration_Info_UClass_AManager.InnerSingleton,
			StaticRegisterNativesAManager,
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
	return Z_Registration_Info_UClass_AManager.InnerSingleton;
}
UClass* Z_Construct_UClass_AManager_NoRegister()
{
	return AManager::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Manager.h" },
		{ "ModuleRelativePath", "Manager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CountArray_MetaData[] = {
		{ "Category", "Count" },
		{ "ModuleRelativePath", "Manager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Cameras_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Manager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraBlendTime_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Manager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_CountArray_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CountArray;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Cameras_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Cameras;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CameraBlendTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AManager_AddCountByIndex, "AddCountByIndex" }, // 1741322477
		{ &Z_Construct_UFunction_AManager_ChangeCamera, "ChangeCamera" }, // 4255494325
		{ &Z_Construct_UFunction_AManager_GetCountByIndex, "GetCountByIndex" }, // 885818139
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AManager_Statics::NewProp_CountArray_Inner = { "CountArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AManager_Statics::NewProp_CountArray = { "CountArray", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AManager, CountArray), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CountArray_MetaData), NewProp_CountArray_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AManager_Statics::NewProp_Cameras_Inner = { "Cameras", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ACameraActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AManager_Statics::NewProp_Cameras = { "Cameras", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AManager, Cameras), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Cameras_MetaData), NewProp_Cameras_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AManager_Statics::NewProp_CameraBlendTime = { "CameraBlendTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AManager, CameraBlendTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraBlendTime_MetaData), NewProp_CameraBlendTime_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AManager_Statics::NewProp_CountArray_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AManager_Statics::NewProp_CountArray,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AManager_Statics::NewProp_Cameras_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AManager_Statics::NewProp_Cameras,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AManager_Statics::NewProp_CameraBlendTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AManager_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_EngineFactory,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AManager_Statics::ClassParams = {
	&AManager::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AManager_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AManager_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AManager_Statics::Class_MetaDataParams), Z_Construct_UClass_AManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AManager()
{
	if (!Z_Registration_Info_UClass_AManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AManager.OuterSingleton, Z_Construct_UClass_AManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AManager.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AManager);
AManager::~AManager() {}
// ********** End Class AManager *******************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_JIHO_UE5_DT_EngineFactory_EngineFactory_Source_EngineFactory_Manager_h__Script_EngineFactory_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AManager, AManager::StaticClass, TEXT("AManager"), &Z_Registration_Info_UClass_AManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AManager), 2631223246U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_JIHO_UE5_DT_EngineFactory_EngineFactory_Source_EngineFactory_Manager_h__Script_EngineFactory_462177630(TEXT("/Script/EngineFactory"),
	Z_CompiledInDeferFile_FID_JIHO_UE5_DT_EngineFactory_EngineFactory_Source_EngineFactory_Manager_h__Script_EngineFactory_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_JIHO_UE5_DT_EngineFactory_EngineFactory_Source_EngineFactory_Manager_h__Script_EngineFactory_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
