#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "KizokButtonGuideSettingData.h"
#include "KizokMainMenuPage.h"
#include "KizokSettingMenu.generated.h"

class UWidget;
class UKizokButtonWidget;
class UKizokSettingMenuTab;
class UKizokTextBlock;
class UKizokTitleMenu;
class UHorizontalBox;
class UWidgetSwitcher;
class UDataTable;

UCLASS(Blueprintable, EditInlineNew)
class KIZOK_API UKizokSettingMenu : public UKizokMainMenuPage {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSoftObjectPath> TabIconList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* HelpTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UKizokSettingMenuTab* ActiveMenuTab;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UKizokTitleMenu* TitleMenu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> TabTextIdList;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UKizokButtonWidget> SelectedSettingWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UKizokButtonWidget> SettingTitleTextWidget;
    
    UKizokSettingMenu();
private:
    UFUNCTION(BlueprintCallable)
    void SetupActiveTab(UKizokSettingMenuTab* InMenuTab, bool bInOperate);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetTitleMenu(UKizokTitleMenu* InTitleMenu);
    
private:
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SetTabText(UKizokTextBlock* InTextBlock, int32 InIndex) const;
    
    UFUNCTION(BlueprintCallable)
    void SetTabButtonLock(int32 InMenuIndex, bool IsLock);
    
protected:
    UFUNCTION(BlueprintCallable)
    UWidget* ReplacementDisplaySettingWidget(UWidgetSwitcher* WidgetSwitcher, UClass* InClass);
    
private:
    UFUNCTION(BlueprintCallable)
    void RegisterTabFromHorizontalBox(UHorizontalBox* InHorizontalBox);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnShowUITextFromTextId(const FName& InTextId);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnShowUITextFromText(const FText& InText);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnShowUITextForFixedTimeFromTextId(const FName& InUITextId, const FName& InNextUITextId);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnShowUITextForFixedTime(uint8 InUITextIndex, uint8 InNextUITextIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnShowUIText(uint8 InUITextIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHideExitTab();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCreateButtonGuide(const TArray<FKizokButtonGuideSettingData>& InButtonGuideList);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnClearButtonGuide();
    
private:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsValidHelp() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UKizokTitleMenu* GetTitleMenu() const;
    
private:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSoftObjectPath GetTabIcon(int32 InIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    uint8 GetBootTabIndex() const;
    
};

