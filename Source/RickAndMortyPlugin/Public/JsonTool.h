// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "RickAndMortyPlugin.h"
#include "CoreMinimal.h"
#include "Http.h"
#include "Json.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "JsonTool.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FResponseDelegate, FString, Data);

UCLASS(BlueprintType, Blueprintable, Category = "JSON")
class RICKANDMORTYPLUGIN_API UJsonTool : public UBlueprintAsyncActionBase
{
	GENERATED_BODY()

public:
	TSharedPtr<FJsonObject> Data;
	
	UJsonTool();
	
	UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true"), Category = "JSON")
		static UJsonTool* GetRequest();
	UFUNCTION(BlueprintPure, Category = "JSON")
		static UJsonTool* Create();
	UPROPERTY(BlueprintAssignable, Category = "JSON")
		FResponseDelegate OnSuccess;
	UPROPERTY(BlueprintAssignable, Category = "JSON")
		FResponseDelegate OnFail;
	bool FromString(const FString& DataString);
	FString GetString(const FString& Key) const;
	FString GetObject(const FString& Key, const FString& StrKey);
	FString CreateResult();
private:
	void Reset();
	
	//callback function. Hindu on YouTube say that it's important. I believe.
	void FOnHttpReady(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bSuccessful);
};

