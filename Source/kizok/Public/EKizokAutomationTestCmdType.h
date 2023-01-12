#pragma once
#include "CoreMinimal.h"
#include "EKizokAutomationTestCmdType.generated.h"

UENUM(BlueprintType)
enum class EKizokAutomationTestCmdType : uint8 {
    FastTravel,
    PlayEpisode,
    StartCSVProfile,
    StopCSVProfile,
    ProfileFastTravel,
    ProfileFastTravePLAll,
    ProfileFastTraveFromFushigiAll,
    ProfileFastTraveFromDebugRoom,
    Warp,
    MoveTo,
    Include,
    StopMove,
    DumpHitches,
    SetEncount,
    SetEpisodeFlag,
    SetEventTrrigerEnable,
    BootBattle,
    BootBattlePL,
    BootBattleEnemiesSkillChkValidMap,
    BootBattleSkillChkValidMap,
    BootBattleWithProf,
    BootBattleSkillChkOpRes,
    RevisePartyStatAndJoinStat,
    ProfileHeatmap,
    SetTimeOfDay,
    Exec,
    ProfileMemorySize,
    SetPlayerLevel,
    LearnKizunaArts,
    SetUnlimitedSPInvoke,
    SetSkipBattleSituation,
    SetSkipBattleTutorial,
    Teleport,
    Wait,
    SetDebugInfoEnable,
};

