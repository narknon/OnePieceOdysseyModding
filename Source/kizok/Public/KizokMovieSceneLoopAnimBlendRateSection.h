#pragma once
#include "CoreMinimal.h"
#include "Channels/MovieSceneFloatChannel.h"
#include "MovieSceneSection.h"
#include "KizokMovieSceneLoopAnimBlendRateSection.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UKizokMovieSceneLoopAnimBlendRateSection : public UMovieSceneSection {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneFloatChannel Channel;
    
public:
    UKizokMovieSceneLoopAnimBlendRateSection();
};

