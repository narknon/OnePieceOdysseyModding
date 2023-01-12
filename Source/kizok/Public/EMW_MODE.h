#pragma once
#include "CoreMinimal.h"
#include "EMW_MODE.generated.h"

UENUM(BlueprintType)
enum class EMW_MODE : uint8 {
    CONTROLLED,
    UNCONTROLLED_BARRIERED,
    UNCONTROLLED_FALLEN,
    EMW_MAX UMETA(Hidden),
};

