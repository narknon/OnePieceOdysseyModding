#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Channels/MovieSceneChannel.h"
#include "KizokMovieSceneDynamicsResetValue.h"
#include "KizokMovieSceneDynamicsResetChannel.generated.h"

USTRUCT(BlueprintType)
struct KIZOK_API FKizokMovieSceneDynamicsResetChannel : public FMovieSceneChannel {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFrameNumber> KeyTimes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKizokMovieSceneDynamicsResetValue> KeyValues;
    
public:
    FKizokMovieSceneDynamicsResetChannel();
};

