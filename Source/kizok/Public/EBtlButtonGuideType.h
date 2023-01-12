#pragma once
#include "CoreMinimal.h"
#include "EBtlButtonGuideType.generated.h"

UENUM(BlueprintType)
enum class EBtlButtonGuideType : uint8 {
    Decide,
    Back,
    CommandSelect,
    TacticsCmd,
    TargetEnemy,
    TargetFriend,
    SkillSelect,
    SkillUseWithItem,
    SkillUse,
    ItemSelect,
    StrategySelect,
    StrategyDecide,
    PartySelect,
    PartyChange,
    Yes,
    No,
    StatusCheckCursor,
};

