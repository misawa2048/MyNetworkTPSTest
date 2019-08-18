// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyNetworkTPSTest/Private/MyNetworkGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyNetworkGameModeBase() {}
// Cross Module References
	MYNETWORKTPSTEST_API UClass* Z_Construct_UClass_AMyNetworkGameModeBase_NoRegister();
	MYNETWORKTPSTEST_API UClass* Z_Construct_UClass_AMyNetworkGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_MyNetworkTPSTest();
	MYNETWORKTPSTEST_API UFunction* Z_Construct_UFunction_AMyNetworkGameModeBase_SetWindowedResolution();
// End Cross Module References
	void AMyNetworkGameModeBase::StaticRegisterNativesAMyNetworkGameModeBase()
	{
		UClass* Class = AMyNetworkGameModeBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetWindowedResolution", &AMyNetworkGameModeBase::execSetWindowedResolution },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMyNetworkGameModeBase_SetWindowedResolution_Statics
	{
		struct MyNetworkGameModeBase_eventSetWindowedResolution_Parms
		{
			int32 _x;
			int32 _y;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp__y;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp__x;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AMyNetworkGameModeBase_SetWindowedResolution_Statics::NewProp__y = { "_y", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyNetworkGameModeBase_eventSetWindowedResolution_Parms, _y), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AMyNetworkGameModeBase_SetWindowedResolution_Statics::NewProp__x = { "_x", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyNetworkGameModeBase_eventSetWindowedResolution_Parms, _x), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyNetworkGameModeBase_SetWindowedResolution_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyNetworkGameModeBase_SetWindowedResolution_Statics::NewProp__y,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyNetworkGameModeBase_SetWindowedResolution_Statics::NewProp__x,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyNetworkGameModeBase_SetWindowedResolution_Statics::Function_MetaDataParams[] = {
		{ "Category", "MyTest" },
		{ "CPP_Default__x", "640" },
		{ "CPP_Default__y", "400" },
		{ "ModuleRelativePath", "Private/MyNetworkGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyNetworkGameModeBase_SetWindowedResolution_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyNetworkGameModeBase, nullptr, "SetWindowedResolution", sizeof(MyNetworkGameModeBase_eventSetWindowedResolution_Parms), Z_Construct_UFunction_AMyNetworkGameModeBase_SetWindowedResolution_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMyNetworkGameModeBase_SetWindowedResolution_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyNetworkGameModeBase_SetWindowedResolution_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMyNetworkGameModeBase_SetWindowedResolution_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyNetworkGameModeBase_SetWindowedResolution()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyNetworkGameModeBase_SetWindowedResolution_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AMyNetworkGameModeBase_NoRegister()
	{
		return AMyNetworkGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AMyNetworkGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyNetworkGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MyNetworkTPSTest,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMyNetworkGameModeBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMyNetworkGameModeBase_SetWindowedResolution, "SetWindowedResolution" }, // 3032032505
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyNetworkGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "MyNetworkGameModeBase.h" },
		{ "ModuleRelativePath", "Private/MyNetworkGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyNetworkGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyNetworkGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMyNetworkGameModeBase_Statics::ClassParams = {
		&AMyNetworkGameModeBase::StaticClass,
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
		0x008002A8u,
		METADATA_PARAMS(Z_Construct_UClass_AMyNetworkGameModeBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AMyNetworkGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMyNetworkGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMyNetworkGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMyNetworkGameModeBase, 2339758976);
	template<> MYNETWORKTPSTEST_API UClass* StaticClass<AMyNetworkGameModeBase>()
	{
		return AMyNetworkGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMyNetworkGameModeBase(Z_Construct_UClass_AMyNetworkGameModeBase, &AMyNetworkGameModeBase::StaticClass, TEXT("/Script/MyNetworkTPSTest"), TEXT("AMyNetworkGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyNetworkGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
