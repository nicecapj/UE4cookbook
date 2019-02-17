// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;

public class Chapter8 : ModuleRules
{
	public Chapter8(ReadOnlyTargetRules Target) : base(Target)
	{
		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore" });

		PrivateDependencyModuleNames.AddRange(new string[] {  });
	}
}
