#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Evaluation/MovieSceneEvalTemplate.h"
#include "KizokMovieSceneDynamicsSimulationExecuteValue.h"
#include "KizokMovieSceneDynamicsSimulationExecuteTemplate.generated.h"

USTRUCT(BlueprintType)
struct FKizokMovieSceneDynamicsSimulationExecuteTemplate : public FMovieSceneEvalTemplate {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFrameNumber> EventTimes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKizokMovieSceneDynamicsSimulationExecuteValue> EventValues;
    
public:
    KIZOK_API FKizokMovieSceneDynamicsSimulationExecuteTemplate();
};

