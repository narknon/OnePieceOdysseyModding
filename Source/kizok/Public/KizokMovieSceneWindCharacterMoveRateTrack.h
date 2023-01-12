#pragma once
#include "CoreMinimal.h"
#include "KizokMovieSceneBlinkControlTrack.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieSceneTracks -ObjectName=KizokMovieScenePropertyTrack -FallbackName=KizokMovieScenePropertyTrack
#include "KizokMovieSceneWindCharacterMoveRateTrack.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UKizokMovieSceneWindCharacterMoveRateTrack : public UKizokMovieScenePropertyTrack {
    GENERATED_BODY()
public:
    UKizokMovieSceneWindCharacterMoveRateTrack();
};

