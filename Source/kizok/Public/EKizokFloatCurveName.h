#pragma once
#include "CoreMinimal.h"
#include "EKizokFloatCurveName.generated.h"

UENUM(BlueprintType)
enum class EKizokFloatCurveName : uint8 {
    DIRECTIONAL_INTENSITY_FLOAT,
    FOG_DENSITY,
    FOG_MAX_OPACITY,
    FOG_START_DISTANCE,
    ENVIRONEMT_TEXTRE,
};

