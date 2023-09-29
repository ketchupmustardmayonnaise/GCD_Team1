// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class GCD_Team1 : ModuleRules
{
	public GCD_Team1(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", "EnhancedInput" });
	}
}
