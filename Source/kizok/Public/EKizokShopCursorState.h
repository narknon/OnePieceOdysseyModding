#pragma once
#include "CoreMinimal.h"
#include "EKizokShopCursorState.generated.h"

UENUM(BlueprintType)
enum class EKizokShopCursorState : uint8 {
    Rigth,
    Left,
    RigthAndLeft,
    None,
};

