#pragma once
#include "CoreMinimal.h"
#include "ELookAtMode.generated.h"

UENUM(BlueprintType)
enum class ELookAtMode : uint8 {
    LOOK_AT_MODE_ACTOR,
    LOOK_AT_MODE_POSITION,
    LOOK_AT_MODE_UNUSE,
    LOOK_AT_MODE_MAX UMETA(Hidden),
};

