#pragma once
#include "CoreMinimal.h"
#include "EBtlMenuStatusIconType.generated.h"

UENUM(BlueprintType)
enum class EBtlMenuStatusIconType : uint8 {
    BMSIT_UnFightable,
    BMSIT_SuperFrozen,
    BMSIT_Arrest,
    BMSIT_Charm,
    BMSIT_Confuse,
    BMSIT_Paralysis,
    BMSIT_Sleep,
    BMSIT_SeriousFaint,
    BMSIT_Faint,
    BMSIT_Poison,
    BMSIT_Bleeding,
    BMSIT_Burn,
    BMSIT_Frozen,
    BMSIT_Dazzle,
    BMSIT_MaxNum,
    BMSIT_None,
    BMSIT_MAX UMETA(Hidden),
};

