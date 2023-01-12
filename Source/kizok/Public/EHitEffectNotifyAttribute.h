#pragma once
#include "CoreMinimal.h"
#include "EHitEffectNotifyAttribute.generated.h"

UENUM(BlueprintType)
enum class EHitEffectNotifyAttribute : uint8 {
    HEN_NOSET,
    HEN_NONE,
    HEN_DEFAULT_S,
    HEN_DEFAULT_M,
    HEN_DEFAULT_L,
    HEN_BLOW_S,
    HEN_BLOW_M,
    HEN_BLOW_L,
    HEN_SLASH_S,
    HEN_SLASH_L,
    HEN_BULLET_S,
    HEN_BULLET_L,
    HEN_CANNON,
    HEN_FIRE,
    HEN_FREEZE,
    HEN_LIGHTNING,
    HEN_MAX UMETA(Hidden),
};

