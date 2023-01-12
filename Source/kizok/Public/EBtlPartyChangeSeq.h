#pragma once
#include "CoreMinimal.h"
#include "EBtlPartyChangeSeq.generated.h"

UENUM(BlueprintType)
enum class EBtlPartyChangeSeq : uint8 {
    BPCS_First_Select,
    BPCS_Second_Select,
    BPCS_Change_Check,
    BPCS_MaxNum,
    BPCS_MAX UMETA(Hidden),
};

