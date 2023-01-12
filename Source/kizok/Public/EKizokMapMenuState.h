#pragma once
#include "CoreMinimal.h"
#include "EKizokMapMenuState.generated.h"

UENUM(BlueprintType)
enum class EKizokMapMenuState : uint8 {
    Invalid,
    AreaMap,
    FastTravel,
    RegionMap,
};

