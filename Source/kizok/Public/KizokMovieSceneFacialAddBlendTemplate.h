#pragma once
#include "CoreMinimal.h"
#include "Evaluation/MovieSceneEvalTemplate.h"
#include "KizokMovieSceneFacialAddBlendTemplateData.h"
#include "KizokMovieSceneFacialAddBlendTemplate.generated.h"

USTRUCT(BlueprintType)
struct FKizokMovieSceneFacialAddBlendTemplate : public FMovieSceneEvalTemplate {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKizokMovieSceneFacialAddBlendTemplateData TemplateData;
    
    KIZOK_API FKizokMovieSceneFacialAddBlendTemplate();
};

