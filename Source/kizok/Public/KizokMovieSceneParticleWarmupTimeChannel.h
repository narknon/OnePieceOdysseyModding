#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Channels/MovieSceneChannel.h"
#include "KizokMovieSceneParticleWarmupTimeValue.h"
#include "KizokMovieSceneParticleWarmupTimeChannel.generated.h"

USTRUCT(BlueprintType)
struct KIZOK_API FKizokMovieSceneParticleWarmupTimeChannel : public FMovieSceneChannel {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFrameNumber> KeyTimes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKizokMovieSceneParticleWarmupTimeValue> KeyValues;
    
public:
    FKizokMovieSceneParticleWarmupTimeChannel();
};

