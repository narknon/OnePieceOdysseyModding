#pragma once
#include "CoreMinimal.h"
#include "EEXCLAMATION.generated.h"

UENUM(BlueprintType)
enum class EEXCLAMATION : uint8 {
    EXC_NONE,
    EXC_GONLY,
    EXC_GPINCH,
    EXC_GCHANCE,
    EXC_ONLY,
    EXC_PINCH,
    EXC_CHANCE,
    EXC_MAX UMETA(Hidden),
};

