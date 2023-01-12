#pragma once
#include "CoreMinimal.h"
#include "ITEM_TARGET.generated.h"

UENUM(BlueprintType)
enum class ITEM_TARGET : uint8 {
    FRIEND,
    ENEMY,
    SYSTEM,
    STATUS,
    NONE,
    ITEM_MAX UMETA(Hidden),
};

