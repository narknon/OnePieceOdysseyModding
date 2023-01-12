#pragma once
#include "CoreMinimal.h"
#include "Channels/MovieSceneFloatChannel.h"
#include "MovieSceneSection.h"
#include "KizokMovieSceneBlinkControlSection.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UKizokMovieSceneBlinkControlSection : public UMovieSceneSection {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneFloatChannel Channel;
    
public:
    UKizokMovieSceneBlinkControlSection();
};

