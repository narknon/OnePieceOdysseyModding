#pragma once
#include "CoreMinimal.h"
#include "ITEM_PARAMTYPE.generated.h"

UENUM(BlueprintType)
enum class ITEM_PARAMTYPE : uint8 {
    NONE,
    HP,
    SP,
    HPSP,
    MAXHP,
    ATTACK,
    DEFENSE,
    LUCK,
    ITEM_MAX UMETA(Hidden),
};

