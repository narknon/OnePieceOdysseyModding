#pragma once
#include "CoreMinimal.h"
#include "BATTLE_RESULT.generated.h"

UENUM(BlueprintType)
enum class BATTLE_RESULT : uint8 {
    RESULT_NONE,
    RESULT_WIN,
    RESULT_LOSE,
    RESULT_ESCAPE,
    RESULT_ESCAPE_E,
    RESULT_ABORT,
    RESULT_MAX UMETA(Hidden),
};

