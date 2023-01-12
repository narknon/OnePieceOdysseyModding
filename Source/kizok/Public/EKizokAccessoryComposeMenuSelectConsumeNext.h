#pragma once
#include "CoreMinimal.h"
#include "EKizokAccessoryComposeMenuSelectConsumeNext.generated.h"

UENUM(BlueprintType)
enum class EKizokAccessoryComposeMenuSelectConsumeNext : uint8 {
    SelectEquip,
    SelectNoEquip,
    SelectNamed,
    SelectBase,
};

