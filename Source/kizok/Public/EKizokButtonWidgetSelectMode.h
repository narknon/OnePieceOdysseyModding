#pragma once
#include "CoreMinimal.h"
#include "EKizokButtonWidgetSelectMode.generated.h"

UENUM(BlueprintType)
enum class EKizokButtonWidgetSelectMode : uint8 {
    Normal,
    FocusOnly,
    Unfocusable,
};

