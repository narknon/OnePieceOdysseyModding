#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EKizokItemMenuHealResult.h"
#include "KizokItemTabInfo.h"
#include "KizokItemDispData.h"
#include "KizokMainMenuPage.h"
#include "KizokItemMenu.generated.h"

class UKizokUserWidget;
class UKizokButtonWidget;
class UKizokCharacterSelectMenu;
class UKizokCharacterSelectButtonWidget;
class UPanelWidget;
class UScrollBox;
class UMaterialInstance;

UCLASS(Blueprintable, EditInlineNew)
class KIZOK_API UKizokItemMenu : public UKizokMainMenuPage {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKizokItemTabInfo> TabIconList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<uint8, FSoftObjectPath> ItemIconList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UKizokButtonWidget> ItemWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* ItemWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UKizokButtonWidget*> CreatedItemWidgetList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ItemInfoScrollLength;
    
public:
    UKizokItemMenu();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateDispDetailItem(int32 ButtonIndex);
    
    UFUNCTION(BlueprintCallable)
    void RegisterItemListFromScrollBox(UScrollBox* InScrollBox, UKizokUserWidget* InCursorWidget, int32 InTabButtonGroupIndex);
    
private:
    UFUNCTION(BlueprintCallable)
    void RegisterItemInfoScrollBox(UScrollBox* InScrollBox);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTabButtonWidget(const UKizokButtonWidget* InButtonWidget) const;
    
    UFUNCTION(BlueprintCallable)
    bool IsAvailableItem(bool bFieldUse, FName ItemId);
    
private:
    UFUNCTION(BlueprintCallable)
    bool InitItemInfoScroll();
    
protected:
    UFUNCTION(BlueprintCallable)
    void HideHealEffectAll();
    
    UFUNCTION(BlueprintCallable)
    EKizokItemMenuHealResult HealByUseOverallItemsTogether(UKizokCharacterSelectMenu* InCharacterSelectMenu);
    
    UFUNCTION(BlueprintCallable)
    EKizokItemMenuHealResult HealByUseItemsTogether(UKizokCharacterSelectMenu* InCharacterSelectMenu);
    
    UFUNCTION(BlueprintCallable)
    EKizokItemMenuHealResult HealByOverallItem(UKizokCharacterSelectMenu* InCharacterSelectMenu);
    
    UFUNCTION(BlueprintCallable)
    EKizokItemMenuHealResult Heal(UKizokCharacterSelectButtonWidget* InButtonWidget);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMaterialInstance* GetTabMaterial(int32 InIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSoftObjectPath GetTabIcon(int32 InIndex) const;
    
    UFUNCTION(BlueprintCallable)
    FKizokItemDispData GetSelectedItemData();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSoftObjectPath GetItemIcon(uint8 InKey) const;
    
private:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetItemDataNum() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FKizokItemDispData GetItemData(int32 InIndex) const;
    
    UFUNCTION(BlueprintCallable)
    void CreateItemList();
    
    UFUNCTION(BlueprintCallable)
    void CheckUsedUpItem();
    
    UFUNCTION(BlueprintCallable)
    void AddHealEffect(UPanelWidget* InPanelWidget, int32 InNum);
    
};

