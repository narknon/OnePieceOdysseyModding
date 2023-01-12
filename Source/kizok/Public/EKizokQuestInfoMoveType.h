#pragma once
#include "CoreMinimal.h"
#include "EKizokQuestInfoMoveType.generated.h"

UENUM(BlueprintType)
enum class EKizokQuestInfoMoveType : uint8 {
    New,
    In,
    Wait,
    Out,
    Up,
};

