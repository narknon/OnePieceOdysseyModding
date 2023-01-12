#pragma once
#include "CoreMinimal.h"
#include "ESITUATIONCAMERA_ASSIGN.generated.h"

UENUM(BlueprintType)
enum class ESITUATIONCAMERA_ASSIGN : uint8 {
    ESC_INVALID,
    ESC_SELF,
    ESC_SELF_SLA,
    ESC_SELF_SLB,
    ESC_SELF_SRA,
    ESC_SELF_SRB,
    ESC_IN_GRP,
    ESC_ENEMYSELF,
    ESC_ENEMYGRP,
    ESC_PL2ENEMYGRP,
    ESC_MAX UMETA(Hidden),
};

