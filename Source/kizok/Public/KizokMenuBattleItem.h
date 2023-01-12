#pragma once
#include "CoreMinimal.h"
#include "PLAYER_ID.h"
#include "EBTL_NEW_TUTORIAL_PHASE_ID.h"
#include "EBtlMenuSystemMesType.h"
#include "EBattleMenuSeq.h"
#include "EBtlMenuCameraType.h"
#include "EBtlMenuTargetRange.h"
#include "EBtlMainMesWindow.h"
#include "EKizokItemMenuHealResult.h"
#include "KizokBtlItemEffect.h"
#include "KizokItemDispData.h"
#include "KizokBtlItemTabText.h"
#include "KizokItemMenu.h"
#include "KizokMenuBattleItem.generated.h"

class UKizokMenuBattlePartySelect;
class UKizokMenuBattleMain;
class UKizokTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class KIZOK_API UKizokMenuBattleItem : public UKizokItemMenu {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UKizokMenuBattlePartySelect* StatusWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKizokBtlItemTabText> TabTextList;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOperateItemList;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool EnableCancelButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBattleMenuSeq NextBattleSeq;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UKizokMenuBattleMain* m_BattleMainWidget;
    
public:
    UKizokMenuBattleItem();
protected:
    UFUNCTION(BlueprintCallable)
    void ShowSystemMessage(EBtlMenuSystemMesType systemMesType);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetTargetRange(EBtlMenuTargetRange Type);
    
    UFUNCTION(BlueprintCallable)
    void SetItemDecision(bool dec);
    
    UFUNCTION(BlueprintCallable)
    void SetBattleMainWidget(UKizokMenuBattleMain* Widget);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SelectedItem(FName ItemId);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OpenWindow(UKizokMenuBattleMain* parentWindow);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OpenStatusWindow();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OpenPartySelectWindow();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUseBattle(FName item_id) const;
    
    UFUNCTION(BlueprintCallable)
    bool IsTutorialUseItem();
    
    UFUNCTION(BlueprintCallable)
    bool IsRecoveryAilment(PLAYER_ID PLAYER_ID, FKizokBtlItemEffect& effect_info);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsItemDecision();
    
protected:
    UFUNCTION(BlueprintCallable)
    void InitTabText(UKizokTextBlock* text_block, int32 tab_index);
    
    UFUNCTION(BlueprintCallable)
    EBTL_NEW_TUTORIAL_PHASE_ID GetTutorialPhaseID();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTabTextListNum() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    uint8 GetTabTextListIndex(int32 tab_index) const;
    
    UFUNCTION(BlueprintCallable)
    EKizokItemMenuHealResult GetPreHealResult(PLAYER_ID PLAYER_ID);
    
    UFUNCTION(BlueprintCallable)
    UKizokMenuBattlePartySelect* GetPartySelectWidget();
    
    UFUNCTION(BlueprintCallable)
    TArray<PLAYER_ID> GetMainPartyList();
    
    UFUNCTION(BlueprintCallable)
    bool GetItemEffetInfo(FName in_item_id, FKizokBtlItemEffect& out_info);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FKizokItemDispData GetFocusItemData() const;
    
public:
    UFUNCTION(BlueprintCallable)
    void ExecuteItemAction(const FString& TargetName);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DecidePartyTargetSelect(PLAYER_ID playerID, const FString& selectPlayerName);
    
    UFUNCTION(BlueprintCallable)
    void DecideItemSelect();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CloseWindow();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CloseStatusWindow();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ChangeTargetSelect(EBtlMenuTargetRange TargetRange);
    
public:
    UFUNCTION(BlueprintCallable)
    void ChangeCameraType(EBtlMenuCameraType Type);
    
protected:
    UFUNCTION(BlueprintCallable)
    void ChangeButtonGuide(EBtlMainMesWindow MessageType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CancelPartyTargetSelect();
    
    UFUNCTION(BlueprintCallable)
    void CancelItemSelect();
    
};

