#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieSceneTracks -ObjectName=KizokMovieScenePropertyTrack -FallbackName=KizokMovieScenePropertyTrack
#include "KizokMovieSceneEyeLookAtTrack.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UKizokMovieSceneEyeLookAtTrack : public UKizokMovieScenePropertyTrack {
    GENERATED_BODY()
public:
    UKizokMovieSceneEyeLookAtTrack();
};

