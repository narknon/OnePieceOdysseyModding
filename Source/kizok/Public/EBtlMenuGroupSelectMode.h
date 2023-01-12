#pragma once
#include "CoreMinimal.h"
#include "EBtlMenuGroupSelectMode.generated.h"

UENUM(BlueprintType)
enum class EBtlMenuGroupSelectMode : uint8 {
    TargetSelect,
    CameraOperate,
    Hidden,
    MaxNum,
    None,
};

