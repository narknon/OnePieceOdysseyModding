#pragma once
#include "CoreMinimal.h"
#include "EPlayerFieldActionType.generated.h"

UENUM(BlueprintType)
enum class EPlayerFieldActionType : uint8 {
    None,
    Treasure,
    DoorSingleA,
    DoorSingleB,
    DoorDouble,
};

