#pragma once
#include "CoreMinimal.h"
#include "ELadderAccessPoint.generated.h"

UENUM(BlueprintType)
enum class ELadderAccessPoint : uint8 {
    TOP,
    BOTTOM,
    NONE,
};

