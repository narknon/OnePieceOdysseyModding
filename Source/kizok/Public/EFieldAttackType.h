#pragma once
#include "CoreMinimal.h"
#include "EFieldAttackType.generated.h"

UENUM(BlueprintType)
enum class EFieldAttackType : uint8 {
    ATK_NONE,
    ATK_BREAK,
    ATK_ITEM,
    ATK_BATTLE = 0x4,
    ATK_KNOCKBACK = 0x8,
    ATK_EXPLOSION = 0x10,
    ATK_MAX UMETA(Hidden),
};

