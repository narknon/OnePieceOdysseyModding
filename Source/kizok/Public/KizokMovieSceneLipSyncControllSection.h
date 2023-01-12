#pragma once
#include "CoreMinimal.h"
#include "Channels/MovieSceneFloatChannel.h"
#include "Channels/MovieSceneBoolChannel.h"
#include "KizokMovieSceneLipSyncControllMask.h"
#include "MovieSceneSection.h"
#include "KizokMovieSceneLipSyncControllSection.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UKizokMovieSceneLipSyncControllSection : public UMovieSceneSection {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKizokMovieSceneLipSyncControllMask ControllMask;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneBoolChannel Possible;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneFloatChannel ApplicationRate;
    
public:
    UKizokMovieSceneLipSyncControllSection();
};

