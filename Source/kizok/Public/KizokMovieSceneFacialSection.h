#pragma once
#include "CoreMinimal.h"
#include "KizokMovieSceneFacialChannel.h"
#include "MovieSceneSection.h"
#include "KizokMovieSceneFacialSection.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UKizokMovieSceneFacialSection : public UMovieSceneSection {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKizokMovieSceneFacialChannel Channel;
    
public:
    UKizokMovieSceneFacialSection();
};

