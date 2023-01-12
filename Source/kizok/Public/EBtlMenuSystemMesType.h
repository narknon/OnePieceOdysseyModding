#pragma once
#include "CoreMinimal.h"
#include "EBtlMenuSystemMesType.generated.h"

UENUM(BlueprintType)
enum class EBtlMenuSystemMesType : uint8 {
    UnselectablePartyChangeCmd,
    ImpossiblePartyChange,
    UnselectableEscapeCmd,
    FailedEscape,
    NotExistRecoveryFriend,
    UnavailableRecoveryFriend,
    NotTutorialUseItem,
    NotTutorialUseItemMember,
    UnselectableBattleModeChange,
    UnselectableSkillCmd,
    SelectNotReleaseSkill,
    SelectNotLearnSkill,
    SelectNotFixSkillUsablePlace,
    SelectNotTutorial,
    SelectSkillCostOver,
    UnUsableCombinItem,
    DisableSkillByGear2,
    DisableSkillByMonsterPoint,
    DisableSkillByNotMonsterPoint,
    ArtsGaugeCostOver,
    ArtsUnControllablePlayer,
    ArtsNotJoinInParty,
    KiznaMoveProhibit,
    KiznaInMonsterPoint,
    UnUsableAttackByWomenOnly,
    UnUsableItemByWomenOnly,
    UnUsableAttackByGrappResist,
    MaxNum,
    None,
};

