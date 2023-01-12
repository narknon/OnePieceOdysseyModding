#pragma once
#include "CoreMinimal.h"
#include "EStatusEffectTextValue.generated.h"

UENUM(BlueprintType)
enum class EStatusEffectTextValue : uint8 {
    ChangeValue,
    RemainingTurn,
    NormalOnly,
    MaxNum,
    None,
};

