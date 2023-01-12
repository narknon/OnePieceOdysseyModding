#pragma once
#include "CoreMinimal.h"
#include "EKizokMessageWaitType.generated.h"

UENUM(BlueprintType)
enum class EKizokMessageWaitType : uint8 {
    None,
    DisableInput,
};

