#pragma once
#include "CoreMinimal.h"
#include "KizokButtonWidget.h"
#include "KizokBonusButtonWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class KIZOK_API UKizokBonusButtonWidget : public UKizokButtonWidget {
    GENERATED_BODY()
public:
    UKizokBonusButtonWidget();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnReflectBonusData(const FText& InName, int32 InNum);
    
};

