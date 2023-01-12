#pragma once
#include "CoreMinimal.h"
#include "EBattleMainCmdType.generated.h"

UENUM(BlueprintType)
enum class EBattleMainCmdType : uint8 {
    BMC_LinkArts,
    BMC_Skill,
    BMC_Attack,
    BMC_Item,
    BMC_MaxNum,
    BMC_MAX UMETA(Hidden),
};

