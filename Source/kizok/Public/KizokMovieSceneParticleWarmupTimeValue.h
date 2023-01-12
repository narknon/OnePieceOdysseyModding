#pragma once
#include "CoreMinimal.h"
#include "KizokMovieSceneParticleWarmupTimeValue.generated.h"

USTRUCT(BlueprintType)
struct FKizokMovieSceneParticleWarmupTimeValue {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WarmupTime;
    
    KIZOK_API FKizokMovieSceneParticleWarmupTimeValue();
};

