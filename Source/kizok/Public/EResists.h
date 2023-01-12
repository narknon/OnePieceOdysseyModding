#pragma once
#include "CoreMinimal.h"
#include "EResists.generated.h"

UENUM(BlueprintType)
enum class EResists : uint8 {
    STRIKE,
    SLASH,
    THRUST,
    BULLET,
    FIRE,
    FREEZE,
    ELECTRICITY,
    SLEEP,
    STUN,
    PARALYSIS,
    POISON,
    CONFUSE,
    CHARM,
    DAZZLE,
    NUM,
};

