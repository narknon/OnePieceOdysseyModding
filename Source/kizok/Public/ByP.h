#pragma once
#include "CoreMinimal.h"
#include "ByP.generated.h"

USTRUCT(BlueprintType)
struct FByP {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float P2ARaito;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AfterYaw;
    
    KIZOK_API FByP();
};

