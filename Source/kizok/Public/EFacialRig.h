#pragma once
#include "CoreMinimal.h"
#include "EFacialRig.generated.h"

UENUM(BlueprintType)
enum class EFacialRig : uint8 {
    Upper,
    Lower,
    Mid,
    Blink,
};

