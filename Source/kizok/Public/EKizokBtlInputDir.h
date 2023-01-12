#pragma once
#include "CoreMinimal.h"
#include "EKizokBtlInputDir.generated.h"

UENUM(BlueprintType)
enum class EKizokBtlInputDir : uint8 {
    Left,
    Right,
    Up,
    Down,
    MaxNum,
    None,
};

