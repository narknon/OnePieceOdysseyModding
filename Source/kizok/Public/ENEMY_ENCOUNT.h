#pragma once
#include "CoreMinimal.h"
#include "ENEMY_ENCOUNT.generated.h"

UENUM(BlueprintType)
namespace ENEMY_ENCOUNT {
    enum Type {
        DefaultValue,
        NONE = 0xFF,
        ENEMY_MAX UMETA(Hidden),
    };
}

