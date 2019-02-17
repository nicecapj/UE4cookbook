// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;

public class Chapter3 : ModuleRules
{
	public Chapter3(ReadOnlyTargetRules Target) : base(Target)
	{
		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore" });

		PrivateDependencyModuleNames.AddRange(new string[] {  });
	}
}
