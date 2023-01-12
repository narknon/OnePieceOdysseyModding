#pragma once
#include "CoreMinimal.h"
#include "EKizokSkillUpMenuSlotState.generated.h"

UENUM(BlueprintType)
enum class EKizokSkillUpMenuSlotState : uint8 {
    SlotNoChange,
    SlotAll,
    SlotNotAll,
};

