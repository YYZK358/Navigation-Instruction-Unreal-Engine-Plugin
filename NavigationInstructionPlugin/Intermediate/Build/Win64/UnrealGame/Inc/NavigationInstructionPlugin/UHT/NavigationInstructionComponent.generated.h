// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NavigationInstructionComponent.h"

#ifdef NAVIGATIONINSTRUCTIONPLUGIN_NavigationInstructionComponent_generated_h
#error "NavigationInstructionComponent.generated.h already included, missing '#pragma once' in NavigationInstructionComponent.h"
#endif
#define NAVIGATIONINSTRUCTIONPLUGIN_NavigationInstructionComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UNavigationInstructionComponent ******************************************
#define FID_test_NavigationInstructionPlugin_HostProject_Plugins_NavigationInstructionPlugin_Source_NavigationInstructionPlugin_Public_NavigationInstructionComponent_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execStatNavigationInstruction);


struct Z_Construct_UClass_UNavigationInstructionComponent_Statics;
NAVIGATIONINSTRUCTIONPLUGIN_API UClass* Z_Construct_UClass_UNavigationInstructionComponent_NoRegister();

#define FID_test_NavigationInstructionPlugin_HostProject_Plugins_NavigationInstructionPlugin_Source_NavigationInstructionPlugin_Public_NavigationInstructionComponent_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNavigationInstructionComponent(); \
	friend struct ::Z_Construct_UClass_UNavigationInstructionComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NAVIGATIONINSTRUCTIONPLUGIN_API UClass* ::Z_Construct_UClass_UNavigationInstructionComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UNavigationInstructionComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NavigationInstructionPlugin"), Z_Construct_UClass_UNavigationInstructionComponent_NoRegister) \
	DECLARE_SERIALIZER(UNavigationInstructionComponent)


#define FID_test_NavigationInstructionPlugin_HostProject_Plugins_NavigationInstructionPlugin_Source_NavigationInstructionPlugin_Public_NavigationInstructionComponent_h_18_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNavigationInstructionComponent(UNavigationInstructionComponent&&) = delete; \
	UNavigationInstructionComponent(const UNavigationInstructionComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNavigationInstructionComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNavigationInstructionComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UNavigationInstructionComponent) \
	NO_API virtual ~UNavigationInstructionComponent();


#define FID_test_NavigationInstructionPlugin_HostProject_Plugins_NavigationInstructionPlugin_Source_NavigationInstructionPlugin_Public_NavigationInstructionComponent_h_15_PROLOG
#define FID_test_NavigationInstructionPlugin_HostProject_Plugins_NavigationInstructionPlugin_Source_NavigationInstructionPlugin_Public_NavigationInstructionComponent_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_test_NavigationInstructionPlugin_HostProject_Plugins_NavigationInstructionPlugin_Source_NavigationInstructionPlugin_Public_NavigationInstructionComponent_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_test_NavigationInstructionPlugin_HostProject_Plugins_NavigationInstructionPlugin_Source_NavigationInstructionPlugin_Public_NavigationInstructionComponent_h_18_INCLASS_NO_PURE_DECLS \
	FID_test_NavigationInstructionPlugin_HostProject_Plugins_NavigationInstructionPlugin_Source_NavigationInstructionPlugin_Public_NavigationInstructionComponent_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNavigationInstructionComponent;

// ********** End Class UNavigationInstructionComponent ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_test_NavigationInstructionPlugin_HostProject_Plugins_NavigationInstructionPlugin_Source_NavigationInstructionPlugin_Public_NavigationInstructionComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
