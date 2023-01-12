#pragma once
#include "CoreMinimal.h"
#include "ECharaFootType.generated.h"

UENUM(BlueprintType)
enum class ECharaFootType : uint8 {
    CharaFoot_Sandals,
    CharaFoot_Boots,
    CharaFoot_Barefoot,
    CharaFoot_Heel,
    CharaFoot_Hoof,
    CharaFoot_Sandals_NPC,
    CharaFoot_Sandals_BigNPC,
    CharaFoot_Geta,
    CharaFoot_MAX UMETA(Hidden),
};

