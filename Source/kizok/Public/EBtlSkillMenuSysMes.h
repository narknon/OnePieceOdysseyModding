#pragma once
#include "CoreMinimal.h"
#include "EBtlSkillMenuSysMes.generated.h"

UENUM(BlueprintType)
enum class EBtlSkillMenuSysMes : uint8 {
    None,
    NotRelease,
    NotLearn,
    NotFixSkillUsablePlace,
    NotTutorial,
    CostOver,
    UnUsableCombinItem,
    DisableByGear2,
    DisableByMonsterPoint,
    DisableByNotMonsterPoint,
    MaxNum,
};

