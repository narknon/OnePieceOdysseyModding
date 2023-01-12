#pragma once
#include "CoreMinimal.h"
#include "EKizokEffectWeatherType.generated.h"

UENUM(BlueprintType)
enum class EKizokEffectWeatherType : uint8 {
    None,
    Rain = 0x3,
    Thunderstorm,
    Snowstorm,
};

