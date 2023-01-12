#pragma once
#include "CoreMinimal.h"
#include "Channels/MovieSceneFloatChannel.h"
#include "MovieSceneSection.h"
#include "KizokMovieSceneWindParamSection.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UKizokMovieSceneWindParamSection : public UMovieSceneSection {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneFloatChannel WindLevel;
    
public:
    UKizokMovieSceneWindParamSection();
};

