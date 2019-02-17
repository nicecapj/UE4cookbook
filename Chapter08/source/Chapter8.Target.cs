// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;
using System.Collections.Generic;

public class Chapter8Target : TargetRules
{
	public Chapter8Target(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;
		
		ExtraModuleNames.AddRange( new string[] { "Chapter8" } );
	}
}
