#pragma once
#include "CoreMinimal.h"
#include "SMC_PARAM_TYPE.generated.h"

UENUM(BlueprintType)
enum class SMC_PARAM_TYPE : uint8 {
    SMC_NONE,
    SMC_RGBA,
    SMC_SCALAR,
    SMC_MAX UMETA(Hidden),
};

