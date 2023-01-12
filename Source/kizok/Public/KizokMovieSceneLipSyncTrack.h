#pragma once
#include "CoreMinimal.h"
#include "KizokMovieSceneBlinkControlTrack.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieSceneTracks -ObjectName=KizokMovieScenePropertyTrack -FallbackName=KizokMovieScenePropertyTrack
#include "KizokMovieSceneLipSyncTrack.generated.h"

UCLASS(Blueprintable)
class KIZOK_API UKizokMovieSceneLipSyncTrack : public UKizokMovieScenePropertyTrack {
    GENERATED_BODY()
public:
    UKizokMovieSceneLipSyncTrack();
};

