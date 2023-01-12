#pragma once
#include "CoreMinimal.h"
#include "EBtlMenuHitMark.generated.h"

UENUM(BlueprintType)
enum class EBtlMenuHitMark : uint8 {
    HpDamege,
    SpDamege,
    HpRecovery,
    SpRecovery,
    Miss,
    Protection,
    MaxNum,
    None,
};

