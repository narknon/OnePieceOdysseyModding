#pragma once
#include "CoreMinimal.h"
#include "Channels/MovieSceneBoolChannel.h"
#include "MovieSceneSection.h"
#include "KizokMovieSceneIKFlagSection.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UKizokMovieSceneIKFlagSection : public UMovieSceneSection {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneBoolChannel IKFlag;
    
public:
    UKizokMovieSceneIKFlagSection();
};

