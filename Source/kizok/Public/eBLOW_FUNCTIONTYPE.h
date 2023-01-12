#pragma once
#include "CoreMinimal.h"
#include "eBLOW_FUNCTIONTYPE.generated.h"

UENUM(BlueprintType)
enum class eBLOW_FUNCTIONTYPE : uint8 {
    TYPE0,
    TYPE1,
    eBLOW_MAX UMETA(Hidden),
};

