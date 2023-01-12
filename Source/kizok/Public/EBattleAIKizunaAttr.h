#pragma once
#include "CoreMinimal.h"
#include "EBattleAIKizunaAttr.generated.h"

UENUM(BlueprintType)
enum class EBattleAIKizunaAttr : uint8 {
    BAKA_LOGIA,
    BAKA_ZOAN,
    BAKA_PARAMECIA,
    BAKA_TURNDOWN,
    BAKA_MAX UMETA(Hidden),
};

