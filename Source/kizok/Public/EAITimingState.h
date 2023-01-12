#pragma once
#include "CoreMinimal.h"
#include "EAITimingState.generated.h"

UENUM(BlueprintType)
enum class EAITimingState : uint8 {
    EATS_CYCLEINIT,
    EATS_PREACT,
    EATS_MAX UMETA(Hidden),
};

