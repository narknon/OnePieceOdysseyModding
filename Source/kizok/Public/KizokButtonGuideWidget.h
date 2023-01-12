#pragma once
#include "CoreMinimal.h"
#include "KizokButtonGuideSettingData.h"
#include "KizokExecActionButtonWidget.h"
#include "KizokButtonGuideWidget.generated.h"

class UKizokUserWidget;
class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class KIZOK_API UKizokButtonGuideWidget : public UKizokExecActionButtonWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTextOff;
    
public:
    UKizokButtonGuideWidget();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTextVisible(bool bVisible);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnReplaceText(const FText& InText);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnReplaceIcon(UTexture2D* InButtonGuideIcon);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInitOnlyIconButtonGuideWidget(UTexture2D* InButtonGuideIcon);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInitButtonGuideWidget(UTexture2D* InButtonGuideIcon, const FText& InButtonGuideText);
    
public:
    UFUNCTION(BlueprintCallable)
    void InitOnlyIconButtonGuideWidget(UKizokUserWidget* InWidget, FName InButtonGuideId);
    
    UFUNCTION(BlueprintCallable)
    void InitButtonGuideWidgetFromParam(UKizokUserWidget* InWidget, FName InButtonGuideId, FName InTextId);
    
    UFUNCTION(BlueprintCallable)
    void InitButtonGuideWidget(UKizokUserWidget* InWidget, const FKizokButtonGuideSettingData& InButtonGuideSettingData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FText GetButtonGuideText();
    
private:
    UFUNCTION(BlueprintCallable)
    void ChangeButtonGuide();
    
};

