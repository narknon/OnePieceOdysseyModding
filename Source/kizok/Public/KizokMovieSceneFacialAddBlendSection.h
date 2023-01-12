#pragma once
#include "CoreMinimal.h"
#include "Channels/MovieSceneFloatChannel.h"
#include "MovieSceneSection.h"
#include "KizokMovieSceneFacialAddBlendSection.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UKizokMovieSceneFacialAddBlendSection : public UMovieSceneSection {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneFloatChannel Emotion;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneFloatChannel Tone;
    
public:
    UKizokMovieSceneFacialAddBlendSection();
};

