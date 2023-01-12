#pragma once
#include "CoreMinimal.h"
#include "EBtlItemEffectType.generated.h"

UENUM(BlueprintType)
enum class EBtlItemEffectType : uint8 {
    None,
    HpHeal,
    SpHeal,
    StateCure,
    Buff,
    Debuff,
    MaxNum,
};

