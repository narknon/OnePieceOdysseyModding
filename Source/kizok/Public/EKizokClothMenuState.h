#pragma once
#include "CoreMinimal.h"
#include "EKizokClothMenuState.generated.h"

UENUM(BlueprintType)
enum class EKizokClothMenuState : uint8 {
    SelectCloth,
    ChangeCheck,
    DecisionCloth,
    WaitChangeCloth,
};

