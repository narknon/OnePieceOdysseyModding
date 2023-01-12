#pragma once
#include "CoreMinimal.h"
#include "Channels/MovieSceneBoolChannel.h"
#include "Sections/MovieSceneParameterSection.h"
#include "KizokMovieSceneMaterialSection.generated.h"

UCLASS(Blueprintable)
class KIZOK_API UKizokMovieSceneMaterialSection : public UMovieSceneParameterSection {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneBoolChannel WeaponMaterialFlag;
    
public:
    UKizokMovieSceneMaterialSection();
};

