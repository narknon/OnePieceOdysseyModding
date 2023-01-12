#pragma once
#include "CoreMinimal.h"
#include "KizokMovieSceneLookAtChannel.h"
#include "MovieSceneSection.h"
#include "KizokMovieSceneLookAtSection.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UKizokMovieSceneLookAtSection : public UMovieSceneSection {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKizokMovieSceneLookAtChannel Channel;
    
public:
    UKizokMovieSceneLookAtSection();
};

