#pragma once
#include "CoreMinimal.h"
#include "EIconRoutine.generated.h"

UENUM(BlueprintType)
enum class EIconRoutine : uint8 {
    InOut,
    LoopStart,
    LoopIneract,
    LoopEnd,
    Start,
};

