#pragma once
#include "CoreMinimal.h"
#include "Evaluation/MovieSceneEvalTemplate.h"
#include "KizokMovieSceneRightEyeHightlightControlTemplateData.h"
#include "KizokMovieSceneRightEyeHightlightControlSectionTemplate.generated.h"

USTRUCT(BlueprintType)
struct FKizokMovieSceneRightEyeHightlightControlSectionTemplate : public FMovieSceneEvalTemplate {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKizokMovieSceneRightEyeHightlightControlTemplateData TemplateData;
    
    KIZOK_API FKizokMovieSceneRightEyeHightlightControlSectionTemplate();
};

