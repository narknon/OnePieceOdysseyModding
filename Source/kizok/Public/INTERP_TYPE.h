#pragma once
#include "CoreMinimal.h"
#include "INTERP_TYPE.generated.h"

UENUM(BlueprintType)
enum class INTERP_TYPE : uint8 {
    INTERP_LINEAR,
    INTERP_CURVE,
    INTERP_MAX UMETA(Hidden),
};

