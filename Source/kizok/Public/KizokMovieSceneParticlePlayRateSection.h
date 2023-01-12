#pragma once
#include "CoreMinimal.h"
#include "Channels/MovieSceneFloatChannel.h"
#include "MovieSceneSection.h"
#include "KizokMovieSceneParticlePlayRateSection.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UKizokMovieSceneParticlePlayRateSection : public UMovieSceneSection {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneFloatChannel Rate;
    
public:
    UKizokMovieSceneParticlePlayRateSection();
};

