// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyNetworkTPSTest/Private/MyTestActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyTestActor() {}
// Cross Module References
	MYNETWORKTPSTEST_API UClass* Z_Construct_UClass_AMyTestActor_NoRegister();
	MYNETWORKTPSTEST_API UClass* Z_Construct_UClass_AMyTestActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_MyNetworkTPSTest();
	MYNETWORKTPSTEST_API UFunction* Z_Construct_UFunction_AMyTestActor_SetMySettings();
// End Cross Module References
	void AMyTestActor::StaticRegisterNativesAMyTestActor()
	{
		UClass* Class = AMyTestActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetMySettings", &AMyTestActor::execSetMySettings },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMyTestActor_SetMySettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyTestActor_SetMySettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "MyTest" },
		{ "ModuleRelativePath", "Private/MyTestActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyTestActor_SetMySettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyTestActor, nullptr, "SetMySettings", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyTestActor_SetMySettings_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMyTestActor_SetMySettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyTestActor_SetMySettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyTestActor_SetMySettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AMyTestActor_NoRegister()
	{
		return AMyTestActor::StaticClass();
	}
	struct Z_Construct_UClass_AMyTestActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyTestActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MyNetworkTPSTest,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMyTestActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMyTestActor_SetMySettings, "SetMySettings" }, // 2187666895
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyTestActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MyTestActor.h" },
		{ "ModuleRelativePath", "Private/MyTestActor.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyTestActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyTestActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMyTestActor_Statics::ClassParams = {
		&AMyTestActor::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AMyTestActor_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AMyTestActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMyTestActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMyTestActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMyTestActor, 3525313676);
	template<> MYNETWORKTPSTEST_API UClass* StaticClass<AMyTestActor>()
	{
		return AMyTestActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMyTestActor(Z_Construct_UClass_AMyTestActor, &AMyTestActor::StaticClass, TEXT("/Script/MyNetworkTPSTest"), TEXT("AMyTestActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyTestActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
