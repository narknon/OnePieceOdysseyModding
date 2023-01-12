#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieSceneTracks -ObjectName=KizokMovieScenePropertyTrack -FallbackName=KizokMovieScenePropertyTrack
#include "KizokMovieSceneDynamicsResetTrack.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UKizokMovieSceneDynamicsResetTrack : public UKizokMovieScenePropertyTrack {
    GENERATED_BODY()
public:
    UKizokMovieSceneDynamicsResetTrack();
};

