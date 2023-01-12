#pragma once
#include "CoreMinimal.h"
#include "EBtlMenuStatusDispPriority.generated.h"

UENUM(BlueprintType)
enum class EBtlMenuStatusDispPriority : uint8 {
    BMSDP_Ailment_1,
    BMSDP_Ailment_2,
    BMSDP_Ailment_3,
    BMSDP_Ailment_4,
    BMSDP_Ailment_5,
    BMSDP_Ailment_6,
    BMSDP_Ailment_7,
    BMSDP_Ailment_8,
    BMSDP_Ailment_9,
    BMSDP_Ailment_10,
    BMSDP_Ailment_11,
    BMSDP_Ailment_12,
    BMSDP_Ailment_13,
    BMSDP_MaxNum,
    BMSDP_MAX UMETA(Hidden),
};

