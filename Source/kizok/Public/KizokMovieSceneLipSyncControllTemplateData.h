#pragma once
#include "CoreMinimal.h"
#include "Channels/MovieSceneFloatChannel.h"
#include "Channels/MovieSceneBoolChannel.h"
#include "KizokMovieSceneLipSyncControllMask.h"
#include "KizokMovieSceneLipSyncControllTemplateData.generated.h"

USTRUCT(BlueprintType)
struct FKizokMovieSceneLipSyncControllTemplateData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneBoolChannel Possible;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneFloatChannel ApplicationRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKizokMovieSceneLipSyncControllMask Mask;
    
    KIZOK_API FKizokMovieSceneLipSyncControllTemplateData();
};

