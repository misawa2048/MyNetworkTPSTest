// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MYNETWORKTPSTEST_MyNetworkGameModeBase_generated_h
#error "MyNetworkGameModeBase.generated.h already included, missing '#pragma once' in MyNetworkGameModeBase.h"
#endif
#define MYNETWORKTPSTEST_MyNetworkGameModeBase_generated_h

#define MyNetworkTPSTest_Source_MyNetworkTPSTest_Private_MyNetworkGameModeBase_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetWindowedResolution) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param__x); \
		P_GET_PROPERTY(UIntProperty,Z_Param__y); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetWindowedResolution(Z_Param__x,Z_Param__y); \
		P_NATIVE_END; \
	}


#define MyNetworkTPSTest_Source_MyNetworkTPSTest_Private_MyNetworkGameModeBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetWindowedResolution) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param__x); \
		P_GET_PROPERTY(UIntProperty,Z_Param__y); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetWindowedResolution(Z_Param__x,Z_Param__y); \
		P_NATIVE_END; \
	}


#define MyNetworkTPSTest_Source_MyNetworkTPSTest_Private_MyNetworkGameModeBase_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyNetworkGameModeBase(); \
	friend struct Z_Construct_UClass_AMyNetworkGameModeBase_Statics; \
public: \
	DECLARE_CLASS(AMyNetworkGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/MyNetworkTPSTest"), NO_API) \
	DECLARE_SERIALIZER(AMyNetworkGameModeBase)


#define MyNetworkTPSTest_Source_MyNetworkTPSTest_Private_MyNetworkGameModeBase_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAMyNetworkGameModeBase(); \
	friend struct Z_Construct_UClass_AMyNetworkGameModeBase_Statics; \
public: \
	DECLARE_CLASS(AMyNetworkGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/MyNetworkTPSTest"), NO_API) \
	DECLARE_SERIALIZER(AMyNetworkGameModeBase)


#define MyNetworkTPSTest_Source_MyNetworkTPSTest_Private_MyNetworkGameModeBase_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyNetworkGameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyNetworkGameModeBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyNetworkGameModeBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyNetworkGameModeBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyNetworkGameModeBase(AMyNetworkGameModeBase&&); \
	NO_API AMyNetworkGameModeBase(const AMyNetworkGameModeBase&); \
public:


#define MyNetworkTPSTest_Source_MyNetworkTPSTest_Private_MyNetworkGameModeBase_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyNetworkGameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyNetworkGameModeBase(AMyNetworkGameModeBase&&); \
	NO_API AMyNetworkGameModeBase(const AMyNetworkGameModeBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyNetworkGameModeBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyNetworkGameModeBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyNetworkGameModeBase)


#define MyNetworkTPSTest_Source_MyNetworkTPSTest_Private_MyNetworkGameModeBase_h_15_PRIVATE_PROPERTY_OFFSET
#define MyNetworkTPSTest_Source_MyNetworkTPSTest_Private_MyNetworkGameModeBase_h_12_PROLOG
#define MyNetworkTPSTest_Source_MyNetworkTPSTest_Private_MyNetworkGameModeBase_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyNetworkTPSTest_Source_MyNetworkTPSTest_Private_MyNetworkGameModeBase_h_15_PRIVATE_PROPERTY_OFFSET \
	MyNetworkTPSTest_Source_MyNetworkTPSTest_Private_MyNetworkGameModeBase_h_15_RPC_WRAPPERS \
	MyNetworkTPSTest_Source_MyNetworkTPSTest_Private_MyNetworkGameModeBase_h_15_INCLASS \
	MyNetworkTPSTest_Source_MyNetworkTPSTest_Private_MyNetworkGameModeBase_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyNetworkTPSTest_Source_MyNetworkTPSTest_Private_MyNetworkGameModeBase_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyNetworkTPSTest_Source_MyNetworkTPSTest_Private_MyNetworkGameModeBase_h_15_PRIVATE_PROPERTY_OFFSET \
	MyNetworkTPSTest_Source_MyNetworkTPSTest_Private_MyNetworkGameModeBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	MyNetworkTPSTest_Source_MyNetworkTPSTest_Private_MyNetworkGameModeBase_h_15_INCLASS_NO_PURE_DECLS \
	MyNetworkTPSTest_Source_MyNetworkTPSTest_Private_MyNetworkGameModeBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYNETWORKTPSTEST_API UClass* StaticClass<class AMyNetworkGameModeBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyNetworkTPSTest_Source_MyNetworkTPSTest_Private_MyNetworkGameModeBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
