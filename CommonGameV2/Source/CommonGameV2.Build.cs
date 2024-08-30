// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class CommonGameV2 : ModuleRules
{
	public CommonGameV2(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;				
		
		PublicDependencyModuleNames.AddRange(
			new string[]
			{
				"Core",
				"CoreUObject",
				"InputCore",
				"Engine",
				"Slate",
				"SlateCore",
				"UMG",
				"CommonInput",
				"CommonUI",
				"CommonUserV2",
				"GameplayTags",
				"ModularGameplayActors",
			}
		);
			
		
		PrivateDependencyModuleNames.AddRange(
			new string[]
			{
			}
		);
		
		
		DynamicallyLoadedModuleNames.AddRange(
			new string[]
			{
			}
		);
	}
}
