#pragma once
#include "CoreMinimal.h"
#include "EBattleItemCategory.generated.h"

UENUM(BlueprintType)
enum class EBattleItemCategory : uint8 {
    BIC_Recovery,
    BIC_Food,
    BIC_TrapBall,
    BIC_MaxNum,
    BIC_MAX UMETA(Hidden),
};

