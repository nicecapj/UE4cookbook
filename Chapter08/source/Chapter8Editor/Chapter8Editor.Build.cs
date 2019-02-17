// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;

public class Chapter8Editor : ModuleRules
{
	public Chapter8Editor(ReadOnlyTargetRules Target) : base(Target)
	{
		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "RHI", "RenderCore", "ShaderCore", "MainFrame", "AssetTools", "AppFramework", "PropertyEditor"});
		PublicDependencyModuleNames.Add("Chapter8");
		PrivateDependencyModuleNames.AddRange(new string[] { "UnrealEd", "Slate", "SlateCore", "EditorStyle", "GraphEditor", "BlueprintGraph"});
	}
}
