#pragma once
#include "CoreMinimal.h"
#include "EHitEffectNotifyAttribute.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "KizokHitEffectNotify.generated.h"

class UParticleSystem;

UCLASS(Blueprintable, CollapseCategories)
class UKizokHitEffectNotify : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* PSTemplate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHitEffectNotifyAttribute SoundType;
    
    UKizokHitEffectNotify();
};

