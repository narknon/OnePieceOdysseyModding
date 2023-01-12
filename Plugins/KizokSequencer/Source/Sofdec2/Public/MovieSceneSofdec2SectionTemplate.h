#pragma once
#include "CoreMinimal.h"
#include "MovieSceneSofdec2SectionParams.h"
#include "Evaluation/MovieSceneEvalTemplate.h"
#include "MovieSceneSofdec2SectionTemplate.generated.h"

USTRUCT(BlueprintType)
struct FMovieSceneSofdec2SectionTemplate : public FMovieSceneEvalTemplate {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneSofdec2SectionParams Params;
    
public:
    SOFDEC2_API FMovieSceneSofdec2SectionTemplate();
};

