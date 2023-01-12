#pragma once
#include "CoreMinimal.h"
#include "KizokBtlItemEffect.generated.h"

USTRUCT(BlueprintType)
struct FKizokBtlItemEffect {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 EffectType;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 StateCureType;
    
    KIZOK_API FKizokBtlItemEffect();
};

