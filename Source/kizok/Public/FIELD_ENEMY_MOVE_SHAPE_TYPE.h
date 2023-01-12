#pragma once
#include "CoreMinimal.h"
#include "FIELD_ENEMY_MOVE_SHAPE_TYPE.generated.h"

UENUM(BlueprintType)
enum class FIELD_ENEMY_MOVE_SHAPE_TYPE : uint8 {
    CIRCLE,
    BOX,
    FIELD_ENEMY_MOVE_SHAPE_MAX UMETA(Hidden),
};

