#pragma once
#include "CoreMinimal.h"
#include "ESystemFadeMode.generated.h"

UENUM(BlueprintType)
enum class ESystemFadeMode : uint8 {
    SYSTEM_FADE_MODE_START,
    SYSTEM_FADE_MODE_END,
    SYSTME_FADE_MODE_DISABLE,
    SYSTME_FADE_MODE_NONE,
};

