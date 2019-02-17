

using UnrealBuildTool;
using System.Collections.Generic;

public class writingEditorTarget : TargetRules
{
	public writingEditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;

		ExtraModuleNames.AddRange( new string[] { "writing" } );
	}
}
