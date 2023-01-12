#pragma once
#include "CoreMinimal.h"
#include "EKizokItemGetAvailabilityPattern.generated.h"

UENUM(BlueprintType)
enum class EKizokItemGetAvailabilityPattern : uint8 {
    YOROZU,
    GYOSYONIN,
    SAKABA,
    FIELD_ITEM,
};

