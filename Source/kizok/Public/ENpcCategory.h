#pragma once
#include "CoreMinimal.h"
#include "ENpcCategory.generated.h"

UENUM(BlueprintType)
enum class ENpcCategory : uint8 {
    Normal,
    Shop,
    Craft,
    Cook,
    Compund,
};

