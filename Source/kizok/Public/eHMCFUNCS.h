#pragma once
#include "CoreMinimal.h"
#include "eHMCFUNCS.generated.h"

UENUM(BlueprintType)
enum class eHMCFUNCS : uint8 {
    HMCFUNC_DIRECT,
    HMCFUNC_RGB,
    HMCFUNC_A,
    HMCFUNC_MAX UMETA(Hidden),
};

