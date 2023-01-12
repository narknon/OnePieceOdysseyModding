#pragma once
#include "CoreMinimal.h"
#include "ITEM_PARAMTYPE.h"
#include "KizokUserWidget.h"
#include "KizokCharacterHealWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class KIZOK_API UKizokCharacterHealWidget : public UKizokUserWidget {
    GENERATED_BODY()
public:
    UKizokCharacterHealWidget();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayHealEffectAnimation(ITEM_PARAMTYPE InHealType);
    
};

