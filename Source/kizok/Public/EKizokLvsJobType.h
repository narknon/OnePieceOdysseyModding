#pragma once
#include "CoreMinimal.h"
#include "EKizokLvsJobType.generated.h"

UENUM(BlueprintType)
enum class EKizokLvsJobType : uint8 {
    LoadLevel,
    UnloadLevel,
    SetVisibleTrue,
    SetVisibleFalse,
    ApplyMasterConfig,
    RestoreMasterConfig,
};

