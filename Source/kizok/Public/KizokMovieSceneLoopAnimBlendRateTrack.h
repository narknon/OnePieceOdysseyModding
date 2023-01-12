#pragma once
#include "CoreMinimal.h"
#include "KizokMovieSceneBlinkControlTrack.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieSceneTracks -ObjectName=KizokMovieScenePropertyTrack -FallbackName=KizokMovieScenePropertyTrack
#include "KizokMovieSceneLoopAnimBlendRateTrack.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UKizokMovieSceneLoopAnimBlendRateTrack : public UKizokMovieScenePropertyTrack {
    GENERATED_BODY()
public:
    UKizokMovieSceneLoopAnimBlendRateTrack();
};

