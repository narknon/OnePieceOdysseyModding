#pragma once
#include "CoreMinimal.h"
#include "EKizokTimeZone.generated.h"

UENUM(BlueprintType)
enum class EKizokTimeZone : uint8 {
    Morning,
    Afternoon,
    Evening,
    Night,
};

