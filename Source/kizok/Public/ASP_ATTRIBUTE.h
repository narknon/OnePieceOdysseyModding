#pragma once
#include "CoreMinimal.h"
#include "ASP_ATTRIBUTE.generated.h"

UENUM(BlueprintType)
enum class ASP_ATTRIBUTE : uint8 {
    NONE,
    STRIKE,
    SLASH,
    THRUST,
    BULLET,
    FIRE,
    FREEZE,
    ELECTRIC,
    AMBITION,
    SEAENERGY,
    BEAM,
    LOGIA,
    ZOON,
    PARAMECIA,
    TURNDOWN,
    BOUNS,
    RELOCATION,
    SNAKE,
    ASP_MAX UMETA(Hidden),
};

