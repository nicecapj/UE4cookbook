// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;
using System.Collections.Generic;

public class Chapter3Target : TargetRules
{
	public Chapter3Target(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;
		
		ExtraModuleNames.AddRange( new string[] { "Chapter3" } );
	}
}
