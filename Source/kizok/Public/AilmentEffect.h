#pragma once
#include "CoreMinimal.h"
#include "AilmentEffectConstants.h"
#include "AilmentEffect.generated.h"

class UKizokParticleInstance;

USTRUCT(BlueprintType)
struct FAilmentEffect {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKizokParticleInstance* Particle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAilmentEffectConstants Constants;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Asset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsLoop;
    
    KIZOK_API FAilmentEffect();
};

