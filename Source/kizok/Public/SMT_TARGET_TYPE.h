#pragma once
#include "CoreMinimal.h"
#include "SMT_TARGET_TYPE.generated.h"

UENUM(BlueprintType)
enum class SMT_TARGET_TYPE : uint8 {
    SMT_NONE,
    SMT_BUFF_COLOR_INTENSITY,
    SMT_FOCUSWEIGHT,
    SMT_DAMAGE,
    SMT_FROSTBITEWEIGHT,
    SMT_MAX UMETA(Hidden),
};

