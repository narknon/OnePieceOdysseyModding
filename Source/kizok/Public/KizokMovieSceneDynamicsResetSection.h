#pragma once
#include "CoreMinimal.h"
#include "KizokMovieSceneDynamicsResetChannel.h"
#include "MovieSceneSection.h"
#include "KizokMovieSceneDynamicsResetSection.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UKizokMovieSceneDynamicsResetSection : public UMovieSceneSection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKizokMovieSceneDynamicsResetChannel EventChannel;
    
    UKizokMovieSceneDynamicsResetSection();
};

