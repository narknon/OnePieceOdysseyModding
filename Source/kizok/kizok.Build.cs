using UnrealBuildTool;

public class kizok : ModuleRules {
    public kizok(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "AIModule",
            "AnimGraphRuntime",
            "CEBANK",
            "CinematicCamera",
            "Core",
            "CoreUObject",
            "CriWareRuntime",
            "DLCBridge",
            "Engine",
            "EnlightenCore",
            "GameplayTasks",
            "InputCore",
            "LevelSequence",
            "MediaAssets",
            "MovieScene",
            "MovieSceneTracks",
            "NavigationSystem",
            "NetCommon",
            "SlateCore",
            "UMG",
        });
    }
}
