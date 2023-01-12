#pragma once
#include "CoreMinimal.h"
#include "Tracks/MovieScenePropertyTrack.h"
#include "KizokMovieSceneSystemFadeTrack.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UKizokMovieSceneSystemFadeTrack : public UMovieScenePropertyTrack {
    GENERATED_BODY()
public:
    UKizokMovieSceneSystemFadeTrack();
};

