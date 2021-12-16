// Fill out your copyright notice in the Description page of Project Settings.


#include "JsonTool.h"

UJsonTool::UJsonTool()
{
	Reset();
}

UJsonTool* UJsonTool::Create()
{
	return NewObject<UJsonTool>();
}

FString UJsonTool::CreateResult()
{
	FString Resp = "";
	Resp += "Name: " + GetString("name") + "\n";
	Resp += "Status: " + GetString("status") + "\n";
	Resp += "Species: " + GetString("species") + "\n";
	Resp += "Type: " + GetString("type") + "\n";
	Resp += "Gender: " + GetString("gender") + "\n";
	Resp += "Origin: " + GetObject("origin", "name") + "\n";
	Resp += "Location: " + GetObject("location", "name") + "\n";
	return Resp;
}

UJsonTool* UJsonTool::GetRequest()
 {
 	UJsonTool* DataObj = Create();
 	FString Random = FString::FromInt(rand() % 826 + 1);
 	TSharedRef<IHttpRequest, ESPMode::ThreadSafe> Request = FHttpModule::Get().CreateRequest();
 	Request->SetURL("https://rickandmortyapi.com/api/character/" + Random);
 	Request->SetVerb("GET");
 	Request->OnProcessRequestComplete().BindUObject(DataObj, &UJsonTool::FOnHttpReady);
	
 	DataObj->AddToRoot();
 	
 	Request->ProcessRequest();
 	return DataObj;
 }

bool UJsonTool::FromString(const FString& DataString)
{
	TSharedRef<TJsonReader<TCHAR>> JsonReader = TJsonReaderFactory<TCHAR>::Create(DataString);
	
	bool bIsDeserialized = FJsonSerializer::Deserialize(JsonReader, Data);
	if (!bIsDeserialized)
		return false;
	return true;
}

FString UJsonTool::GetObject(const FString& Key, const FString& StrKey)
{
	FString OutString = "";
	UJsonTool* FieldObj = NULL;
	const TSharedPtr<FJsonObject> *OutPtr;
	if (!Data->TryGetObjectField(*Key, OutPtr))
		return OutString;
	FieldObj = Create();
	FieldObj->Data = *OutPtr;
	FieldObj->Data->TryGetStringField("name", OutString);
	return OutString;
}

FString UJsonTool::GetString(const FString& Key) const
{
	FString OutString = "";
	Data->TryGetStringField(*Key, OutString);
	if (OutString == "" && Key == "type")
		OutString = "None";
	return OutString;
}

void UJsonTool::Reset()
{
	if (Data.IsValid())
		Data.Reset();
	Data = MakeShareable(new FJsonObject());
}

void UJsonTool::FOnHttpReady(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bSuccessful)
{
	RemoveFromRoot();
	if (!bSuccessful)
	{
		OnFail.Broadcast("Request failed\n");
		return ;
	}
	if (!FromString(Response->GetContentAsString()))
	{
		OnFail.Broadcast("Parsing failed\n");
		return ;
	}
	OnSuccess.Broadcast(this->CreateResult());
}
