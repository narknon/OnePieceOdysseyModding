#pragma once
#include "CoreMinimal.h"
#include "EBtlSkillMenuSeq.generated.h"

UENUM(BlueprintType)
enum class EBtlSkillMenuSeq : uint8 {
    BSMS_SkillSelect,
    BSMS_SelfSelect,
    BSMS_EnemySelect,
    BSMS_PartySelect,
    BSMS_ItemSelect,
    BSMS_MaxNum,
    BSMS_MAX UMETA(Hidden),
};

