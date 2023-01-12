#pragma once
#include "CoreMinimal.h"
#include "EAtomLoopSettingID.generated.h"

UENUM(BlueprintType)
enum class EAtomLoopSettingID : uint8 {
    DefaultLoop,
    ForceLoop,
    IgnoreLoop,
};

