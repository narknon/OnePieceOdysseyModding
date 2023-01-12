#pragma once
#include "CoreMinimal.h"
#include "EBtlStatusMenuGauge.generated.h"

UENUM(BlueprintType)
enum class EBtlStatusMenuGauge : uint8 {
    HP,
    SP,
    MaxNum,
    None,
};

