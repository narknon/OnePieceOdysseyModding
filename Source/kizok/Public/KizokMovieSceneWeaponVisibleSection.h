#pragma once
#include "CoreMinimal.h"
#include "Channels/MovieSceneBoolChannel.h"
#include "MovieSceneSection.h"
#include "KizokMovieSceneWeaponVisibleSection.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UKizokMovieSceneWeaponVisibleSection : public UMovieSceneSection {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneBoolChannel WeaponVisible;
    
public:
    UKizokMovieSceneWeaponVisibleSection();
};

