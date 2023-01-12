#pragma once
#include "CoreMinimal.h"
#include "EKizokLvsJobResultDesc.generated.h"

UENUM(BlueprintType)
enum class EKizokLvsJobResultDesc : uint8 {
    Success,
    Failure_InvalidLevelSet,
    Failure_InvalidLevelSetName,
    Failure_Unhandled,
    Failure_InvalidSystem,
    Failure_LoadAsset,
};

