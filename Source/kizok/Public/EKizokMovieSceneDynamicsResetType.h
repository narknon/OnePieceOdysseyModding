#pragma once
#include "CoreMinimal.h"
#include "EKizokMovieSceneDynamicsResetType.generated.h"

UENUM(BlueprintType)
enum class EKizokMovieSceneDynamicsResetType : uint8 {
    TeleportPhysics,
    ResetPhysics,
};

