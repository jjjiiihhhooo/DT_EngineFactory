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
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
ENGINEFACTORY_API UClass* Z_Construct_UClass_AFactoryGameMode();
ENGINEFACTORY_API UClass* Z_Construct_UClass_AFactoryGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_EngineFactory();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AFactoryGameMode *********************************************************
void AFactoryGameMode::StaticRegisterNativesAFactoryGameMode()
{
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
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFactoryGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
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
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
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
		{ Z_Construct_UClass_AFactoryGameMode, AFactoryGameMode::StaticClass, TEXT("AFactoryGameMode"), &Z_Registration_Info_UClass_AFactoryGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFactoryGameMode), 1192898071U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_JIHO_UE5_DT_EngineFactory_EngineFactory_Source_EngineFactory_FactoryGameMode_h__Script_EngineFactory_2569147613(TEXT("/Script/EngineFactory"),
	Z_CompiledInDeferFile_FID_JIHO_UE5_DT_EngineFactory_EngineFactory_Source_EngineFactory_FactoryGameMode_h__Script_EngineFactory_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_JIHO_UE5_DT_EngineFactory_EngineFactory_Source_EngineFactory_FactoryGameMode_h__Script_EngineFactory_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
