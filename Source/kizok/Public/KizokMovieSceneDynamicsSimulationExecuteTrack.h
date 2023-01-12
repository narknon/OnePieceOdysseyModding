#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieSceneTracks -ObjectName=KizokMovieScenePropertyTrack -FallbackName=KizokMovieScenePropertyTrack
#include "KizokMovieSceneDynamicsSimulationExecuteTrack.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UKizokMovieSceneDynamicsSimulationExecuteTrack : public UKizokMovieScenePropertyTrack {
    GENERATED_BODY()
public:
    UKizokMovieSceneDynamicsSimulationExecuteTrack();
};

