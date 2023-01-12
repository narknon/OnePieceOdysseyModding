#pragma once
#include "CoreMinimal.h"
#include "EKizokItemMenuHealResult.generated.h"

UENUM(BlueprintType)
enum class EKizokItemMenuHealResult : uint8 {
    HealHP,
    HealSP,
    InsufficientNum = 0xA,
    UnnecessaryHealHP,
    UnnecessaryHealSP,
};

