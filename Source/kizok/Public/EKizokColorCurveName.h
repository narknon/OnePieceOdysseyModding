#pragma once
#include "CoreMinimal.h"
#include "EKizokColorCurveName.generated.h"

UENUM(BlueprintType)
enum class EKizokColorCurveName : uint8 {
    HORIZEN_BASE_COLOR,
    ZENITH_BASE_COLOR,
    CLOUD_LIGHT_COLOR,
    CLOUD_DARK_COLOR,
    SUN_COLOR,
    CUMULONIMBUS_COLOR,
    ENVIRONMENT_TEXTURE_COLOR,
};

