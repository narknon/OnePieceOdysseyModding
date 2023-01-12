#pragma once
#include "CoreMinimal.h"
#include "EKizokLvsVolumeUsage.generated.h"

UENUM(BlueprintType)
enum class EKizokLvsVolumeUsage : uint8 {
    LoadAndVisible,
    Load,
};

