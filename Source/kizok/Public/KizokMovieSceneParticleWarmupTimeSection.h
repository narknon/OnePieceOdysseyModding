#pragma once
#include "CoreMinimal.h"
#include "KizokMovieSceneParticleWarmupTimeChannel.h"
#include "MovieSceneSection.h"
#include "KizokMovieSceneParticleWarmupTimeSection.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UKizokMovieSceneParticleWarmupTimeSection : public UMovieSceneSection {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKizokMovieSceneParticleWarmupTimeChannel Channel;
    
public:
    UKizokMovieSceneParticleWarmupTimeSection();
};

