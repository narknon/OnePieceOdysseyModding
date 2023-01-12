#pragma once
#include "CoreMinimal.h"
#include "Evaluation/MovieSceneEvalTemplate.h"
#include "KizokMovieSceneFacialChannel.h"
#include "KizokMovieSceneFacialTemplate.generated.h"

USTRUCT(BlueprintType)
struct FKizokMovieSceneFacialTemplate : public FMovieSceneEvalTemplate {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKizokMovieSceneFacialChannel Channel;
    
public:
    KIZOK_API FKizokMovieSceneFacialTemplate();
};

