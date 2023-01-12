#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "KizokEffectParticle2.generated.h"

class UParticleSystemComponent;

UCLASS(Blueprintable)
class KIZOK_API AKizokEffectParticle2 : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* ParticleSystemComponent;
    
public:
    AKizokEffectParticle2();
protected:
    UFUNCTION(BlueprintCallable)
    void OnParticleSystemEnd();
    
};

