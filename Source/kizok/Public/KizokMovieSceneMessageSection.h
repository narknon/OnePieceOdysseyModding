#pragma once
#include "CoreMinimal.h"
#include "KizokMovieSceneMessageParameters.h"
#include "MovieSceneSection.h"
#include "KizokMovieSceneMessageSection.generated.h"

UCLASS(Blueprintable)
class KIZOK_API UKizokMovieSceneMessageSection : public UMovieSceneSection {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKizokMovieSceneMessageParameters Parameters;
    
public:
    UKizokMovieSceneMessageSection();
};

