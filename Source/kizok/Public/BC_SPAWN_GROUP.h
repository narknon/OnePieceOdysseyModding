#pragma once
#include "CoreMinimal.h"
#include "BC_SPAWN_GROUP.generated.h"

UENUM(BlueprintType)
enum class BC_SPAWN_GROUP : uint8 {
    BSCG_GROUP0,
    BSCG_GROUP1,
    BSCG_GROUP2,
    BSCG_GROUP3,
    BSCG_GROUP4,
    BSCG_GROUP5,
    BSCG_MAX UMETA(Hidden),
};

