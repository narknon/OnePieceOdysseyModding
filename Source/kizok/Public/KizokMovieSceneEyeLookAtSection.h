#pragma once
#include "CoreMinimal.h"
#include "KizokMovieSceneEyeLookAtChannel.h"
#include "MovieSceneSection.h"
#include "KizokMovieSceneEyeLookAtSection.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UKizokMovieSceneEyeLookAtSection : public UMovieSceneSection {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKizokMovieSceneEyeLookAtChannel Channel;
    
public:
    UKizokMovieSceneEyeLookAtSection();
};

