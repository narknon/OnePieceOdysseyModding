#pragma once
#include "CoreMinimal.h"
#include "Evaluation/MovieSceneEvalTemplate.h"
#include "KizokMovieSceneLeftEyeControlTemplateData.h"
#include "KizokMovieSceneLeftEyeControlSectionTemplate.generated.h"

USTRUCT(BlueprintType)
struct FKizokMovieSceneLeftEyeControlSectionTemplate : public FMovieSceneEvalTemplate {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKizokMovieSceneLeftEyeControlTemplateData TemplateData;
    
    KIZOK_API FKizokMovieSceneLeftEyeControlSectionTemplate();
};

