#pragma once
#include "CoreMinimal.h"
#include "EFIELD_NPC_ACTION.generated.h"

UENUM(BlueprintType)
enum class EFIELD_NPC_ACTION : uint8 {
    FIELD_NPC_WAIT,
    FIELD_NPC_TALK,
    FIELD_NPC_SLIP_THROUGH,
    FIELD_NPC_AUTONOMY,
    FIELD_NPC_NONE,
    FIELD_NPC_MAX UMETA(Hidden),
};

