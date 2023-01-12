#pragma once
#include "CoreMinimal.h"
#include "EKizokAccessoryComposeMenuState.generated.h"

UENUM(BlueprintType)
enum class EKizokAccessoryComposeMenuState : uint8 {
    SelectBaseAccessoryState,
    SelectConsumeAccessoryState,
    CheckRemoveAccessoryState,
    CheckComposeState,
    ComposeStagingState,
    ComposeCompletedStagingState,
    ComposeComplete,
};

