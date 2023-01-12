#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieSceneTracks -ObjectName=KizokMovieScenePropertyTrack -FallbackName=KizokMovieScenePropertyTrack
#include "KizokMovieSceneBlinkControlTrack.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UKizokMovieScenePropertyTrack : public UObject {
    GENERATED_BODY()
public:

};


UCLASS(Blueprintable, MinimalAPI)
class UKizokMovieSceneBlinkControlTrack : public UKizokMovieScenePropertyTrack {
    GENERATED_BODY()
public:
    UKizokMovieSceneBlinkControlTrack();
};

