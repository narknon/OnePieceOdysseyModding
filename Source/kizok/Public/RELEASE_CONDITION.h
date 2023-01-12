#pragma once
#include "CoreMinimal.h"
#include "RELEASE_CONDITION.generated.h"

UENUM(BlueprintType)
enum class RELEASE_CONDITION : uint8 {
    NONE,
    HIT,
    RELEASE_MAX UMETA(Hidden),
};

