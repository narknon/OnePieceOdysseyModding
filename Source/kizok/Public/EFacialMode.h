#pragma once
#include "CoreMinimal.h"
#include "EFacialMode.generated.h"

UENUM(BlueprintType)
enum class EFacialMode : uint8 {
    FACIAL_MODE_ID,
    FACIAL_MODE_FRAME,
    FACIAL_MODE_MAX UMETA(Hidden),
};

