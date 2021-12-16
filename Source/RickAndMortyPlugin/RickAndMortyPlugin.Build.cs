// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class RickAndMortyPlugin : ModuleRules
{
	public RickAndMortyPlugin(ReadOnlyTargetRules Rules) : base(Rules)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(
			new string[] { 
				"Core", 
				"CoreUObject",
				"Engine",
				"HTTP",
				"Json",
			}
		);
	}
}