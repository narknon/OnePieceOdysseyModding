#pragma once
#include "CoreMinimal.h"
#include "EKizokKeyAssignMode.generated.h"

UENUM(BlueprintType)
enum class EKizokKeyAssignMode : uint8 {
    Invalid,
    Normal,
    AutoRun,
    Ladder,
    Aiming,
    Num,
};

