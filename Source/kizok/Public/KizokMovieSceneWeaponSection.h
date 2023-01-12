#pragma once
#include "CoreMinimal.h"
#include "KizokMovieSceneWeaponChannel.h"
#include "MovieSceneSection.h"
#include "KizokMovieSceneWeaponSection.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UKizokMovieSceneWeaponSection : public UMovieSceneSection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKizokMovieSceneWeaponChannel EventChannel;
    
    UKizokMovieSceneWeaponSection();
};

