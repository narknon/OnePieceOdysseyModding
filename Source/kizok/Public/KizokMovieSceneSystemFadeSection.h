#pragma once
#include "CoreMinimal.h"
#include "KizokMovieSceneSystemFadeChannel.h"
#include "MovieSceneSection.h"
#include "KizokMovieSceneSystemFadeSection.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UKizokMovieSceneSystemFadeSection : public UMovieSceneSection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKizokMovieSceneSystemFadeChannel Channel;
    
    UKizokMovieSceneSystemFadeSection();
};

