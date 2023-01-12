#pragma once
#include "CoreMinimal.h"
#include "Channels/MovieSceneIntegerChannel.h"
#include "MovieSceneSection.h"
#include "KizokMovieSceneForcedLodSection.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UKizokMovieSceneForcedLodSection : public UMovieSceneSection {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneIntegerChannel Channel;
    
public:
    UKizokMovieSceneForcedLodSection();
};

