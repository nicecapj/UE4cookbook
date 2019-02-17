

using UnrealBuildTool;
using System.Collections.Generic;

public class writingTarget : TargetRules
{
	public writingTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;

		ExtraModuleNames.AddRange( new string[] { "writing", "Core", "CoureUObject", "Engine", "RHI", "RenderCore" } );
	}
}
