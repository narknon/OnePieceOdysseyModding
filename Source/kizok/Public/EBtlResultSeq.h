#pragma once
#include "CoreMinimal.h"
#include "EBtlResultSeq.generated.h"

UENUM(BlueprintType)
enum class EBtlResultSeq : uint8 {
    DropDispPlaying,
    DropDispEnd,
    CharaActionWait,
    LevelUpPlaying,
    LevelUpWait,
    LevelUpEnd,
    ResultEnd,
    MaxNum,
    None,
};

