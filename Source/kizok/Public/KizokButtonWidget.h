#pragma once
#include "CoreMinimal.h"
#include "EKizokButtonWidgetSelectMode.h"
#include "Blueprint/UserWidget.h"
#include "KizokButtonWidget.generated.h"

class UKizokUserWidget;

UCLASS(Blueprintable, EditInlineNew)
class KIZOK_API UKizokButtonWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UKizokButtonWidget();
    UFUNCTION(BlueprintCallable)
    void SetSelectMode(EKizokButtonWidgetSelectMode InSelectMode);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnReflectParam();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnButtonInit();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnButtonFocusLost();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnButtonFocus();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSelectable() const;
    
    UFUNCTION(BlueprintCallable)
    UKizokUserWidget* GetParentWidget();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetButtonIndex() const;
    
};

