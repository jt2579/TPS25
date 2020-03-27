// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class TPS25 : ModuleRules
{
	public TPS25(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
