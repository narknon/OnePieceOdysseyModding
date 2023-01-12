#pragma once
#include "CoreMinimal.h"
#include "EBtlMenuCameraType.generated.h"

UENUM(BlueprintType)
enum class EBtlMenuCameraType : uint8 {
    BMCT_Player,
    BMCT_Overview,
    BMCT_ReturnViewpoint,
    BMCT_MaxNum,
    BMCT_MAX UMETA(Hidden),
};

