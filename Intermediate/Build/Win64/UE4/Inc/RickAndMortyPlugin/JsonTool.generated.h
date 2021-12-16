// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UJsonTool;
#ifdef RICKANDMORTYPLUGIN_JsonTool_generated_h
#error "JsonTool.generated.h already included, missing '#pragma once' in JsonTool.h"
#endif
#define RICKANDMORTYPLUGIN_JsonTool_generated_h

#define HostProject_Plugins_RickAndMortyPlugin_Source_RickAndMortyPlugin_Public_JsonTool_h_12_DELEGATE \
struct _Script_RickAndMortyPlugin_eventResponseDelegate_Parms \
{ \
	FString Data; \
}; \
static inline void FResponseDelegate_DelegateWrapper(const FMulticastScriptDelegate& ResponseDelegate, const FString& Data) \
{ \
	_Script_RickAndMortyPlugin_eventResponseDelegate_Parms Parms; \
	Parms.Data=Data; \
	ResponseDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_RickAndMortyPlugin_Source_RickAndMortyPlugin_Public_JsonTool_h_17_SPARSE_DATA
#define HostProject_Plugins_RickAndMortyPlugin_Source_RickAndMortyPlugin_Public_JsonTool_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCreate); \
	DECLARE_FUNCTION(execGetRequest);


#define HostProject_Plugins_RickAndMortyPlugin_Source_RickAndMortyPlugin_Public_JsonTool_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCreate); \
	DECLARE_FUNCTION(execGetRequest);


#define HostProject_Plugins_RickAndMortyPlugin_Source_RickAndMortyPlugin_Public_JsonTool_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUJsonTool(); \
	friend struct Z_Construct_UClass_UJsonTool_Statics; \
public: \
	DECLARE_CLASS(UJsonTool, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RickAndMortyPlugin"), NO_API) \
	DECLARE_SERIALIZER(UJsonTool)


#define HostProject_Plugins_RickAndMortyPlugin_Source_RickAndMortyPlugin_Public_JsonTool_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUJsonTool(); \
	friend struct Z_Construct_UClass_UJsonTool_Statics; \
public: \
	DECLARE_CLASS(UJsonTool, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RickAndMortyPlugin"), NO_API) \
	DECLARE_SERIALIZER(UJsonTool)


#define HostProject_Plugins_RickAndMortyPlugin_Source_RickAndMortyPlugin_Public_JsonTool_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UJsonTool(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UJsonTool) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UJsonTool); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UJsonTool); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UJsonTool(UJsonTool&&); \
	NO_API UJsonTool(const UJsonTool&); \
public:


#define HostProject_Plugins_RickAndMortyPlugin_Source_RickAndMortyPlugin_Public_JsonTool_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UJsonTool(UJsonTool&&); \
	NO_API UJsonTool(const UJsonTool&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UJsonTool); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UJsonTool); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UJsonTool)


#define HostProject_Plugins_RickAndMortyPlugin_Source_RickAndMortyPlugin_Public_JsonTool_h_17_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_RickAndMortyPlugin_Source_RickAndMortyPlugin_Public_JsonTool_h_14_PROLOG
#define HostProject_Plugins_RickAndMortyPlugin_Source_RickAndMortyPlugin_Public_JsonTool_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_RickAndMortyPlugin_Source_RickAndMortyPlugin_Public_JsonTool_h_17_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_RickAndMortyPlugin_Source_RickAndMortyPlugin_Public_JsonTool_h_17_SPARSE_DATA \
	HostProject_Plugins_RickAndMortyPlugin_Source_RickAndMortyPlugin_Public_JsonTool_h_17_RPC_WRAPPERS \
	HostProject_Plugins_RickAndMortyPlugin_Source_RickAndMortyPlugin_Public_JsonTool_h_17_INCLASS \
	HostProject_Plugins_RickAndMortyPlugin_Source_RickAndMortyPlugin_Public_JsonTool_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_RickAndMortyPlugin_Source_RickAndMortyPlugin_Public_JsonTool_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_RickAndMortyPlugin_Source_RickAndMortyPlugin_Public_JsonTool_h_17_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_RickAndMortyPlugin_Source_RickAndMortyPlugin_Public_JsonTool_h_17_SPARSE_DATA \
	HostProject_Plugins_RickAndMortyPlugin_Source_RickAndMortyPlugin_Public_JsonTool_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_RickAndMortyPlugin_Source_RickAndMortyPlugin_Public_JsonTool_h_17_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_RickAndMortyPlugin_Source_RickAndMortyPlugin_Public_JsonTool_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RICKANDMORTYPLUGIN_API UClass* StaticClass<class UJsonTool>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_RickAndMortyPlugin_Source_RickAndMortyPlugin_Public_JsonTool_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
