#pragma once
#include "CoreMinimal.h"
#include "EKizokSnipeTargetFruit.generated.h"

UENUM(BlueprintType)
namespace EKizokSnipeTargetFruit {
    enum Type {
        SNIPE_TARGET_FRUIT_TYPE_APPLE,
        SNIPE_TARGET_FRUIT_TYPE_MERAMERA,
        SNIPE_TARGET_FRUIT_TYPE_MAX UMETA(Hidden),
    };
}

