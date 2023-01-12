#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "KizokMovieSceneParticleManager.generated.h"

class UKizokParticleInstance;
class UParticleSystemComponent;

UCLASS(Blueprintable)
class KIZOK_API UKizokMovieSceneParticleManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, UKizokParticleInstance*> Particles;
    
public:
    UKizokMovieSceneParticleManager();
protected:
    UFUNCTION(BlueprintCallable)
    void Finish(UParticleSystemComponent* PSystem);
    
};

