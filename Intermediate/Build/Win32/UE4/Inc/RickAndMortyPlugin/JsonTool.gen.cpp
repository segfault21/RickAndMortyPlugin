// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RickAndMortyPlugin/Public/JsonTool.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeJsonTool() {}
// Cross Module References
	RICKANDMORTYPLUGIN_API UFunction* Z_Construct_UDelegateFunction_RickAndMortyPlugin_ResponseDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_RickAndMortyPlugin();
	RICKANDMORTYPLUGIN_API UClass* Z_Construct_UClass_UJsonTool_NoRegister();
	RICKANDMORTYPLUGIN_API UClass* Z_Construct_UClass_UJsonTool();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_RickAndMortyPlugin_ResponseDelegate__DelegateSignature_Statics
	{
		struct _Script_RickAndMortyPlugin_eventResponseDelegate_Parms
		{
			FString Data;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Data;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_RickAndMortyPlugin_ResponseDelegate__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_RickAndMortyPlugin_eventResponseDelegate_Parms, Data), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_RickAndMortyPlugin_ResponseDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RickAndMortyPlugin_ResponseDelegate__DelegateSignature_Statics::NewProp_Data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_RickAndMortyPlugin_ResponseDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/JsonTool.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_RickAndMortyPlugin_ResponseDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_RickAndMortyPlugin, nullptr, "ResponseDelegate__DelegateSignature", nullptr, nullptr, sizeof(_Script_RickAndMortyPlugin_eventResponseDelegate_Parms), Z_Construct_UDelegateFunction_RickAndMortyPlugin_ResponseDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RickAndMortyPlugin_ResponseDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_RickAndMortyPlugin_ResponseDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RickAndMortyPlugin_ResponseDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_RickAndMortyPlugin_ResponseDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_RickAndMortyPlugin_ResponseDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UJsonTool::execCreate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UJsonTool**)Z_Param__Result=UJsonTool::Create();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UJsonTool::execGetRequest)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UJsonTool**)Z_Param__Result=UJsonTool::GetRequest();
		P_NATIVE_END;
	}
	void UJsonTool::StaticRegisterNativesUJsonTool()
	{
		UClass* Class = UJsonTool::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Create", &UJsonTool::execCreate },
			{ "GetRequest", &UJsonTool::execGetRequest },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UJsonTool_Create_Statics
	{
		struct JsonTool_eventCreate_Parms
		{
			UJsonTool* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UJsonTool_Create_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JsonTool_eventCreate_Parms, ReturnValue), Z_Construct_UClass_UJsonTool_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJsonTool_Create_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonTool_Create_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonTool_Create_Statics::Function_MetaDataParams[] = {
		{ "Category", "JSON" },
		{ "ModuleRelativePath", "Public/JsonTool.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UJsonTool_Create_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJsonTool, nullptr, "Create", nullptr, nullptr, sizeof(JsonTool_eventCreate_Parms), Z_Construct_UFunction_UJsonTool_Create_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonTool_Create_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJsonTool_Create_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonTool_Create_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJsonTool_Create()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UJsonTool_Create_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJsonTool_GetRequest_Statics
	{
		struct JsonTool_eventGetRequest_Parms
		{
			UJsonTool* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UJsonTool_GetRequest_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JsonTool_eventGetRequest_Parms, ReturnValue), Z_Construct_UClass_UJsonTool_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJsonTool_GetRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonTool_GetRequest_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonTool_GetRequest_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "JSON" },
		{ "ModuleRelativePath", "Public/JsonTool.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UJsonTool_GetRequest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJsonTool, nullptr, "GetRequest", nullptr, nullptr, sizeof(JsonTool_eventGetRequest_Parms), Z_Construct_UFunction_UJsonTool_GetRequest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonTool_GetRequest_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJsonTool_GetRequest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonTool_GetRequest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJsonTool_GetRequest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UJsonTool_GetRequest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UJsonTool_NoRegister()
	{
		return UJsonTool::StaticClass();
	}
	struct Z_Construct_UClass_UJsonTool_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSuccess;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnFail_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFail;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UJsonTool_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_RickAndMortyPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UJsonTool_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UJsonTool_Create, "Create" }, // 3562493631
		{ &Z_Construct_UFunction_UJsonTool_GetRequest, "GetRequest" }, // 3500668702
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UJsonTool_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "JSON" },
		{ "IncludePath", "JsonTool.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/JsonTool.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UJsonTool_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "Category", "JSON" },
		{ "ModuleRelativePath", "Public/JsonTool.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UJsonTool_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UJsonTool, OnSuccess), Z_Construct_UDelegateFunction_RickAndMortyPlugin_ResponseDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UJsonTool_Statics::NewProp_OnSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UJsonTool_Statics::NewProp_OnSuccess_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UJsonTool_Statics::NewProp_OnFail_MetaData[] = {
		{ "Category", "JSON" },
		{ "ModuleRelativePath", "Public/JsonTool.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UJsonTool_Statics::NewProp_OnFail = { "OnFail", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UJsonTool, OnFail), Z_Construct_UDelegateFunction_RickAndMortyPlugin_ResponseDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UJsonTool_Statics::NewProp_OnFail_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UJsonTool_Statics::NewProp_OnFail_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UJsonTool_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJsonTool_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJsonTool_Statics::NewProp_OnFail,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UJsonTool_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UJsonTool>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UJsonTool_Statics::ClassParams = {
		&UJsonTool::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UJsonTool_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UJsonTool_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UJsonTool_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UJsonTool_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UJsonTool()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UJsonTool_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UJsonTool, 2967511894);
	template<> RICKANDMORTYPLUGIN_API UClass* StaticClass<UJsonTool>()
	{
		return UJsonTool::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UJsonTool(Z_Construct_UClass_UJsonTool, &UJsonTool::StaticClass, TEXT("/Script/RickAndMortyPlugin"), TEXT("UJsonTool"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UJsonTool);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
