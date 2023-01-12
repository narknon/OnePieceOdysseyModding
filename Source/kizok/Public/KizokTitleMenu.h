#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "KizokEndBonusSequenceDelegateDelegate.h"
#include "KizokEndSystemSaveSequenceDelegateDelegate.h"
#include "KizokTitleMenuSelectLoadGameDelegate.h"
#include "KizokTitleMenuSelectNewGameDelegate.h"
#include "KizokButtonGuideSettingData.h"
#include "KizokUserWidget.h"
#include "KizokTitleMenu.generated.h"

class UObject;
class UWidget;
class UKizokButtonGuideFrameWidget;
class UKizokBonusSequence;
class UKizokSettingMenu;
class UKizokTextBlock;
class UKizokSystemSaveSequence;
class UWidgetSwitcher;

UCLASS(Blueprintable, EditInlineNew)
class KIZOK_API UKizokTitleMenu : public UKizokUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSoftObjectPath> TabIconList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UKizokSettingMenu* SettingMenu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKizokSystemSaveSequence* SystemSaveSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKizokBonusSequence* BonusSequence;
    
public:
    UKizokTitleMenu();
    UFUNCTION(BlueprintCallable)
    void StartTitleMenuOut();
    
    UFUNCTION(BlueprintCallable)
    void StartSaveSequence(FKizokEndSystemSaveSequenceDelegate InDelegate);
    
    UFUNCTION(BlueprintCallable)
    void StartBonusSequence(FKizokEndBonusSequenceDelegate InDelegate);
    
    UFUNCTION(BlueprintCallable)
    void SetupLoadMenuButtonGuide(UKizokButtonGuideFrameWidget* InTargetButtonGuideFrame, const TArray<FKizokButtonGuideSettingData>& InButtonGuideSettingDataList);
    
    UFUNCTION(BlueprintCallable)
    void SetTabGroupIndex(int32 InIndex);
    
    UFUNCTION(BlueprintCallable)
    void SelectNewGame();
    
    UFUNCTION(BlueprintCallable)
    void SelectLoadGame();
    
    UFUNCTION(BlueprintCallable)
    void ReturnTitleLogoMenu();
    
    UFUNCTION(BlueprintCallable)
    UWidget* ReplacementSettingMenuWidget(UWidgetSwitcher* WidgetSwitcher, UClass* InClass);
    
    UFUNCTION(BlueprintCallable)
    UWidget* ReplacementLoadWidget(UWidgetSwitcher* WidgetSwitcher, UClass* InClass);
    
    UFUNCTION(BlueprintCallable)
    UWidget* ReplacementAsyncLoadWidget(UWidgetSwitcher* WidgetSwitcher, UObject* InObject, bool bIsReplacementLoadAsset);
    
    UFUNCTION(BlueprintCallable)
    void RegisterSettingMenu(UKizokSettingMenu* InSettingMenu);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsNeedDoSaveSequence() const;
    
    UFUNCTION(BlueprintCallable)
    void GiveBonus();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSoftObjectPath GetTabIcon(int32 InIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTabGroupFocusIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    UKizokButtonGuideFrameWidget* GetSystemButtonGuide() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    UKizokTextBlock* GetMessageTextBlock() const;
    
    UFUNCTION(BlueprintCallable)
    bool ExistSaveData();
    
    UFUNCTION(BlueprintCallable)
    void EndSaveSequence();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CloseDialog();
    
    UFUNCTION(BlueprintCallable)
    void BindOnSelectNewGame(FKizokTitleMenuSelectNewGame InEvent);
    
    UFUNCTION(BlueprintCallable)
    void BindOnSelectLoadGame(FKizokTitleMenuSelectLoadGame InEvent);
    
};

