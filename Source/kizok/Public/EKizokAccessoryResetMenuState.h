#pragma once
#include "CoreMinimal.h"
#include "EKizokAccessoryResetMenuState.generated.h"

UENUM(BlueprintType)
enum class EKizokAccessoryResetMenuState : uint8 {
    SelectAccessoryState,
    CheckRemoveAccessoryState,
    SelectResetParamState,
    CheckResetState,
    ResetComplete,
};

