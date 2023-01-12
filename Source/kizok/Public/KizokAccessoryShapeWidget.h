#pragma once
#include "CoreMinimal.h"
#include "KizokExecActionButtonWidgetBase.h"
#include "KizokAccessoryShapeWidget.generated.h"

class UImage;

UCLASS(Blueprintable, EditInlineNew)
class KIZOK_API UKizokAccessoryShapeWidget : public UKizokExecActionButtonWidgetBase {
    GENERATED_BODY()
public:
    UKizokAccessoryShapeWidget();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetNamedAccessory(bool bInNamed);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UImage* OnGetAccessoryImage();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAccessorySelect();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAccessoryPreFocus();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAccessoryOverlap();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAccessoryNormal();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAccessoryFocus();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAccessoryFade();
    
};

