#pragma once
#include "CoreMinimal.h"
#include "EOCCUPYTYPE.generated.h"

UENUM()
enum class EOCCUPYTYPE : int32 {
    OC_Unknown,
    OC_0to2,
    OC_4to6,
    OC_7to9,
    OC_10to19,
    OC_20to29,
    OC_30,
    OC_35,
    OC_31to32,
    OC_33,
    OC_40,
    OC_MAX UMETA(Hidden),
};

