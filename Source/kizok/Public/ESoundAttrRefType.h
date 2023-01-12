#pragma once
#include "CoreMinimal.h"
#include "ESoundAttrRefType.generated.h"

UENUM(BlueprintType)
enum class ESoundAttrRefType : uint8 {
    Foot,
    Body,
    MaxNum,
    None,
};

