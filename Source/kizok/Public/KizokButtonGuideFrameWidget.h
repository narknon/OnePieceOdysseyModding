#pragma once
#include "CoreMinimal.h"
#include "KizokButtonGuideSettingData.h"
#include "Blueprint/UserWidget.h"
#include "KizokButtonGuideFrameWidget.generated.h"

class UKizokUserWidget;
class UKizokButtonGuideWidget;
class UImage;
class UGridPanel;

UCLASS(Blueprintable, EditInlineNew)
class KIZOK_API UKizokButtonGuideFrameWidget : public UUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UKizokButtonGuideWidget*> ButtonGuideWidgetList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UKizokButtonGuideWidget> ButtonGuideCoreWidgetPtr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* ButtonGuideCoreWidgetClass;
    
public:
    UKizokButtonGuideFrameWidget();
protected:
    UFUNCTION(BlueprintCallable)
    void SetGridPanel(UGridPanel* InGridPanel);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetButtonGuideText(uint8 InIndex, const FText& InText);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetBaseImage(UImage* InBaseImage);
    
public:
    UFUNCTION(BlueprintCallable)
    void ReplaceButtonGuideTextFromUIText(uint8 InIndex, FName InTextId);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInitGridPanel();
    
public:
    UFUNCTION(BlueprintCallable)
    void CreateButtonGuide(UKizokUserWidget* InWidget, const TArray<FKizokButtonGuideSettingData>& InButtonGuideSettingDataList);
    
    UFUNCTION(BlueprintCallable)
    void ClearButtonGuide();
    
};

