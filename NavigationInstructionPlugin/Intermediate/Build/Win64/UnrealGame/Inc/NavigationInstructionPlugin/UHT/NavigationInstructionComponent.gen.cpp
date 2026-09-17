// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NavigationInstructionComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeNavigationInstructionComponent() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
NAVIGATIONINSTRUCTIONPLUGIN_API UClass* Z_Construct_UClass_UNavigationInstructionComponent();
NAVIGATIONINSTRUCTIONPLUGIN_API UClass* Z_Construct_UClass_UNavigationInstructionComponent_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystem_NoRegister();
UPackage* Z_Construct_UPackage__Script_NavigationInstructionPlugin();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UNavigationInstructionComponent Function StatNavigationInstruction *******
struct Z_Construct_UFunction_UNavigationInstructionComponent_StatNavigationInstruction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "NavigationInstructionComponent" },
		{ "ModuleRelativePath", "Public/NavigationInstructionComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function StatNavigationInstruction constinit property declarations *************
// ********** End Function StatNavigationInstruction constinit property declarations ***************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNavigationInstructionComponent_StatNavigationInstruction_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UNavigationInstructionComponent, nullptr, "StatNavigationInstruction", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNavigationInstructionComponent_StatNavigationInstruction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNavigationInstructionComponent_StatNavigationInstruction_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UNavigationInstructionComponent_StatNavigationInstruction()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNavigationInstructionComponent_StatNavigationInstruction_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNavigationInstructionComponent::execStatNavigationInstruction)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StatNavigationInstruction();
	P_NATIVE_END;
}
// ********** End Class UNavigationInstructionComponent Function StatNavigationInstruction *********

// ********** Begin Class UNavigationInstructionComponent ******************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UNavigationInstructionComponent;
UClass* UNavigationInstructionComponent::GetPrivateStaticClass()
{
	using TClass = UNavigationInstructionComponent;
	if (!Z_Registration_Info_UClass_UNavigationInstructionComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("NavigationInstructionComponent"),
			Z_Registration_Info_UClass_UNavigationInstructionComponent.InnerSingleton,
			StaticRegisterNativesUNavigationInstructionComponent,
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
	return Z_Registration_Info_UClass_UNavigationInstructionComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UNavigationInstructionComponent_NoRegister()
{
	return UNavigationInstructionComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UNavigationInstructionComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "NavigationInstructionComponent.h" },
		{ "ModuleRelativePath", "Public/NavigationInstructionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PathStart_MetaData[] = {
		{ "Category", "NavigationInstructionComponent" },
		{ "ModuleRelativePath", "Public/NavigationInstructionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PathEnd_MetaData[] = {
		{ "Category", "NavigationInstructionComponent" },
		{ "ModuleRelativePath", "Public/NavigationInstructionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Spacing_MetaData[] = {
		{ "Category", "NavigationInstructionComponent" },
		{ "ModuleRelativePath", "Public/NavigationInstructionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NiagaraFX_MetaData[] = {
		{ "Category", "NavigationInstructionComponent" },
		{ "ModuleRelativePath", "Public/NavigationInstructionComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UNavigationInstructionComponent constinit property declarations **********
	static const UECodeGen_Private::FStructPropertyParams NewProp_PathStart;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PathEnd;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Spacing;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NiagaraFX;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UNavigationInstructionComponent constinit property declarations ************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("StatNavigationInstruction"), .Pointer = &UNavigationInstructionComponent::execStatNavigationInstruction },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UNavigationInstructionComponent_StatNavigationInstruction, "StatNavigationInstruction" }, // 28374183
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNavigationInstructionComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UNavigationInstructionComponent_Statics

// ********** Begin Class UNavigationInstructionComponent Property Definitions *********************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNavigationInstructionComponent_Statics::NewProp_PathStart = { "PathStart", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNavigationInstructionComponent, PathStart), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PathStart_MetaData), NewProp_PathStart_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNavigationInstructionComponent_Statics::NewProp_PathEnd = { "PathEnd", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNavigationInstructionComponent, PathEnd), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PathEnd_MetaData), NewProp_PathEnd_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNavigationInstructionComponent_Statics::NewProp_Spacing = { "Spacing", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNavigationInstructionComponent, Spacing), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Spacing_MetaData), NewProp_Spacing_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNavigationInstructionComponent_Statics::NewProp_NiagaraFX = { "NiagaraFX", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNavigationInstructionComponent, NiagaraFX), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NiagaraFX_MetaData), NewProp_NiagaraFX_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNavigationInstructionComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavigationInstructionComponent_Statics::NewProp_PathStart,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavigationInstructionComponent_Statics::NewProp_PathEnd,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavigationInstructionComponent_Statics::NewProp_Spacing,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavigationInstructionComponent_Statics::NewProp_NiagaraFX,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNavigationInstructionComponent_Statics::PropPointers) < 2048);
// ********** End Class UNavigationInstructionComponent Property Definitions ***********************
UObject* (*const Z_Construct_UClass_UNavigationInstructionComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_NavigationInstructionPlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNavigationInstructionComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNavigationInstructionComponent_Statics::ClassParams = {
	&UNavigationInstructionComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UNavigationInstructionComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UNavigationInstructionComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNavigationInstructionComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UNavigationInstructionComponent_Statics::Class_MetaDataParams)
};
void UNavigationInstructionComponent::StaticRegisterNativesUNavigationInstructionComponent()
{
	UClass* Class = UNavigationInstructionComponent::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UNavigationInstructionComponent_Statics::Funcs));
}
UClass* Z_Construct_UClass_UNavigationInstructionComponent()
{
	if (!Z_Registration_Info_UClass_UNavigationInstructionComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNavigationInstructionComponent.OuterSingleton, Z_Construct_UClass_UNavigationInstructionComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNavigationInstructionComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UNavigationInstructionComponent);
UNavigationInstructionComponent::~UNavigationInstructionComponent() {}
// ********** End Class UNavigationInstructionComponent ********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_test_NavigationInstructionPlugin_HostProject_Plugins_NavigationInstructionPlugin_Source_NavigationInstructionPlugin_Public_NavigationInstructionComponent_h__Script_NavigationInstructionPlugin_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNavigationInstructionComponent, UNavigationInstructionComponent::StaticClass, TEXT("UNavigationInstructionComponent"), &Z_Registration_Info_UClass_UNavigationInstructionComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNavigationInstructionComponent), 2070435374U) },
	};
}; // Z_CompiledInDeferFile_FID_test_NavigationInstructionPlugin_HostProject_Plugins_NavigationInstructionPlugin_Source_NavigationInstructionPlugin_Public_NavigationInstructionComponent_h__Script_NavigationInstructionPlugin_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_test_NavigationInstructionPlugin_HostProject_Plugins_NavigationInstructionPlugin_Source_NavigationInstructionPlugin_Public_NavigationInstructionComponent_h__Script_NavigationInstructionPlugin_571185369{
	TEXT("/Script/NavigationInstructionPlugin"),
	Z_CompiledInDeferFile_FID_test_NavigationInstructionPlugin_HostProject_Plugins_NavigationInstructionPlugin_Source_NavigationInstructionPlugin_Public_NavigationInstructionComponent_h__Script_NavigationInstructionPlugin_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_test_NavigationInstructionPlugin_HostProject_Plugins_NavigationInstructionPlugin_Source_NavigationInstructionPlugin_Public_NavigationInstructionComponent_h__Script_NavigationInstructionPlugin_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
