#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Channels/MovieSceneChannelData.h"
#include "Channels/MovieSceneChannel.h"
#include "KizokMovieSceneEyeLookAtValue.h"
#include "KizokMovieSceneEyeLookAtChannel.generated.h"

USTRUCT(BlueprintType)
struct KIZOK_API FKizokMovieSceneEyeLookAtChannel : public FMovieSceneChannel {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFrameNumber> Times;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKizokMovieSceneEyeLookAtValue> Values;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FMovieSceneKeyHandleMap KeyHandles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFrameRate FrameRate;
    
public:
    FKizokMovieSceneEyeLookAtChannel();
};

