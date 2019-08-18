// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyNetworkTPSTest/Private/MyLevelScriptActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyLevelScriptActor() {}
// Cross Module References
	MYNETWORKTPSTEST_API UClass* Z_Construct_UClass_AMyLevelScriptActor_NoRegister();
	MYNETWORKTPSTEST_API UClass* Z_Construct_UClass_AMyLevelScriptActor();
	ENGINE_API UClass* Z_Construct_UClass_ALevelScriptActor();
	UPackage* Z_Construct_UPackage__Script_MyNetworkTPSTest();
	MYNETWORKTPSTEST_API UFunction* Z_Construct_UFunction_AMyLevelScriptActor_Destiny();
	MYNETWORKTPSTEST_API UFunction* Z_Construct_UFunction_AMyLevelScriptActor_SetWindowedResolution();
// End Cross Module References
	void AMyLevelScriptActor::StaticRegisterNativesAMyLevelScriptActor()
	{
		UClass* Class = AMyLevelScriptActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Destiny", &AMyLevelScriptActor::execDestiny },
			{ "SetWindowedResolution", &AMyLevelScriptActor::execSetWindowedResolution },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMyLevelScriptActor_Destiny_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyLevelScriptActor_Destiny_Statics::Function_MetaDataParams[] = {
		{ "Category", "MyTest" },
		{ "ModuleRelativePath", "Private/MyLevelScriptActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyLevelScriptActor_Destiny_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyLevelScriptActor, nullptr, "Destiny", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyLevelScriptActor_Destiny_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMyLevelScriptActor_Destiny_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyLevelScriptActor_Destiny()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyLevelScriptActor_Destiny_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyLevelScriptActor_SetWindowedResolution_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyLevelScriptActor_SetWindowedResolution_Statics::Function_MetaDataParams[] = {
		{ "Category", "MyTest" },
		{ "ModuleRelativePath", "Private/MyLevelScriptActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyLevelScriptActor_SetWindowedResolution_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyLevelScriptActor, nullptr, "SetWindowedResolution", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyLevelScriptActor_SetWindowedResolution_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMyLevelScriptActor_SetWindowedResolution_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyLevelScriptActor_SetWindowedResolution()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyLevelScriptActor_SetWindowedResolution_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AMyLevelScriptActor_NoRegister()
	{
		return AMyLevelScriptActor::StaticClass();
	}
	struct Z_Construct_UClass_AMyLevelScriptActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyLevelScriptActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ALevelScriptActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MyNetworkTPSTest,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMyLevelScriptActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMyLevelScriptActor_Destiny, "Destiny" }, // 3485910645
		{ &Z_Construct_UFunction_AMyLevelScriptActor_SetWindowedResolution, "SetWindowedResolution" }, // 3582414826
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyLevelScriptActor_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "MyLevelScriptActor.h" },
		{ "ModuleRelativePath", "Private/MyLevelScriptActor.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyLevelScriptActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyLevelScriptActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMyLevelScriptActor_Statics::ClassParams = {
		&AMyLevelScriptActor::StaticClass,
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
		0x008002A0u,
		METADATA_PARAMS(Z_Construct_UClass_AMyLevelScriptActor_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AMyLevelScriptActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMyLevelScriptActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMyLevelScriptActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMyLevelScriptActor, 3684552058);
	template<> MYNETWORKTPSTEST_API UClass* StaticClass<AMyLevelScriptActor>()
	{
		return AMyLevelScriptActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMyLevelScriptActor(Z_Construct_UClass_AMyLevelScriptActor, &AMyLevelScriptActor::StaticClass, TEXT("/Script/MyNetworkTPSTest"), TEXT("AMyLevelScriptActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyLevelScriptActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
