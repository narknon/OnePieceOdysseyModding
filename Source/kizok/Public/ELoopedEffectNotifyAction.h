#pragma once
#include "CoreMinimal.h"
#include "ELoopedEffectNotifyAction.generated.h"

UENUM(BlueprintType)
enum class ELoopedEffectNotifyAction : uint8 {
    ELEN_APPEAR,
    ELEN_REMOVE,
    ELEN_MAX UMETA(Hidden),
};

