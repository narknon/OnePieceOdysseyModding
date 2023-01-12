#pragma once
#include "CoreMinimal.h"
#include "FIELD_ENEMY_SPHERE_MOVE_TYPE.generated.h"

UENUM(BlueprintType)
enum class FIELD_ENEMY_SPHERE_MOVE_TYPE : uint8 {
    RIGHT,
    LEFT,
    FIELD_ENEMY_SPHERE_MOVE_MAX UMETA(Hidden),
};

