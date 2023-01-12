#pragma once
#include "CoreMinimal.h"
#include "Evaluation/MovieSceneEvalTemplate.h"
#include "KizokMovieSceneSystemFadeChannel.h"
#include "KizokMovieSceneSystemFadeSectionTemplate.generated.h"

USTRUCT(BlueprintType)
struct FKizokMovieSceneSystemFadeSectionTemplate : public FMovieSceneEvalTemplate {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKizokMovieSceneSystemFadeChannel Channel;
    
public:
    KIZOK_API FKizokMovieSceneSystemFadeSectionTemplate();
};

