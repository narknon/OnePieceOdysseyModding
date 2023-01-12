#pragma once
#include "CoreMinimal.h"
#include "EKizokMessageCharaDisplayState.generated.h"

UENUM(BlueprintType)
enum class EKizokMessageCharaDisplayState : uint8 {
    Hidden,
    Label,
    FaceIconAndLabel,
};

