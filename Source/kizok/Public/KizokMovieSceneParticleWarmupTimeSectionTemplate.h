#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Evaluation/MovieSceneEvalTemplate.h"
#include "KizokMovieSceneParticleWarmupTimeValue.h"
#include "KizokMovieSceneParticleWarmupTimeSectionTemplate.generated.h"

USTRUCT(BlueprintType)
struct FKizokMovieSceneParticleWarmupTimeSectionTemplate : public FMovieSceneEvalTemplate {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFrameNumber> Times;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKizokMovieSceneParticleWarmupTimeValue> Values;
    
public:
    KIZOK_API FKizokMovieSceneParticleWarmupTimeSectionTemplate();
};

