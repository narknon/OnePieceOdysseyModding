#pragma once
#include "CoreMinimal.h"
#include "EKizokEquipMenuState.generated.h"

UENUM(BlueprintType)
enum class EKizokEquipMenuState : uint8 {
    Status,
    List,
    Auto,
    Equip,
};

