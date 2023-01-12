#pragma once
#include "CoreMinimal.h"
#include "Evaluation/MovieSceneEvalTemplate.h"
#include "KizokMovieSceneParticleColorAnimationTemplateData.h"
#include "KizokMovieSceneParticleColorAnimationTemplate.generated.h"

USTRUCT(BlueprintType)
struct FKizokMovieSceneParticleColorAnimationTemplate : public FMovieSceneEvalTemplate {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKizokMovieSceneParticleColorAnimationTemplateData TemplateData;
    
    KIZOK_API FKizokMovieSceneParticleColorAnimationTemplate();
};

