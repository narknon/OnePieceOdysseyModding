#pragma once
#include "CoreMinimal.h"
#include "EKizokWidgetInput.generated.h"

UENUM(BlueprintType)
enum class EKizokWidgetInput : uint8 {
    UpOrDown,
    LeftOrRight,
    UpperTab,
    CenterTab,
};

