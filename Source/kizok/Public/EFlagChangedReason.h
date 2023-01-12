#pragma once
#include "CoreMinimal.h"
#include "EFlagChangedReason.generated.h"

UENUM(BlueprintType)
enum class EFlagChangedReason : uint8 {
    KIZOK_FLAGCHANGEDREASON_A,
    KIZOK_FLAGCHANGEDREASON_B,
    KIZOK_FLAGCHANGEDREASON_C,
    KIZOK_FLAGCHANGEDREASON_D,
    KIZOK_FLAGCHANGEDREASON_E,
    KIZOK_FLAGCHANGEDREASON_MAX UMETA(Hidden),
};

