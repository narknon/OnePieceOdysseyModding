#pragma once
#include "CoreMinimal.h"
#include "EBtlPlayerActionType.generated.h"

UENUM(BlueprintType)
enum class EBtlPlayerActionType : uint8 {
    PlayerAction,
    AIAction,
    MaxNum,
};

