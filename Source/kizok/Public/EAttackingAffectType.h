#pragma once
#include "CoreMinimal.h"
#include "EAttackingAffectType.generated.h"

UENUM(BlueprintType)
enum class EAttackingAffectType : uint8 {
    IGNOREAFFECT,
    ATK2DAMAGEUP,
    ATK2KIZUNAUP,
    DFT2EXPUP,
};

