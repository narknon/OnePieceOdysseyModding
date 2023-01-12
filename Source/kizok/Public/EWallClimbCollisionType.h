#pragma once
#include "CoreMinimal.h"
#include "EWallClimbCollisionType.generated.h"

UENUM(BlueprintType)
enum class EWallClimbCollisionType : uint8 {
    TOP,
    BOTTOM,
    MIDDLE,
    TOP_AND_BOTTOM,
    MIDDLE_UPPERMOST,
};

