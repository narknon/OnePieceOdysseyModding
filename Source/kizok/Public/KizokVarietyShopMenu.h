#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "KizokShopItemTabInfo.h"
#include "KizokShopItemDispData.h"
#include "KizokUserWidget.h"
#include "KizokVarietyShopMenu.generated.h"

class UKizokButtonWidget;
class UScrollBox;
class UKizokTextBlock;
class UMaterialInstance;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class KIZOK_API UKizokVarietyShopMenu : public UKizokUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKizokShopItemTabInfo> TabIconList;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<uint8, FSoftObjectPath> ItemIconList;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UKizokButtonWidget> ItemWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* ItemWidgetClass;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SelectItemId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UKizokButtonWidget* SelectButtonWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UKizokButtonWidget*> ButtonWidgetArray;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKizokShopItemDispData> ExchangeItemList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKizokShopItemDispData> ItemDataList;
    
public:
    UKizokVarietyShopMenu();
private:
    UFUNCTION(BlueprintCallable)
    void SetUnableTradeItemMap(const FKizokShopItemDispData& DispData, bool bReadyToTrade);
    
    UFUNCTION(BlueprintCallable)
    void SetReceiptState(bool IsReceiptState);
    
    UFUNCTION(BlueprintCallable)
    void SetPossessItemNum(FName ItemId, int32 Num);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetLineupFromDataTable(FName dataTableName);
    
    UFUNCTION(BlueprintCallable)
    void SetIsBuy(bool flag);
    
private:
    UFUNCTION(BlueprintCallable)
    void SetInputCountEnable(bool bInEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetFocusInfo();
    
    UFUNCTION(BlueprintCallable)
    void SetFocusIndex(FName ItemId, UKizokButtonWidget* ButtonWidget);
    
protected:
    UFUNCTION(BlueprintCallable)
    void RegisterScrollBox(UScrollBox* InScrollBox, UKizokUserWidget* InCursorWidget, int32 InTabButtonGroupIndex);
    
private:
    UFUNCTION(BlueprintCallable)
    void RefreshSellLineupList();
    
    UFUNCTION(BlueprintCallable)
    void OnUserScrolled(float InCurrentOffset);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUpperLimitErrorMessage();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayCursorAnimation(UKizokButtonWidget* InButtonWidget, bool bIsAdd);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangeExchangeItemNum();
    
    UFUNCTION(BlueprintCallable)
    void NotifyChangeTab();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTabButtonWidget(const UKizokButtonWidget* InButtonWidget) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCurrentFrameChangeTab() const;
    
private:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HaveEnoughMoneyToBuy(int32 Price, int32 Num) const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMaterialInstance* GetTabMaterial(int32 InIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSoftObjectPath GetTabIcon(int32 InIndex) const;
    
    UFUNCTION(BlueprintCallable)
    FKizokShopItemDispData GetSelectedItemData();
    
private:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetReceiptState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetMoneyAmount() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSoftObjectPath GetItemIcon(uint8 InKey) const;
    
private:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetItemDataNum() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FKizokShopItemDispData GetItemData(int32 InIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsBuy() const;
    
private:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetFocusInfo() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetFocusIndex() const;
    
private:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetFocusButtonIndex() const;
    
    UFUNCTION(BlueprintCallable)
    TArray<FKizokShopItemDispData> GetExchangeItemList();
    
    UFUNCTION(BlueprintCallable)
    FKizokShopItemDispData GetExchangeItemData(int32 ButtonId);
    
    UFUNCTION(BlueprintCallable)
    bool GetCanTradeFlag();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UKizokButtonWidget*> GetButtonWidgetList() const;
    
    UFUNCTION(BlueprintCallable)
    TArray<UKizokButtonWidget*> GetButtonWidgetArray(UScrollBox* ScrollBox);
    
    UFUNCTION(BlueprintCallable)
    TArray<FName> CreateUnableTradeItemList();
    
protected:
    UFUNCTION(BlueprintCallable)
    void CreateItemListAndScrollBox(UScrollBox* ScrollBox);
    
    UFUNCTION(BlueprintCallable)
    void CreateItemList();
    
private:
    UFUNCTION(BlueprintCallable)
    void CreateButtonWidgetList();
    
    UFUNCTION(BlueprintCallable)
    FText ConvertTotalPriceToFText();
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void ClearLineupDataTable() const;
    
    UFUNCTION(BlueprintCallable)
    void ClearExchangeItemNum();
    
    UFUNCTION(BlueprintCallable)
    bool CheckCanTradeItem(const FKizokShopItemDispData& DispData);
    
    UFUNCTION(BlueprintCallable)
    void CheckCanTradeAndPlayAnimation(UWidgetAnimation* NormalAnim, UWidgetAnimation* NormalOverLimitAnim, UWidgetAnimation* NormalUnableAnim, UWidgetAnimation* FocusAnim, UWidgetAnimation* FocusOverLimitAnim, UWidgetAnimation* FocusUnableAnim, UKizokButtonWidget* ButtonWidget, UWidgetAnimation* NumVisibleAnim, UWidgetAnimation* NumHiddenAnim);
    
protected:
    UFUNCTION(BlueprintCallable)
    void BackToNormalDisplay();
    
private:
    UFUNCTION(BlueprintCallable)
    void AssignTotalPriceTextBlock(UKizokTextBlock* pTextBlock);
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void AddMoneyAmount(int32 Price, int32 Num) const;
    
};

