#pragma once
#include "CoreMinimal.h"
#include "EKizokAccessoryResetMenuSelect.generated.h"

UENUM(BlueprintType)
enum class EKizokAccessoryResetMenuSelect : uint8 {
    NotEnoughMoney,
    NotComposeAccessory,
    SelectEquipAccessory,
    SelectNotEquipAccessory,
};

