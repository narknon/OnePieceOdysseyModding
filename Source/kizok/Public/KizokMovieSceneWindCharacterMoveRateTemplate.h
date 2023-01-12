#pragma once
#include "CoreMinimal.h"
#include "Evaluation/MovieSceneEvalTemplate.h"
#include "KizokMovieSceneWindCharacterMoveRateTemplateData.h"
#include "KizokMovieSceneWindCharacterMoveRateTemplate.generated.h"

USTRUCT(BlueprintType)
struct FKizokMovieSceneWindCharacterMoveRateTemplate : public FMovieSceneEvalTemplate {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKizokMovieSceneWindCharacterMoveRateTemplateData TemplateData;
    
    KIZOK_API FKizokMovieSceneWindCharacterMoveRateTemplate();
};

