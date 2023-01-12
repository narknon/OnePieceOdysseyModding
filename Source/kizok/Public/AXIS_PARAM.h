#pragma once
#include "CoreMinimal.h"
#include "AXIS_PARAM.generated.h"

UENUM(BlueprintType)
enum class AXIS_PARAM : uint8 {
    AXIS_X,
    AXIS_Y,
    AXIS_Z,
    AXIS_MAX UMETA(Hidden),
};

