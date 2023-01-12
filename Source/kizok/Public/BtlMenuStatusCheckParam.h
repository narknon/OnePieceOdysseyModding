#pragma once
#include "CoreMinimal.h"
#include "BtlMenuStatusEffectParam.h"
#include "BtlMenuDispStatus.h"
#include "BtlMenuStatusCheckParam.generated.h"

USTRUCT(BlueprintType)
struct FBtlMenuStatusCheckParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBtlMenuDispStatus CharaStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBtlMenuStatusEffectParam> StatusEffectList;
    
    KIZOK_API FBtlMenuStatusCheckParam();
};

