#pragma once
#include "CoreMinimal.h"
#include "EBattleSpringArmType.generated.h"

UENUM(BlueprintType)
enum class EBattleSpringArmType : uint8 {
    NORMAL,
    FIELD,
    AUTO,
    SA_IGNORE,
};

