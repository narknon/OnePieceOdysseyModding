#pragma once
#include "CoreMinimal.h"
#include "KizokMovieSceneBlinkControlTrack.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieSceneTracks -ObjectName=KizokMovieScenePropertyTrack -FallbackName=KizokMovieScenePropertyTrack
#include "KizokMovieSceneRightEyeHightlightControlTrack.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UKizokMovieSceneRightEyeHightlightControlTrack : public UKizokMovieScenePropertyTrack {
    GENERATED_BODY()
public:
    UKizokMovieSceneRightEyeHightlightControlTrack();
};

