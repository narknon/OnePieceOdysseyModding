#pragma once
#include "CoreMinimal.h"
#include "EMainCmdDispType.generated.h"

UENUM(BlueprintType)
enum class EMainCmdDispType : uint8 {
    UsableAllCmd,
    SkillOnly,
    DisableSkillAndArts,
    MaxNum,
    None,
};

