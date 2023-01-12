using UnrealBuildTool;

public class odysseyEditorTarget : TargetRules {
	public odysseyEditorTarget(TargetInfo Target) : base(Target) {
		Type = TargetType.Editor;
		DefaultBuildSettings = BuildSettingsVersion.V2;
		ExtraModuleNames.AddRange(new string[] {
			"EnlightenCore",
			"kizok",
		});
	}
}
