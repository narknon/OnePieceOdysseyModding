#pragma once
#include "CoreMinimal.h"
#include "KizokLocalizationTextParam.h"
#include "KizokButtonWidget.h"
#include "KizokSettingMenuHelpButtonWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class KIZOK_API UKizokSettingMenuHelpButtonWidget : public UKizokButtonWidget {
    GENERATED_BODY()
public:
    UKizokSettingMenuHelpButtonWidget();
    UFUNCTION(BlueprintCallable)
    void SetNotified();
    
    UFUNCTION(BlueprintCallable)
    void SetFocused(const bool InFocused);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsNotified() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsFocused();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FKizokLocalizationTextParam GetTitleTextParam() const;
    
};

