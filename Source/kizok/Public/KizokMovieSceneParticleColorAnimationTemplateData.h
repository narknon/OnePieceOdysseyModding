#pragma once
#include "CoreMinimal.h"
#include "Channels/MovieSceneFloatChannel.h"
#include "KizokMovieSceneParticleColorAnimationTemplateData.generated.h"

USTRUCT(BlueprintType)
struct FKizokMovieSceneParticleColorAnimationTemplateData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneFloatChannel RedColor;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneFloatChannel GreenColor;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneFloatChannel BlueColor;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneFloatChannel AlphaColor;
    
    KIZOK_API FKizokMovieSceneParticleColorAnimationTemplateData();
};

