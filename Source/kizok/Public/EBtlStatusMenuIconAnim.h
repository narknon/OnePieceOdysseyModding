#pragma once
#include "CoreMinimal.h"
#include "EBtlStatusMenuIconAnim.generated.h"

UENUM(BlueprintType)
enum class EBtlStatusMenuIconAnim : uint8 {
    Normal,
    Acted,
    UnFightable,
    MaxNum,
    None,
};

