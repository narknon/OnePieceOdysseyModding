#pragma once
#include "CoreMinimal.h"
#include "Evaluation/MovieSceneEvalTemplate.h"
#include "KizokMovieSceneEyeLookAtChannel.h"
#include "KizokMovieSceneEyeLookAtTemplate.generated.h"

USTRUCT(BlueprintType)
struct FKizokMovieSceneEyeLookAtTemplate : public FMovieSceneEvalTemplate {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKizokMovieSceneEyeLookAtChannel Channel;
    
public:
    KIZOK_API FKizokMovieSceneEyeLookAtTemplate();
};

