#pragma once
#include "CoreMinimal.h"
#include "Evaluation/MovieSceneEvalTemplate.h"
#include "KizokMovieSceneWindCharacterBaseRateTemplateData.h"
#include "KizokMovieSceneWindCharacterBaseRateTemplate.generated.h"

USTRUCT(BlueprintType)
struct FKizokMovieSceneWindCharacterBaseRateTemplate : public FMovieSceneEvalTemplate {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKizokMovieSceneWindCharacterBaseRateTemplateData TemplateData;
    
    KIZOK_API FKizokMovieSceneWindCharacterBaseRateTemplate();
};

