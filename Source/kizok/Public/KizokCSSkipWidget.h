#pragma once
#include "CoreMinimal.h"
#include "Components/SlateWrapperTypes.h"
#include "KizokUserWidget.h"
#include "KizokCSSkipWidget.generated.h"

class UKizokFadeWidget;
class UKizokSystemEventListener;

UCLASS(Blueprintable, EditInlineNew)
class KIZOK_API UKizokCSSkipWidget : public UKizokUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SkipInputTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FadeOutNotInputTime;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UKizokFadeWidget* FadeWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKizokSystemEventListener* SystemEventListener;
    
public:
    UKizokCSSkipWidget();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetSkipUIVisibility(ESlateVisibility InVisibility);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnFinishedSkipEvent();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangeNotSkipEnable(bool InIsNotSkipEnable);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FadeOutSkipUI();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ChangeGaugeValue(float InValue);
    
};

