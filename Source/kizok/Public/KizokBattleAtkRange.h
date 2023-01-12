#pragma once
#include "CoreMinimal.h"
#include "KizokBattleAtkRange.generated.h"

USTRUCT(BlueprintType)
struct KIZOK_API FKizokBattleAtkRange {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Angle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DisableDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EnableDistance;
    
    FKizokBattleAtkRange();
};

