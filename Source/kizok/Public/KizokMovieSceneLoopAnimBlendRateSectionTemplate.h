#pragma once
#include "CoreMinimal.h"
#include "Evaluation/MovieSceneEvalTemplate.h"
#include "Channels/MovieSceneFloatChannel.h"
#include "KizokMovieSceneLoopAnimBlendRateSectionTemplate.generated.h"

USTRUCT(BlueprintType)
struct FKizokMovieSceneLoopAnimBlendRateSectionTemplate : public FMovieSceneEvalTemplate {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneFloatChannel FloatChannel;
    
public:
    KIZOK_API FKizokMovieSceneLoopAnimBlendRateSectionTemplate();
};

