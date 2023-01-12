#pragma once
#include "CoreMinimal.h"
#include "Channels/MovieSceneFloatChannel.h"
#include "KizokMovieSceneFacialAddBlendTemplateData.generated.h"

USTRUCT(BlueprintType)
struct FKizokMovieSceneFacialAddBlendTemplateData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneFloatChannel Emotion;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneFloatChannel Tone;
    
    KIZOK_API FKizokMovieSceneFacialAddBlendTemplateData();
};

