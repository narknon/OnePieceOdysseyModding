#pragma once
#include "CoreMinimal.h"
#include "EBtlMesType.generated.h"

UENUM(BlueprintType)
enum class EBtlMesType : uint8 {
    Recovery,
    Damage,
    Ailment,
    Cure,
    Buff,
    Debuff,
    UniqueSkillBuff,
    UniqueSkillEnd,
    ActionResult,
    Situation,
    AilmentProgress,
    AilmentMiss,
    ReAilment,
    BuffRelease,
    DebuffRelease,
    MaxNum,
    None,
};

