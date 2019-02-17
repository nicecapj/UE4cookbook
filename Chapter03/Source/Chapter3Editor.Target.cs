// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;
using System.Collections.Generic;

public class Chapter3EditorTarget : TargetRules
{
	public Chapter3EditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;
		
		ExtraModuleNames.AddRange( new string[] { "Chapter3" } );
	}
}
