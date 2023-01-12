#pragma once
#include "CoreMinimal.h"
#include "EAutonomyMoveMeans.generated.h"

UENUM(BlueprintType)
enum class EAutonomyMoveMeans : uint8 {
    MEANS_WALK,
    MEANS_RUN,
    MEANS_WARP,
    MEANS_MAX UMETA(Hidden),
};

