#pragma once
#include "CoreMinimal.h"
#include "EShakeDirectionType.generated.h"

UENUM(BlueprintType)
enum class EShakeDirectionType : uint8 {
    Pitching,
    Rolling,
    Random,
};

