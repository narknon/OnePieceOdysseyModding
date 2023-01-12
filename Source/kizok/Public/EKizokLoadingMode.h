#pragma once
#include "CoreMinimal.h"
#include "EKizokLoadingMode.generated.h"

UENUM(BlueprintType)
enum class EKizokLoadingMode : uint8 {
    Normal,
    NowLoading_Only,
};

