#pragma once
#include "CoreMinimal.h"
#include "ENPCMoveType.generated.h"

UENUM(BlueprintType)
enum class ENPCMoveType : uint8 {
    ROUND_TRIP,
    ONE_WAY,
    PATROL,
};

