#pragma once
#include "CoreMinimal.h"
#include "Channels/MovieSceneFloatChannel.h"
#include "MovieSceneSection.h"
#include "KizokMovieSceneWindCharacterMoveRateSection.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UKizokMovieSceneWindCharacterMoveRateSection : public UMovieSceneSection {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneFloatChannel Rate;
    
public:
    UKizokMovieSceneWindCharacterMoveRateSection();
};

