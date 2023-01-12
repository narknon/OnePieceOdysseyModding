#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BtlResultItemDisp.h"
#include "KizokBattleMenuBase.h"
#include "KizokMenuBattleResultDrop.generated.h"

class UKizokUserWidget;
class UKizokMenuBattleResult;
class UVerticalBox;

UCLASS(Blueprintable, EditInlineNew)
class KIZOK_API UKizokMenuBattleResultDrop : public UKizokBattleMenuBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ItemListDispMaxNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UKizokUserWidget> DropItemWidgetPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<uint8, FSoftObjectPath> CategoryIconPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath MoneyIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath AcceIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentItemAnimIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPlayDispAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bVisibleSystemMessage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSkipAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExpInAnimWaitTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MoneyInAnimWaitTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ItemInAnimWaitTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NextItemInAnimStartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BaseExp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BonusExp;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UKizokMenuBattleResult* parentWidget;
    
public:
    UKizokMenuBattleResultDrop();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartDropAnimation();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SkipMoneyAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SkipItemAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SkipExpAnimation();
    
public:
    UFUNCTION(BlueprintCallable)
    void SkipAnimation();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetVisibleDropItem(int32 Index, bool is_visible);
    
    UFUNCTION(BlueprintCallable)
    void SettingItemDispData(FBtlResultItemDisp& out_info);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetItemText(int32 itemListIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetDispMoney();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetDispExp();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetDispDropItemList();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RemoveDropItemListAt(int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayNextItemAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayItemAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayAnimItemList(int32 Index);
    
public:
    UFUNCTION(BlueprintCallable)
    bool IsPlayDispAnimation();
    
protected:
    UFUNCTION(BlueprintCallable)
    bool IsExistNextDispData();
    
    UFUNCTION(BlueprintCallable)
    bool IsExistItemData();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InitDispList();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetMoneyText() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSoftObjectPath GetMoneyIconPath() const;
    
    UFUNCTION(BlueprintCallable)
    FText GetItemName(FName ItemId);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UVerticalBox* GetItemListBox();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSoftObjectPath GetItemIconPath(int32 Category) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetExpText() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FBtlResultItemDisp> GetDropList() const;
    
    UFUNCTION(BlueprintCallable)
    FText GetAccessoryName(FName AccessoryId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSoftObjectPath GetAcceIconPath() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FinishDropListAnim();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EndNotifyMoneyAnim();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EndNotifyExpAnim();
    
    UFUNCTION(BlueprintCallable)
    bool CreateDropItemList(int32 create_num);
    
};

