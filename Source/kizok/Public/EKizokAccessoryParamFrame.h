#pragma once
#include "CoreMinimal.h"
#include "EKizokAccessoryParamFrame.generated.h"

UENUM(BlueprintType)
enum class EKizokAccessoryParamFrame : uint8 {
    None,
    Normal,
    Ability,
    Add,
    Lock,
    Unlock,
};

