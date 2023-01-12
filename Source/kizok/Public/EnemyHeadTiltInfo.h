#pragma once
#include "CoreMinimal.h"
#include "EnemyHeadTiltInfo.generated.h"

USTRUCT(BlueprintType)
struct KIZOK_API FEnemyHeadTiltInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TiltRatio;
    
    FEnemyHeadTiltInfo();
};

