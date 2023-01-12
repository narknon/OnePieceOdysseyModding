#pragma once
#include "CoreMinimal.h"
#include "Channels/MovieSceneBoolChannel.h"
#include "KizokMovieSceneIKFlagTemplateData.generated.h"

USTRUCT(BlueprintType)
struct FKizokMovieSceneIKFlagTemplateData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneBoolChannel IKFlag;
    
    KIZOK_API FKizokMovieSceneIKFlagTemplateData();
};

