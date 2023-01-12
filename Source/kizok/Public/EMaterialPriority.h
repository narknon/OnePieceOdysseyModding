#pragma once
#include "CoreMinimal.h"
#include "EMaterialPriority.generated.h"

UENUM(BlueprintType)
enum class EMaterialPriority : uint8 {
    None,
    Lower,
    Normal,
    High,
    Highest,
    Force,
    Fixed,
};

