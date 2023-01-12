#pragma once
#include "CoreMinimal.h"
#include "EKizokCharacterDetailMenuState.generated.h"

UENUM(BlueprintType)
enum class EKizokCharacterDetailMenuState : uint8 {
    BattleSkill,
    FieldSkill,
    KizunaArts,
    CharaStatus,
    StateMax,
};

