#pragma once
#include "CoreMinimal.h"
#include "KizokMovieSceneBlinkControlTrack.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieSceneTracks -ObjectName=KizokMovieScenePropertyTrack -FallbackName=KizokMovieScenePropertyTrack
#include "KizokMovieSceneWindCharacterPhysicsAssetRateTrack.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UKizokMovieSceneWindCharacterPhysicsAssetRateTrack : public UKizokMovieScenePropertyTrack {
    GENERATED_BODY()
public:
    UKizokMovieSceneWindCharacterPhysicsAssetRateTrack();
};

