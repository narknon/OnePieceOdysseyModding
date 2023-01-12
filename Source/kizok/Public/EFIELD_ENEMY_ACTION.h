#pragma once
#include "CoreMinimal.h"
#include "EFIELD_ENEMY_ACTION.generated.h"

UENUM(BlueprintType)
enum class EFIELD_ENEMY_ACTION : uint8 {
    FIELD_ENEMY_WAIT,
    FIELD_ENEMY_CHASE,
    FIELD_ENEMY_AUTONOMY,
    FIELD_ENEMY_NONE,
    FIELD_ENEMY_MAX UMETA(Hidden),
};

