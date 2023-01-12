#pragma once
#include "CoreMinimal.h"
#include "KizokMovieSceneBlinkControlTrack.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieSceneTracks -ObjectName=KizokMovieScenePropertyTrack -FallbackName=KizokMovieScenePropertyTrack
#include "KizokMovieSceneWindCharacterBaseRateTrack.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UKizokMovieSceneWindCharacterBaseRateTrack : public UKizokMovieScenePropertyTrack {
    GENERATED_BODY()
public:
    UKizokMovieSceneWindCharacterBaseRateTrack();
};

