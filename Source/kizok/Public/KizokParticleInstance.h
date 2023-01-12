#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "KizokParticleInstance.generated.h"

class UParticleSystemComponent;

UCLASS(Blueprintable)
class KIZOK_API UKizokParticleInstance : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UParticleSystemComponent> PSC;
    
    UKizokParticleInstance();
};

