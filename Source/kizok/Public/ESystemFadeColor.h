#pragma once
#include "CoreMinimal.h"
#include "ESystemFadeColor.generated.h"

UENUM(BlueprintType)
enum class ESystemFadeColor : uint8 {
    SYSTEM_FADE_COLOR_BLACK,
    SYSTEM_FADE_COLOR_WHITE,
    SYSTEM_FADE_COLOR_MAX UMETA(Hidden),
};

