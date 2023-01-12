#pragma once
#include "CoreMinimal.h"
#include "EBtlResultItemIconType.generated.h"

UENUM(BlueprintType)
enum class EBtlResultItemIconType : uint8 {
    Item,
    Accessory,
    Money,
    MaxNum,
    None,
};

