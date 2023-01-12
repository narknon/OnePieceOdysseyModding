#pragma once
#include "CoreMinimal.h"
#include "EBtlMainMesWindow.generated.h"

UENUM(BlueprintType)
enum class EBtlMainMesWindow : uint8 {
    BMMW_MainCmd,
    BMMW_AttackTarget,
    BMMW_AttackAllTarget,
    BMMW_SkillList,
    BMMW_ArtsList,
    BMMW_BuffSkillFriendTarget,
    BMMW_HealSkillFriendTarget,
    BMMW_ItemList,
    BMMW_ItemFriendTarget,
    BMMW_TacticsCmd,
    BMMW_StrategyCmd,
    BMMW_PartyChange,
    BMMW_PartyChangeConfirm,
    BMMW_StatusCheckExist,
    BMMW_StatusCheckNone,
    BMMW_PossibleEscape,
    BMMW_UnPossibleEscape,
    BMMW_HelpCheck,
    BMMW_Skip,
    BMMW_AttackTargetTutorial,
    BMMW_SkillListTutorial,
    BMMW_ItemListTutorial,
    BMMW_ItemTargetTutorial,
    BMMW_MaxNum,
    BMMW_None,
    BMMW_MAX UMETA(Hidden),
};

