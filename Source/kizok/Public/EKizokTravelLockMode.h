#pragma once
#include "CoreMinimal.h"
#include "EKizokTravelLockMode.generated.h"

UENUM(BlueprintType)
enum class EKizokTravelLockMode : uint8 {
    Unlock,
    Lock_Camp,
    Lock_Other,
};

