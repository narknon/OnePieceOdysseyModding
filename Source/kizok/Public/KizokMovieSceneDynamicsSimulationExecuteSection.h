#pragma once
#include "CoreMinimal.h"
#include "KizokMovieSceneDynamicsSimulationExecuteChannel.h"
#include "MovieSceneSection.h"
#include "KizokMovieSceneDynamicsSimulationExecuteSection.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UKizokMovieSceneDynamicsSimulationExecuteSection : public UMovieSceneSection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKizokMovieSceneDynamicsSimulationExecuteChannel EventChannel;
    
    UKizokMovieSceneDynamicsSimulationExecuteSection();
};

