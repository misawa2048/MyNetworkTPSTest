// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MYNETWORKTPSTEST_MyLevelScriptActor_generated_h
#error "MyLevelScriptActor.generated.h already included, missing '#pragma once' in MyLevelScriptActor.h"
#endif
#define MYNETWORKTPSTEST_MyLevelScriptActor_generated_h

#define MyNetworkTPSTest_Source_MyNetworkTPSTest_Private_MyLevelScriptActor_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDestiny) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Destiny(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetWindowedResolution) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetWindowedResolution(); \
		P_NATIVE_END; \
	}


#define MyNetworkTPSTest_Source_MyNetworkTPSTest_Private_MyLevelScriptActor_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDestiny) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Destiny(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetWindowedResolution) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetWindowedResolution(); \
		P_NATIVE_END; \
	}


#define MyNetworkTPSTest_Source_MyNetworkTPSTest_Private_MyLevelScriptActor_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyLevelScriptActor(); \
	friend struct Z_Construct_UClass_AMyLevelScriptActor_Statics; \
public: \
	DECLARE_CLASS(AMyLevelScriptActor, ALevelScriptActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MyNetworkTPSTest"), NO_API) \
	DECLARE_SERIALIZER(AMyLevelScriptActor)


#define MyNetworkTPSTest_Source_MyNetworkTPSTest_Private_MyLevelScriptActor_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAMyLevelScriptActor(); \
	friend struct Z_Construct_UClass_AMyLevelScriptActor_Statics; \
public: \
	DECLARE_CLASS(AMyLevelScriptActor, ALevelScriptActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MyNetworkTPSTest"), NO_API) \
	DECLARE_SERIALIZER(AMyLevelScriptActor)


#define MyNetworkTPSTest_Source_MyNetworkTPSTest_Private_MyLevelScriptActor_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyLevelScriptActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyLevelScriptActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyLevelScriptActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyLevelScriptActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyLevelScriptActor(AMyLevelScriptActor&&); \
	NO_API AMyLevelScriptActor(const AMyLevelScriptActor&); \
public:


#define MyNetworkTPSTest_Source_MyNetworkTPSTest_Private_MyLevelScriptActor_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyLevelScriptActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyLevelScriptActor(AMyLevelScriptActor&&); \
	NO_API AMyLevelScriptActor(const AMyLevelScriptActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyLevelScriptActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyLevelScriptActor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyLevelScriptActor)


#define MyNetworkTPSTest_Source_MyNetworkTPSTest_Private_MyLevelScriptActor_h_15_PRIVATE_PROPERTY_OFFSET
#define MyNetworkTPSTest_Source_MyNetworkTPSTest_Private_MyLevelScriptActor_h_12_PROLOG
#define MyNetworkTPSTest_Source_MyNetworkTPSTest_Private_MyLevelScriptActor_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyNetworkTPSTest_Source_MyNetworkTPSTest_Private_MyLevelScriptActor_h_15_PRIVATE_PROPERTY_OFFSET \
	MyNetworkTPSTest_Source_MyNetworkTPSTest_Private_MyLevelScriptActor_h_15_RPC_WRAPPERS \
	MyNetworkTPSTest_Source_MyNetworkTPSTest_Private_MyLevelScriptActor_h_15_INCLASS \
	MyNetworkTPSTest_Source_MyNetworkTPSTest_Private_MyLevelScriptActor_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyNetworkTPSTest_Source_MyNetworkTPSTest_Private_MyLevelScriptActor_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyNetworkTPSTest_Source_MyNetworkTPSTest_Private_MyLevelScriptActor_h_15_PRIVATE_PROPERTY_OFFSET \
	MyNetworkTPSTest_Source_MyNetworkTPSTest_Private_MyLevelScriptActor_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	MyNetworkTPSTest_Source_MyNetworkTPSTest_Private_MyLevelScriptActor_h_15_INCLASS_NO_PURE_DECLS \
	MyNetworkTPSTest_Source_MyNetworkTPSTest_Private_MyLevelScriptActor_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYNETWORKTPSTEST_API UClass* StaticClass<class AMyLevelScriptActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyNetworkTPSTest_Source_MyNetworkTPSTest_Private_MyLevelScriptActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
