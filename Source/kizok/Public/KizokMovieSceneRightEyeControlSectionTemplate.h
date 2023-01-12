#pragma once
#include "CoreMinimal.h"
#include "Evaluation/MovieSceneEvalTemplate.h"
#include "KizokMovieSceneRightEyeControlTemplateData.h"
#include "KizokMovieSceneRightEyeControlSectionTemplate.generated.h"

USTRUCT(BlueprintType)
struct FKizokMovieSceneRightEyeControlSectionTemplate : public FMovieSceneEvalTemplate {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKizokMovieSceneRightEyeControlTemplateData TemplateData;
    
    KIZOK_API FKizokMovieSceneRightEyeControlSectionTemplate();
};

