// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "Modules/ModuleManager.h"

class FRickAndMortyPluginModule : public IModuleInterface
{
public:
	FRickAndMortyPluginModule();
	
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
};
