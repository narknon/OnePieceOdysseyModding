#pragma once
#include "CoreMinimal.h"
#include "FIELD_ENEMY_PARTY_TYPE.generated.h"

UENUM(BlueprintType)
enum class FIELD_ENEMY_PARTY_TYPE : uint8 {
    NORMAL,
    SUB_1,
    SUB_2,
    SUB_3,
    SUB_4,
    SUB_5,
    FIELD_ENEMY_PARTY_MAX UMETA(Hidden),
};

