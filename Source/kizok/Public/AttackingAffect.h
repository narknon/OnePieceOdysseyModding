#pragma once
#include "CoreMinimal.h"
#include "EAttackingAffectType.h"
#include "BtlSituationText.h"
#include "AttackingAffect.generated.h"

USTRUCT(BlueprintType)
struct FAttackingAffect {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAttackingAffectType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBtlSituationText desc;
    
    KIZOK_API FAttackingAffect();
};

