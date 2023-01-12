#pragma once
#include "CoreMinimal.h"
#include "EKizokAccessoryMagnificationType.generated.h"

UENUM(BlueprintType)
enum class EKizokAccessoryMagnificationType : uint8 {
    Normal,
    Success,
    HugeSuccess,
};

