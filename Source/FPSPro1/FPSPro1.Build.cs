// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class FPSPro1 : ModuleRules
{
	public FPSPro1(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
