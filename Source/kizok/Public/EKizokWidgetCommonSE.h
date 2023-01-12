#pragma once
#include "CoreMinimal.h"
#include "EKizokWidgetCommonSE.generated.h"

UENUM(BlueprintType)
enum class EKizokWidgetCommonSE : uint8 {
    Decision,
    Cancel,
    UpperSwitching,
    CenterTabSwitching,
    ChangeFocus,
    Open,
    Close,
    Sort,
    Beep,
    CountUp,
    CountDown,
    RStickScroll,
};

