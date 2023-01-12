#pragma once
#include "CoreMinimal.h"
#include "MovieSceneNameableTrack.h"
#include "MovieSceneSofdec2Track.generated.h"

class UMovieSceneSection;

UCLASS(Blueprintable)
class SOFDEC2_API UMovieSceneSofdec2Track : public UMovieSceneNameableTrack {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UMovieSceneSection*> Sofdec2Sections;
    
public:
    UMovieSceneSofdec2Track();
};

