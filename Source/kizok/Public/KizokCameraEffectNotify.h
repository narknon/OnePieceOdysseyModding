#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "KizokCameraEffectNotify.generated.h"

class UParticleSystem;

UCLASS(Blueprintable, CollapseCategories)
class UKizokCameraEffectNotify : public UAnimNotify {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* Particle;
    
public:
    UKizokCameraEffectNotify();
};

