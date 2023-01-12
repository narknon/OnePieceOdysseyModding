#pragma once
#include "CoreMinimal.h"
#include "ESituationState.generated.h"

UENUM(BlueprintType)
enum class ESituationState : uint8 {
    EST_FIRST,
    EST_PREACT,
    EST_POSTACT,
    EST_GUESTIN,
    EST_REINFORCEMENT,
    EST_RESULT,
    EST_BATTLEEND,
    EST_INITIALIZE = 0xFF,
};

