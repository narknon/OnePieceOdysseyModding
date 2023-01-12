#pragma once
#include "CoreMinimal.h"
#include "Channels/MovieSceneFloatChannel.h"
#include "MovieSceneSection.h"
#include "KizokMovieSceneSecondaryBlendControlSection.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UKizokMovieSceneSecondaryBlendControlSection : public UMovieSceneSection {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneFloatChannel Channel;
    
public:
    UKizokMovieSceneSecondaryBlendControlSection();
};

