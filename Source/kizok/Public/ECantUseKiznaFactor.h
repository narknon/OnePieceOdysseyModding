#pragma once
#include "CoreMinimal.h"
#include "ECantUseKiznaFactor.generated.h"

UENUM(BlueprintType)
enum class ECantUseKiznaFactor : uint8 {
    None,
    CostOver,
    UnControllable,
    NotJoinInParty,
    KiznaMoveProhibit,
    InMonsterPoint,
    Unknown,
};

