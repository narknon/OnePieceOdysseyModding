#pragma once
#include "CoreMinimal.h"
#include "Evaluation/MovieSceneEvalTemplate.h"
#include "Channels/MovieSceneIntegerChannel.h"
#include "KizokMovieSceneForcedLodSectionTemplate.generated.h"

USTRUCT(BlueprintType)
struct FKizokMovieSceneForcedLodSectionTemplate : public FMovieSceneEvalTemplate {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneIntegerChannel IntegerChannel;
    
public:
    KIZOK_API FKizokMovieSceneForcedLodSectionTemplate();
};

