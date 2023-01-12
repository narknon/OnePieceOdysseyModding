#pragma once
#include "CoreMinimal.h"
#include "ELoopSENotifyAction.generated.h"

UENUM(BlueprintType)
enum class ELoopSENotifyAction : uint8 {
    ELSN_APPEAR,
    ELSN_REMOVE,
    ELSN_MAX UMETA(Hidden),
};

