#pragma once
#include "CoreMinimal.h"
#include "EAnalogStickType.generated.h"

UENUM(BlueprintType)
enum class EAnalogStickType : uint8 {
    AnalogStick_Left,
    AnalogStick_Right,
    AnalogStick_MAX UMETA(Hidden),
};

