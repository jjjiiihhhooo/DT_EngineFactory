// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EngineFactory/CheckTrigger.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCheckTrigger() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
ENGINEFACTORY_API UClass* Z_Construct_UClass_AMachine_NoRegister();
ENGINEFACTORY_API UClass* Z_Construct_UClass_UCheckTrigger();
ENGINEFACTORY_API UClass* Z_Construct_UClass_UCheckTrigger_NoRegister();
UPackage* Z_Construct_UPackage__Script_EngineFactory();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UCheckTrigger ************************************************************
void UCheckTrigger::StaticRegisterNativesUCheckTrigger()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UCheckTrigger;
UClass* UCheckTrigger::GetPrivateStaticClass()
{
	using TClass = UCheckTrigger;
	if (!Z_Registration_Info_UClass_UCheckTrigger.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CheckTrigger"),
			Z_Registration_Info_UClass_UCheckTrigger.InnerSingleton,
			StaticRegisterNativesUCheckTrigger,
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
	return Z_Registration_Info_UClass_UCheckTrigger.InnerSingleton;
}
UClass* Z_Construct_UClass_UCheckTrigger_NoRegister()
{
	return UCheckTrigger::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UCheckTrigger_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "CheckTrigger.h" },
		{ "ModuleRelativePath", "CheckTrigger.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TraceDistance_MetaData[] = {
		{ "Category", "Trigger" },
		{ "ModuleRelativePath", "CheckTrigger.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TraceStartOffset_MetaData[] = {
		{ "Category", "Trigger" },
		{ "ModuleRelativePath", "CheckTrigger.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDebugTrace_MetaData[] = {
		{ "Category", "Trigger" },
		{ "ModuleRelativePath", "CheckTrigger.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebugTraceColor_MetaData[] = {
		{ "Category", "Trigger" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xeb\x94\x94\xeb\xb2\x84\xea\xb7\xb8 \xed\x8a\xb8\xeb\xa0\x88\xec\x9d\xb4\xec\x8a\xa4 \xea\xb7\xb8\xeb\xa6\xb4\xec\xa7\x80\n" },
#endif
		{ "ModuleRelativePath", "CheckTrigger.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xeb\x94\x94\xeb\xb2\x84\xea\xb7\xb8 \xed\x8a\xb8\xeb\xa0\x88\xec\x9d\xb4\xec\x8a\xa4 \xea\xb7\xb8\xeb\xa6\xb4\xec\xa7\x80" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TraceChannel_MetaData[] = {
		{ "Category", "Trigger" },
		{ "ModuleRelativePath", "CheckTrigger.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Machine_MetaData[] = {
		{ "Category", "CheckTrigger" },
		{ "ModuleRelativePath", "CheckTrigger.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TraceDistance;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TraceStartOffset;
	static void NewProp_bDebugTrace_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDebugTrace;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DebugTraceColor;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TraceChannel;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Machine;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCheckTrigger>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCheckTrigger_Statics::NewProp_TraceDistance = { "TraceDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCheckTrigger, TraceDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TraceDistance_MetaData), NewProp_TraceDistance_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCheckTrigger_Statics::NewProp_TraceStartOffset = { "TraceStartOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCheckTrigger, TraceStartOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TraceStartOffset_MetaData), NewProp_TraceStartOffset_MetaData) };
void Z_Construct_UClass_UCheckTrigger_Statics::NewProp_bDebugTrace_SetBit(void* Obj)
{
	((UCheckTrigger*)Obj)->bDebugTrace = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCheckTrigger_Statics::NewProp_bDebugTrace = { "bDebugTrace", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCheckTrigger), &Z_Construct_UClass_UCheckTrigger_Statics::NewProp_bDebugTrace_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDebugTrace_MetaData), NewProp_bDebugTrace_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCheckTrigger_Statics::NewProp_DebugTraceColor = { "DebugTraceColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCheckTrigger, DebugTraceColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebugTraceColor_MetaData), NewProp_DebugTraceColor_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCheckTrigger_Statics::NewProp_TraceChannel = { "TraceChannel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCheckTrigger, TraceChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TraceChannel_MetaData), NewProp_TraceChannel_MetaData) }; // 756624936
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCheckTrigger_Statics::NewProp_Machine = { "Machine", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCheckTrigger, Machine), Z_Construct_UClass_AMachine_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Machine_MetaData), NewProp_Machine_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCheckTrigger_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCheckTrigger_Statics::NewProp_TraceDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCheckTrigger_Statics::NewProp_TraceStartOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCheckTrigger_Statics::NewProp_bDebugTrace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCheckTrigger_Statics::NewProp_DebugTraceColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCheckTrigger_Statics::NewProp_TraceChannel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCheckTrigger_Statics::NewProp_Machine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCheckTrigger_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCheckTrigger_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_EngineFactory,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCheckTrigger_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCheckTrigger_Statics::ClassParams = {
	&UCheckTrigger::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UCheckTrigger_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UCheckTrigger_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCheckTrigger_Statics::Class_MetaDataParams), Z_Construct_UClass_UCheckTrigger_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCheckTrigger()
{
	if (!Z_Registration_Info_UClass_UCheckTrigger.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCheckTrigger.OuterSingleton, Z_Construct_UClass_UCheckTrigger_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCheckTrigger.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCheckTrigger);
UCheckTrigger::~UCheckTrigger() {}
// ********** End Class UCheckTrigger **************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_JIHO_UE5_DT_EngineFactory_EngineFactory_Source_EngineFactory_CheckTrigger_h__Script_EngineFactory_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCheckTrigger, UCheckTrigger::StaticClass, TEXT("UCheckTrigger"), &Z_Registration_Info_UClass_UCheckTrigger, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCheckTrigger), 790198481U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_JIHO_UE5_DT_EngineFactory_EngineFactory_Source_EngineFactory_CheckTrigger_h__Script_EngineFactory_3478915681(TEXT("/Script/EngineFactory"),
	Z_CompiledInDeferFile_FID_JIHO_UE5_DT_EngineFactory_EngineFactory_Source_EngineFactory_CheckTrigger_h__Script_EngineFactory_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_JIHO_UE5_DT_EngineFactory_EngineFactory_Source_EngineFactory_CheckTrigger_h__Script_EngineFactory_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
