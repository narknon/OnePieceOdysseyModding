#pragma once
#include "CoreMinimal.h"
#include "EMC_STATE.generated.h"

UENUM(BlueprintType)
enum class EMC_STATE : uint8 {
    EMC_STATE_1ST,
    EMC_STATE_1ST_RESTORE_MONOLITH,
    EMC_STATE_2ND,
    EMC_STATE_2ND_DOWN,
    EMC_STATE_3RD,
};

