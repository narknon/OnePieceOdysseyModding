#pragma once
#include "CoreMinimal.h"
#include "KizokMovieSceneBlinkControlTrack.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieSceneTracks -ObjectName=KizokMovieScenePropertyTrack -FallbackName=KizokMovieScenePropertyTrack
#include "KizokMovieSceneIKFlagTrack.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UKizokMovieSceneIKFlagTrack : public UKizokMovieScenePropertyTrack {
    GENERATED_BODY()
public:
    UKizokMovieSceneIKFlagTrack();
};

