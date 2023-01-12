#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "KizokLoopedEffectNotifyState.generated.h"

class UKizokParticleInstance;
class UParticleSystem;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class KIZOK_API UKizokLoopedEffectNotifyState : public UAnimNotifyState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKizokParticleInstance* ptcli;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* PSTemplate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Node;
    
    UKizokLoopedEffectNotifyState();
};

