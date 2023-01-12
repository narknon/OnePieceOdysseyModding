#pragma once
#include "CoreMinimal.h"
#include "EBtlMenuTargetSelectType.generated.h"

UENUM(BlueprintType)
enum class EBtlMenuTargetSelectType : uint8 {
    BMTST_One,
    BMTST_Group,
    BMTST_All,
    BMTST_MaxNum,
    BMTST_None,
    BMTST_MAX UMETA(Hidden),
};

