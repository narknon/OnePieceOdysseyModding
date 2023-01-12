#pragma once
#include "CoreMinimal.h"
#include "FIELD_ENEMY_MOVE_TYPE.generated.h"

UENUM(BlueprintType)
enum class FIELD_ENEMY_MOVE_TYPE : uint8 {
    PATROL,
    ROUND_TRIP,
    RANDOM,
    FOUND_ONLY,
    NOT_MOVE,
    FIELD_ENEMY_MOVE_MAX UMETA(Hidden),
};

