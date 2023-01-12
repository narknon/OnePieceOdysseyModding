#pragma once
#include "CoreMinimal.h"
#include "Channels/MovieSceneFloatChannel.h"
#include "KizokMovieSceneSecondaryBlendControlTemplateBase.h"
#include "KizokMovieSceneSecondaryBlendControlSectionTemplate.generated.h"

USTRUCT(BlueprintType)
struct FKizokMovieSceneSecondaryBlendControlSectionTemplate : public FKizokMovieSceneSecondaryBlendControlTemplateBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneFloatChannel FloatChannel;
    
public:
    KIZOK_API FKizokMovieSceneSecondaryBlendControlSectionTemplate();
};

