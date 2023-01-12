#pragma once
#include "CoreMinimal.h"
#include "KizokButtonWidget.h"
#include "KizokSettingMenuProgressBarButtonWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class KIZOK_API UKizokSettingMenuProgressBarButtonWidget : public UKizokButtonWidget {
    GENERATED_BODY()
public:
    UKizokSettingMenuProgressBarButtonWidget();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayAnimationOnR();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayAnimationOnL();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsParamMin() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsParamMax() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    uint8 GetTextIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSettingParam() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPercent() const;
    
};

