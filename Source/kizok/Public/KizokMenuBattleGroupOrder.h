#pragma once
#include "CoreMinimal.h"
#include "PLAYER_ID.h"
#include "EBtlMenuTargetSelectType.h"
#include "EBtlMenuDirectAnim.h"
#include "EBtlMainMesWindow.h"
#include "BtlMenuGroupMoveParam.h"
#include "BtlMenuGroup.h"
#include "BtlMenuStatus.h"
#include "BtlGuideMessageParam.h"
#include "BtlEnemyDispIcon.h"
#include "BtlPlayerDispStatus.h"
#include "BtlCharaIcon.h"
#include "UObject/NoExportTypes.h"
#include "KizokBattleMenuBase.h"
#include "KizokMenuBattleGroupOrder.generated.h"

class UKizokBattleCharaBase;
class UKizokBattleMenuManager;
class UKizokBattleStatusButton;
class UKizokMenuBattleCharaIcon;
class UKizokMenuBattleMain;
class UCurveFloat;

UCLASS(Blueprintable, EditInlineNew)
class KIZOK_API UKizokMenuBattleGroupOrder : public UKizokBattleMenuBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EBtlMainMesWindow, FBtlGuideMessageParam> ButtonGuideList;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UKizokMenuBattleCharaIcon> CharaIconWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector2D> IconOffsetList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefalutIconScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DefalutIconZOrder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* GroupMoveCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurFocusButtonGroupIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBtlMenuDirectAnim CurDierctAnimType;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBtlPlayerDispStatus> PlayerList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBtlEnemyDispIcon> EnemyList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBtlEnemyDispIcon> EnemyDirectAnimList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBtlEnemyDispIcon> EnemyKickOutTmpList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UKizokMenuBattleCharaIcon*> IconDirectionAnimList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKizokBattleMenuManager* m_BtlMenuManager;
    
public:
    UKizokMenuBattleGroupOrder();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void VsPartsPosDefault(int32 GroupID);
    
public:
    UFUNCTION(BlueprintCallable)
    void UpdateTargetFocusIcon(EBtlMenuTargetSelectType AttackRange, UKizokBattleCharaBase* CharaBase);
    
    UFUNCTION(BlueprintCallable)
    void UpdateStatusAll(const TArray<FBtlMenuStatus>& InStatusList);
    
    UFUNCTION(BlueprintCallable)
    void UpdateStatus(int32 InIndex, const FBtlMenuStatus& InStatus);
    
    UFUNCTION(BlueprintCallable)
    void UpdateSPRecover(PLAYER_ID playerID, int32 last, int32 Now, int32 Max);
    
    UFUNCTION(BlueprintCallable)
    void UpdateSPDifference(int32 CostSP);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateDispStatus(const int32& InGroupOrder, const FBtlMenuStatus& InStatus);
    
public:
    UFUNCTION(BlueprintCallable)
    void UpdateDispRingLamp();
    
    UFUNCTION(BlueprintCallable)
    void UpdateDispMoveEnableByGroupId(int32 GroupID);
    
    UFUNCTION(BlueprintCallable)
    void UpdateDispMoveEnable();
    
    UFUNCTION(BlueprintCallable)
    void UpdateDispAll();
    
protected:
    UFUNCTION(BlueprintCallable)
    void UpdateCharaIcon();
    
public:
    UFUNCTION(BlueprintCallable)
    void UpdateAllTurnList(bool bActEnd);
    
    UFUNCTION(BlueprintCallable)
    void StopSituationIconAll();
    
    UFUNCTION(BlueprintCallable)
    void SituationTargetMarkAllOff();
    
    UFUNCTION(BlueprintCallable)
    void SetWeakResistNormalAttackEnemyList();
    
    UFUNCTION(BlueprintCallable)
    void SetWeakResistEnemyList(FName SkillID);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetVisibleVsWBP(int32 GroupID, bool bEnemysFree, bool bVisible);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetVisibleSituationTargetMark(int32 GroupID, bool bVisible);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetVisibleMoveEnableWBP(int32 GroupID, bool bVisible);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetVisibleGuestStatus(bool bVisible, int32 GroupID, int32 OrderInGroup);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetTextSituationTargetMark(int32 GroupID, bool bVisibleText, bool bChanceText);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetTargetAnimStatus(int32 GroupID, int32 OrderInGroup, bool bFocus, bool bGuest);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetPlayerGroupMultiDisp(int32 GroupID, bool bMultiPlayerInGroup);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetFocusCharaIcon(const UKizokMenuBattleCharaIcon* CharaIcon, bool bFocus);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetDispPreKickOut(const TArray<FBtlMenuGroupMoveParam>& kickOutList);
    
    UFUNCTION(BlueprintCallable)
    void SetDispPostKickOut();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RemoveRootIcon(const UKizokMenuBattleCharaIcon* CharaIcon);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RegistGuestButton(int32 GroupID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayTurnStartAnimGuestStatus(int32 GroupID, int32 OrderInGroup, bool bFocus);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayTurnChangeAnim();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayTopCharaIcon(const UKizokMenuBattleCharaIcon* CharaIcon);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayTargetAnimPlayerStatus(int32 GroupID, int32 OrderInGroup, bool bFocus);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayTargetAnimGuestStatus(int32 GroupID, int32 OrderInGroup, bool bFocus);
    
public:
    UFUNCTION(BlueprintCallable)
    void PlaySituationTargetMark(int32 GroupID, bool bVisibleText, bool bChanceText);
    
    UFUNCTION(BlueprintCallable)
    void PlaySituationIconAnim(const TArray<FBtlMenuGroup>& charaList, TArray<FText> TextList, bool bPlayerBonus);
    
    UFUNCTION(BlueprintCallable)
    void PlayPackQueueIconAnim();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayOutAnim(const int32 goroupID, bool bEnemysFree);
    
    UFUNCTION(BlueprintCallable)
    void PlayKickOutAnimatin(const TArray<FBtlMenuGroupMoveParam>& kickOutList);
    
protected:
    UFUNCTION(BlueprintCallable)
    void PlayInAnimEnemyGroupAll();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayInAnimEnemyGroup(int32 GroupID, bool bEnemysFree, bool bVisibleVsWBP);
    
public:
    UFUNCTION(BlueprintCallable)
    void PlayGroupMoveAnim(const FBtlMenuGroup& GroupParam);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayGroupDispAnim(int32 GroupID, int32 DispNum);
    
public:
    UFUNCTION(BlueprintCallable)
    void PlayDirectTurnStartAnim();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayDeadAnimPlayerStatus(bool bGuest, int32 GroupID, int32 OrderInGroup);
    
public:
    UFUNCTION(BlueprintCallable)
    void PlayCharaDeadAnim(const TArray<FBtlMenuGroup>& List);
    
    UFUNCTION(BlueprintCallable)
    void PlayActionEndAnim();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OpenPartsAndRegistPlayerButton(int32 GroupID);
    
public:
    UFUNCTION(BlueprintCallable)
    bool IsExistDispTurnList();
    
    UFUNCTION(BlueprintCallable)
    void InitSetting();
    
protected:
    UFUNCTION(BlueprintCallable)
    void InitOrderParts();
    
    UFUNCTION(BlueprintCallable)
    void InitGuestOrderParts();
    
    UFUNCTION(BlueprintCallable)
    void InitEnemyIcon();
    
    UFUNCTION(BlueprintCallable)
    void InitButtonGroupSelectMode();
    
private:
    UFUNCTION(BlueprintCallable)
    void InitAllEnemyDisp();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UKizokBattleStatusButton* GetWidgetPlayerStatus(int32 GroupID, int32 OrderInGroup, bool bGuest);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UKizokMenuBattleCharaIcon* GetWidgetEnemyIcon(int32 GroupID, int32 OrderInGroup);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FVector2D GetPlayerWidgetPos(const UKizokBattleStatusButton* PlayerWidget, int32 GroupID);
    
protected:
    UFUNCTION(BlueprintCallable)
    FVector2D GetOffsetPosByTurnOrder(int32 TurnOrder);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FVector2D GetGroupWidgetPos(int32 GroupID);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FVector2D GetEnemyIconPos(int32 GroupID, int32 OrderInGroup);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    float GetCanvasAngle();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UKizokMenuBattleMain* GetBattleMainWidget();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetBanquetBonus();
    
    UFUNCTION(BlueprintCallable)
    void ForceFinishedIconDirectAnim();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ForceFinishedDirectAnim();
    
    UFUNCTION(BlueprintCallable)
    void FocusTargetAnim(TArray<UKizokBattleCharaBase*> FocusList);
    
    UFUNCTION(BlueprintCallable)
    void FocusSetPartyChangeAnim();
    
    UFUNCTION(BlueprintCallable)
    void FocusLostTargetIconAll();
    
    UFUNCTION(BlueprintCallable)
    void FocusLostStatusListAll();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DispSPRecoverGauge(PLAYER_ID playerID, int32 last, int32 Now, int32 Max);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DispReinforcementEnemyIcon(const FBtlCharaIcon& icon_info);
    
protected:
    UFUNCTION(BlueprintCallable)
    void DirectionAnimEndNotify(EBtlMenuDirectAnim AnimType);
    
    UFUNCTION(BlueprintCallable)
    void CurPlayerFocus();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CollapsedPlayerMoveEnableUI();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CollapsedDispStatus(const int32& InGroupOrder, const FBtlMenuStatus& InStatus);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AddRootIcon(const UKizokMenuBattleCharaIcon* CharaIcon);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AddChildCharaIcon(const UKizokMenuBattleCharaIcon* CharaIcon, int32 TurnOrderIndex);
    
};

