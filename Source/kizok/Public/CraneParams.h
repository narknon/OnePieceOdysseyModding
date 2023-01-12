#pragma once
#include "CoreMinimal.h"
#include "CraneParams.generated.h"

USTRUCT(BlueprintType)
struct KIZOK_API FCraneParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CranePitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CraneArmLength;
    
    FCraneParams();
};

