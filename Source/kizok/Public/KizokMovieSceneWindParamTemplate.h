#pragma once
#include "CoreMinimal.h"
#include "Evaluation/MovieSceneEvalTemplate.h"
#include "KizokMovieSceneWindParamTemplateData.h"
#include "KizokMovieSceneWindParamTemplate.generated.h"

USTRUCT(BlueprintType)
struct FKizokMovieSceneWindParamTemplate : public FMovieSceneEvalTemplate {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKizokMovieSceneWindParamTemplateData TemplateData;
    
    KIZOK_API FKizokMovieSceneWindParamTemplate();
};

