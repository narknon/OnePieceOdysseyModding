#pragma once
#include "CoreMinimal.h"
#include "CHARACTER_SPAWN_TYPES.generated.h"

UENUM(BlueprintType)
enum class CHARACTER_SPAWN_TYPES : uint8 {
    CST_PLG00,
    CST_PLG01,
    CST_PLG02,
    CST_PLG03,
    CST_GUEST01,
    CST_GUEST02,
    CST_ENG00,
    CST_ENG01,
    CST_ENG02,
    CST_ENG03,
    CST_ENG04,
    CST_ENG05,
    CST_ENG06,
    CST_ENG07,
    CST_ENG08,
    CST_ENG09,
    CST_MAX UMETA(Hidden),
};

