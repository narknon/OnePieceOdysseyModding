#pragma once
#include "CoreMinimal.h"
#include "KizokDisplaySettingMenuInAnimationFinishedEventDelegate.h"
#include "KizokButtonGuideSettingData.h"
#include "KizokSettingMenuTab.h"
#include "KizokSettingMenuDisplayTab.generated.h"

class UKizokUserWidget;
class UKizokButtonWidget;
class UKizokButtonGuideFrameWidget;
class UPanelWidget;
class UKizokSystemSaveSequence;

UCLASS(Blueprintable, EditInlineNew)
class KIZOK_API UKizokSettingMenuDisplayTab : public UKizokSettingMenuTab {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKizokSystemSaveSequence* SystemSaveSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> InfoTextIDList;
    
public:
    UKizokSettingMenuDisplayTab();
private:
    UFUNCTION(BlueprintCallable)
    void SetupFirstStartupButtonGuide(UKizokButtonGuideFrameWidget* InFrameWidget, UKizokUserWidget* InUserWidget, const TArray<FKizokButtonGuideSettingData>& InButtonGuideSettingDataList);
    
    UFUNCTION(BlueprintCallable)
    void RegisterDisplaySettingFromVerticalBox(UPanelWidget* InVerticalBox, const uint8 inTextIndexHead, UKizokButtonWidget* InResetButton);
    
public:
    UFUNCTION(BlueprintCallable)
    void PlayStartInAnimation(FKizokDisplaySettingMenuInAnimationFinishedEvent InEvent);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayStartInAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFinishedInAnimation();
    
private:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFirstStartup() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetInfoText(int32 InIndex) const;
    
public:
    UFUNCTION(BlueprintCallable)
    void FinishedInAnimation();
    
};

