#pragma once
#include "CoreMinimal.h"
#include "Evaluation/MovieSceneEvalTemplate.h"
#include "KizokMovieSceneLookAtChannel.h"
#include "KizokMovieSceneLookAtTemplate.generated.h"

USTRUCT(BlueprintType)
struct FKizokMovieSceneLookAtTemplate : public FMovieSceneEvalTemplate {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKizokMovieSceneLookAtChannel Channel;
    
public:
    KIZOK_API FKizokMovieSceneLookAtTemplate();
};

