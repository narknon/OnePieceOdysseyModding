﻿using UnrealBuildTool;

public class odysseyTarget : TargetRules {
	public odysseyTarget(TargetInfo Target) : base(Target) {
		Type = TargetType.Game;
		DefaultBuildSettings = BuildSettingsVersion.V2;
		ExtraModuleNames.AddRange(new string[] {
			"kizok",
		});
	}
}
