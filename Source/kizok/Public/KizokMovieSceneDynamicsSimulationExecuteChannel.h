#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Channels/MovieSceneChannel.h"
#include "KizokMovieSceneDynamicsSimulationExecuteValue.h"
#include "KizokMovieSceneDynamicsSimulationExecuteChannel.generated.h"

USTRUCT(BlueprintType)
struct KIZOK_API FKizokMovieSceneDynamicsSimulationExecuteChannel : public FMovieSceneChannel {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFrameNumber> KeyTimes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKizokMovieSceneDynamicsSimulationExecuteValue> KeyValues;
    
public:
    FKizokMovieSceneDynamicsSimulationExecuteChannel();
};

