#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieSceneTracks -ObjectName=KizokMovieScenePropertyTrack -FallbackName=KizokMovieScenePropertyTrack
#include "KizokMovieSceneParticlePlayRateTrack.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UKizokMovieSceneParticlePlayRateTrack : public UKizokMovieScenePropertyTrack {
    GENERATED_BODY()
public:
    UKizokMovieSceneParticlePlayRateTrack();
};

