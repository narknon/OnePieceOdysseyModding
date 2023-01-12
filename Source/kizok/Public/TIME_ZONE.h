#pragma once
#include "CoreMinimal.h"
#include "TIME_ZONE.generated.h"

UENUM(BlueprintType)
enum class TIME_ZONE : uint8 {
    D,
    N,
    TIME_MAX UMETA(Hidden),
};

