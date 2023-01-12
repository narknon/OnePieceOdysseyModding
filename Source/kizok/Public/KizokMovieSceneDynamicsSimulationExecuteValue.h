#pragma once
#include "CoreMinimal.h"
#include "KizokMovieSceneDynamicsSimulationExecuteValue.generated.h"

USTRUCT(BlueprintType)
struct FKizokMovieSceneDynamicsSimulationExecuteValue {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SimulationExecuteCount;
    
    KIZOK_API FKizokMovieSceneDynamicsSimulationExecuteValue();
};

