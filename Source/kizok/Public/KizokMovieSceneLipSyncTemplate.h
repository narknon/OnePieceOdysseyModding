#pragma once
#include "CoreMinimal.h"
#include "Evaluation/MovieSceneEvalTemplate.h"
#include "KizokMovieSceneLipSyncTemplate.generated.h"

USTRUCT(BlueprintType)
struct FKizokMovieSceneLipSyncTemplate : public FMovieSceneEvalTemplate {
    GENERATED_BODY()
public:
    KIZOK_API FKizokMovieSceneLipSyncTemplate();
};

