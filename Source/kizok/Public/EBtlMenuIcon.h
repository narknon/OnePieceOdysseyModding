#pragma once
#include "CoreMinimal.h"
#include "EBtlMenuIcon.generated.h"

UENUM(BlueprintType)
enum class EBtlMenuIcon : uint8 {
    BMI_Player,
    BMI_NormalEnemy,
    BMI_StrongEnemy,
    BMI_Other,
    BMI_StorngOther,
    BMI_Guest,
    BMI_MaxNum,
    BMI_MAX UMETA(Hidden),
};

