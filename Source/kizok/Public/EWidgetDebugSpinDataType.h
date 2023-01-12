#pragma once
#include "CoreMinimal.h"
#include "EWidgetDebugSpinDataType.generated.h"

UENUM(BlueprintType)
enum class EWidgetDebugSpinDataType : uint8 {
    SPINDATA_FLOAT,
    SPINDATA_INT,
    SPINDATA_MAX UMETA(Hidden),
};

