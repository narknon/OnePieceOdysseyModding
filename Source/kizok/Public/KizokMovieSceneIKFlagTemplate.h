#pragma once
#include "CoreMinimal.h"
#include "Evaluation/MovieSceneEvalTemplate.h"
#include "KizokMovieSceneIKFlagTemplateData.h"
#include "KizokMovieSceneIKFlagTemplate.generated.h"

USTRUCT(BlueprintType)
struct FKizokMovieSceneIKFlagTemplate : public FMovieSceneEvalTemplate {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKizokMovieSceneIKFlagTemplateData TemplateData;
    
    KIZOK_API FKizokMovieSceneIKFlagTemplate();
};

