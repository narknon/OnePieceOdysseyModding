#pragma once
#include "CoreMinimal.h"
#include "EKizokFadeType.generated.h"

UENUM(BlueprintType)
enum class EKizokFadeType : uint8 {
    In,
    Out,
    Wait,
};

