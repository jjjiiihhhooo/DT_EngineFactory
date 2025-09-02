// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EngineFactory/FactoryGameMode.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeFactoryGameMode() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_ACameraActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
ENGINEFACTORY_API UClass* Z_Construct_UClass_AFactoryGameMode();
ENGINEFACTORY_API UClass* Z_Construct_UClass_AFactoryGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_EngineFactory();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AFactoryGameMode Function ChangeCamera ***********************************
struct Z_Construct_UFunction_AFactoryGameMode_ChangeCamera_Statics
{
	struct FactoryGameMode_eventChangeCamera_Parms
	{
		int32 CameraIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "FactoryGameMode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_CameraIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFactoryGameMode_ChangeCamera_Statics::NewProp_CameraIndex = { "CameraIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FactoryGameMode_eventChangeCamera_Parms, CameraIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFactoryGameMode_ChangeCamera_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFactoryGameMode_ChangeCamera_Statics::NewProp_CameraIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFactoryGameMode_ChangeCamera_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFactoryGameMode_ChangeCamera_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AFactoryGameMode, nullptr, "ChangeCamera", Z_Construct_UFunction_AFactoryGameMode_ChangeCamera_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFactoryGameMode_ChangeCamera_Statics::PropPointers), sizeof(Z_Construct_UFunction_AFactoryGameMode_ChangeCamera_Statics::FactoryGameMode_eventChangeCamera_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFactoryGameMode_ChangeCamera_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFactoryGameMode_ChangeCamera_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AFactoryGameMode_ChangeCamera_Statics::FactoryGameMode_eventChangeCamera_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AFactoryGameMode_ChangeCamera()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFactoryGameMode_ChangeCamera_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFactoryGameMode::execChangeCamera)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_CameraIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ChangeCamera(Z_Param_CameraIndex);
	P_NATIVE_END;
}
// ********** End Class AFactoryGameMode Function ChangeCamera *************************************

// ********** Begin Class AFactoryGameMode *********************************************************
void AFactoryGameMode::StaticRegisterNativesAFactoryGameMode()
{
	UClass* Class = AFactoryGameMode::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ChangeCamera", &AFactoryGameMode::execChangeCamera },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_AFactoryGameMode;
UClass* AFactoryGameMode::GetPrivateStaticClass()
{
	using TClass = AFactoryGameMode;
	if (!Z_Registration_Info_UClass_AFactoryGameMode.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("FactoryGameMode"),
			Z_Registration_Info_UClass_AFactoryGameMode.InnerSingleton,
			StaticRegisterNativesAFactoryGameMode,
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
	return Z_Registration_Info_UClass_AFactoryGameMode.InnerSingleton;
}
UClass* Z_Construct_UClass_AFactoryGameMode_NoRegister()
{
	return AFactoryGameMode::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AFactoryGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "FactoryGameMode.h" },
		{ "ModuleRelativePath", "FactoryGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Cameras_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "FactoryGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraBlendTime_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "FactoryGameMode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Cameras_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Cameras;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CameraBlendTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AFactoryGameMode_ChangeCamera, "ChangeCamera" }, // 3785637783
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFactoryGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFactoryGameMode_Statics::NewProp_Cameras_Inner = { "Cameras", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ACameraActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFactoryGameMode_Statics::NewProp_Cameras = { "Cameras", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFactoryGameMode, Cameras), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Cameras_MetaData), NewProp_Cameras_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFactoryGameMode_Statics::NewProp_CameraBlendTime = { "CameraBlendTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFactoryGameMode, CameraBlendTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraBlendTime_MetaData), NewProp_CameraBlendTime_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFactoryGameMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFactoryGameMode_Statics::NewProp_Cameras_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFactoryGameMode_Statics::NewProp_Cameras,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFactoryGameMode_Statics::NewProp_CameraBlendTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFactoryGameMode_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AFactoryGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_EngineFactory,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFactoryGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AFactoryGameMode_Statics::ClassParams = {
	&AFactoryGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AFactoryGameMode_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AFactoryGameMode_Statics::PropPointers),
	0,
	0x009003ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFactoryGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AFactoryGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AFactoryGameMode()
{
	if (!Z_Registration_Info_UClass_AFactoryGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFactoryGameMode.OuterSingleton, Z_Construct_UClass_AFactoryGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AFactoryGameMode.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AFactoryGameMode);
AFactoryGameMode::~AFactoryGameMode() {}
// ********** End Class AFactoryGameMode ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_JIHO_UE5_DT_EngineFactory_EngineFactory_Source_EngineFactory_FactoryGameMode_h__Script_EngineFactory_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AFactoryGameMode, AFactoryGameMode::StaticClass, TEXT("AFactoryGameMode"), &Z_Registration_Info_UClass_AFactoryGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFactoryGameMode), 631304036U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_JIHO_UE5_DT_EngineFactory_EngineFactory_Source_EngineFactory_FactoryGameMode_h__Script_EngineFactory_233292995(TEXT("/Script/EngineFactory"),
	Z_CompiledInDeferFile_FID_JIHO_UE5_DT_EngineFactory_EngineFactory_Source_EngineFactory_FactoryGameMode_h__Script_EngineFactory_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_JIHO_UE5_DT_EngineFactory_EngineFactory_Source_EngineFactory_FactoryGameMode_h__Script_EngineFactory_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
