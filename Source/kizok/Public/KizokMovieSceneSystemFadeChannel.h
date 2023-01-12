#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Channels/MovieSceneChannelData.h"
#include "Channels/MovieSceneChannel.h"
#include "KizokMovieSceneSystemFadeValue.h"
#include "KizokMovieSceneSystemFadeChannel.generated.h"

USTRUCT(BlueprintType)
struct KIZOK_API FKizokMovieSceneSystemFadeChannel : public FMovieSceneChannel {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFrameNumber> KeyTimes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKizokMovieSceneSystemFadeValue> KeyValues;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FMovieSceneKeyHandleMap KeyHandles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFrameTime FadeTime;
    
public:
    FKizokMovieSceneSystemFadeChannel();
};

