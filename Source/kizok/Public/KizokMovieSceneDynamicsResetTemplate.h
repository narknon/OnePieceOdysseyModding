#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Evaluation/MovieSceneEvalTemplate.h"
#include "KizokMovieSceneDynamicsResetValue.h"
#include "KizokMovieSceneDynamicsResetTemplate.generated.h"

USTRUCT(BlueprintType)
struct FKizokMovieSceneDynamicsResetTemplate : public FMovieSceneEvalTemplate {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFrameNumber> EventTimes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKizokMovieSceneDynamicsResetValue> EventValues;
    
public:
    KIZOK_API FKizokMovieSceneDynamicsResetTemplate();
};

