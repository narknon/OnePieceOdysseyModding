#pragma once
#include "CoreMinimal.h"
#include "KizokMovieSceneBlinkControlTrack.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieSceneTracks -ObjectName=KizokMovieScenePropertyTrack -FallbackName=KizokMovieScenePropertyTrack
#include "KizokMovieSceneLeftEyeHightlightControlTrack.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UKizokMovieSceneLeftEyeHightlightControlTrack : public UKizokMovieScenePropertyTrack {
    GENERATED_BODY()
public:
    UKizokMovieSceneLeftEyeHightlightControlTrack();
};

