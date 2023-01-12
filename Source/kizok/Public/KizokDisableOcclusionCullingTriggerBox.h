#pragma once
#include "CoreMinimal.h"
#include "Engine/TriggerBox.h"
#include "KizokDisableOcclusionCullingTriggerBox.generated.h"

UCLASS(Blueprintable)
class KIZOK_API AKizokDisableOcclusionCullingTriggerBox : public ATriggerBox {
    GENERATED_BODY()
public:
    AKizokDisableOcclusionCullingTriggerBox();
    UFUNCTION(BlueprintCallable)
    void ForceWakeup();
    
    UFUNCTION(BlueprintCallable)
    void Enable();
    
    UFUNCTION(BlueprintCallable)
    void Disable();
    
};

