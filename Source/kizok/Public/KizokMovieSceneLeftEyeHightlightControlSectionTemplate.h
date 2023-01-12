#pragma once
#include "CoreMinimal.h"
#include "Evaluation/MovieSceneEvalTemplate.h"
#include "KizokMovieSceneLeftEyeHightlightControlTemplateData.h"
#include "KizokMovieSceneLeftEyeHightlightControlSectionTemplate.generated.h"

USTRUCT(BlueprintType)
struct FKizokMovieSceneLeftEyeHightlightControlSectionTemplate : public FMovieSceneEvalTemplate {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKizokMovieSceneLeftEyeHightlightControlTemplateData TemplateData;
    
    KIZOK_API FKizokMovieSceneLeftEyeHightlightControlSectionTemplate();
};

