#pragma once
#include "CoreMinimal.h"
#include "EKizokAutoEquipType.generated.h"

UENUM(BlueprintType)
enum class EKizokAutoEquipType : uint8 {
    Balance,
    HP,
    Strength,
    Vaitality,
    Lucky,
    SP,
    SPDefault,
    SPCharge,
    Critical,
    Blow,
    Slashing,
    Shoot,
    Fire,
    Ice,
    Thunder,
    Sleep,
    Faint,
    Paralysis,
    Poison,
    Confusion,
    Charm,
    Dazzle,
    Num,
};

