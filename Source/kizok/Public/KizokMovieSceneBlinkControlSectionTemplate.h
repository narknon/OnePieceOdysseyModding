#pragma once
#include "CoreMinimal.h"
#include "Evaluation/MovieSceneEvalTemplate.h"
#include "Channels/MovieSceneFloatChannel.h"
#include "KizokMovieSceneBlinkControlSectionTemplate.generated.h"

USTRUCT(BlueprintType)
struct FKizokMovieSceneBlinkControlSectionTemplate : public FMovieSceneEvalTemplate {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneFloatChannel FloatChannel;
    
public:
    KIZOK_API FKizokMovieSceneBlinkControlSectionTemplate();
};

