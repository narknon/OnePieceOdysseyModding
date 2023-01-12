#pragma once
#include "CoreMinimal.h"
#include "SPECIAL_INFLUENCE.generated.h"

UENUM(BlueprintType)
enum class SPECIAL_INFLUENCE : uint8 {
    NONE,
    HITDAMAGE,
    HALT,
    CONFUSE,
    CHARM,
    HIFREEZE,
    MEROMERO,
    KNOCKOUT,
    NODAMAGE,
    GUARD,
    SPECIAL_MAX UMETA(Hidden),
};

