#pragma once
#include "CoreMinimal.h"
#include "EEyeLookAtMode.generated.h"

UENUM(BlueprintType)
enum class EEyeLookAtMode : uint8 {
    EYE_LOOK_AT_MODE_ACTOR,
    EYE_LOOK_AT_MODE_POSITION,
    EYE_LOOK_AT_MODE_UNUSE,
    EYE_LOOK_AT_MODE_MAX UMETA(Hidden),
};

