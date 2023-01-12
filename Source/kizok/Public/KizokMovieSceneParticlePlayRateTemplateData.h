#pragma once
#include "CoreMinimal.h"
#include "Channels/MovieSceneFloatChannel.h"
#include "KizokMovieSceneParticlePlayRateTemplateData.generated.h"

USTRUCT(BlueprintType)
struct FKizokMovieSceneParticlePlayRateTemplateData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneFloatChannel Rate;
    
    KIZOK_API FKizokMovieSceneParticlePlayRateTemplateData();
};

