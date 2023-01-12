#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify_PlayParticleEffect.h"
#include "KizokBattleAnimNotifyParticle.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class UKizokBattleAnimNotifyParticle : public UAnimNotify_PlayParticleEffect {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TranslucencySortPriority;
    
    UKizokBattleAnimNotifyParticle();
};

