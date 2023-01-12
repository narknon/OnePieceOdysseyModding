#pragma once
#include "CoreMinimal.h"
#include "EAtkAttrIcon.generated.h"

UENUM(BlueprintType)
enum class EAtkAttrIcon : uint8 {
    DefaultValue,
    Blow = 0x0,
    Slash,
    Thrust,
    Bullet,
    Fire,
    Freeze,
    Lightning,
    SeaEnergy = 0x16,
    Haki,
    Sleep = 0x7,
    Faint,
    Paralyze,
    Poison,
    Confuse,
    Charm,
    Dazzle,
    None = 0x18,
};

