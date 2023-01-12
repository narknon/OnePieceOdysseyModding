#pragma once
#include "CoreMinimal.h"
#include "Evaluation/MovieSceneEvalTemplate.h"
#include "KizokMovieSceneParticlePlayRateTemplateData.h"
#include "KizokMovieSceneParticlePlayRateTemplate.generated.h"

USTRUCT(BlueprintType)
struct FKizokMovieSceneParticlePlayRateTemplate : public FMovieSceneEvalTemplate {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKizokMovieSceneParticlePlayRateTemplateData TemplateData;
    
    KIZOK_API FKizokMovieSceneParticlePlayRateTemplate();
};

