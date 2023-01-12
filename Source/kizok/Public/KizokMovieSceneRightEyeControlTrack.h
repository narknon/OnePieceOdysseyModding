#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieSceneTracks -ObjectName=KizokMovieScenePropertyTrack -FallbackName=KizokMovieScenePropertyTrack
#include "KizokMovieSceneRightEyeControlTrack.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UKizokMovieSceneRightEyeControlTrack : public UKizokMovieScenePropertyTrack {
    GENERATED_BODY()
public:
    UKizokMovieSceneRightEyeControlTrack();
};

