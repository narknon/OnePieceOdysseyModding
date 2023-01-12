#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PLAYER_ID.h"
#include "EBtlMenuTargetSelectType.h"
#include "EBtlMenuGruopType.h"
#include "EBTL_NEW_TUTORIAL_ID.h"
#include "EBtlMenuSystemMesType.h"
#include "EBattleMainCmdType.h"
#include "EBattleMenuSeq.h"
#include "EBattleSubCmdType.h"
#include "EBtlMenuDirectAnim.h"
#include "EBtlMenuCameraType.h"
#include "EBtlMenuTargetRange.h"
#include "EBtlMenuStatusIconType.h"
#include "EBtlMenuGroupSelectMode.h"
#include "EBtlMainMesWindow.h"
#include "EKizokCharaIconType.h"
#include "BtlMenuGroupPos.h"
#include "BtlMenuGroupMoveParam.h"
#include "BtlMenuGroup.h"
#include "BtlMenuSkillInfo.h"
#include "KiznaChargeAnimParm.h"
#include "BtlMenuStatus.h"
#include "BtlGuideMessageParam.h"
#include "BtlMenuTargetList.h"
#include "BattleMainCmd.h"
#include "BtlGroupIconTexture.h"
#include "BtlCharaIcon.h"
#include "UObject/NoExportTypes.h"
#include "KizokBattleMenuBase.h"
#include "KizokMenuBattleMain.generated.h"

class UKizokUserWidget;
class UKizokButtonWidget;
class UKizokBattleCharaBase;
class AKizokNewBattleMode;
class UKizokBattleMenuManager;
class UKizokBattleMenuFieldIcon;
class UKizokMenuBattleGroupOrder;
class UKizokMenuBattleGroupIcon;
class UKizokMenuBattleCmd;
class UKizokMenuBattleArtsSelect;
class UKizokMenuBattlePartySelect;
class UKizokMenuBattlePartyChange;
class UKizokMenuBattleMainCmd;
class UKizokMenuBattleKiznaCharge;
class UKizokMenuBattleItem;
class UKizokMenuBattleSubCmd;
class UKizokMenuBattleSkill;
class UCanvasPanel;
class UDataTable;

UCLASS(Blueprintable, EditInlineNew)
class KIZOK_API UKizokMenuBattleMain : public UKizokBattleMenuBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBattleMainCmd> MainCommand;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EBtlMenuGruopType> GroupColorType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EBtlMenuStatusIconType, FSoftObjectPath> StatusIconList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<PLAYER_ID, FSoftObjectPath> CharaIconList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath EnemyIconPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EBtlMainMesWindow, FBtlGuideMessageParam> ButtonGuideList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EBtlMenuTargetRange, FSoftObjectPath> TargetRangeImagePathList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UKizokMenuBattleMainCmd* CmdSelectWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanel* PlayerFieldIconList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanel* EnemyFieldIconList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UKizokMenuBattleGroupIcon> IconWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UKizokBattleMenuFieldIcon> FieldIconWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UKizokButtonWidget> SkillListWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* TutorialTextTableAsset;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBattleMenuSeq CurrentSeq;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EnemyGroupID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool EnableChangeSeq;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool EnableBattleEscape;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName HeaderTextName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBtlMenuGroupSelectMode TargetSelectMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableCmdOperateChara;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCurrentEnemyTurn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBtlMenuGroup CurCharaGroupParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DirectTelopVisibleWaitTime;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBtlGroupIconTexture> m_GroupIconList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKizokBattleMenuManager* m_BtlMenuManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBtlMenuTargetList m_SelectTargetList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UKizokBattleMenuFieldIcon*> SkillFieldIcon;
    
public:
    UKizokMenuBattleMain();
protected:
    UFUNCTION(BlueprintCallable)
    void UpdateZOrderFieldIconAll();
    
    UFUNCTION(BlueprintCallable)
    void UpdateVisibleFieldIconAll(int32 visible_group_id);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateTurnGaugeTopIcon(const FBtlCharaIcon& Param);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateTurnGaugeDispIconAll(const TArray<FBtlCharaIcon>& List, bool bUseTopIcon);
    
    UFUNCTION(BlueprintCallable)
    void UpdateTurnGauge();
    
    UFUNCTION(BlueprintCallable)
    void UpdateTopOrderCharaParam();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateTargetFocusIcon(EBtlMenuTargetSelectType AttackRange, UKizokBattleCharaBase* CharaBase);
    
    UFUNCTION(BlueprintCallable)
    void UpdateStatusWidgetEnemyIcon();
    
public:
    UFUNCTION(BlueprintCallable)
    void UpdateStatusWBP(int32 Index);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateStatusFocusPlayer();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateStatusCharaIcon();
    
    UFUNCTION(BlueprintCallable)
    void UpdateStatusAll();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateSituationResult(bool bSuccess, const FText& descript);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateSelectSkillCost(int32 CostSP);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateRecommendSkill(PLAYER_ID playerID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateRapidBattle(bool Enable);
    
public:
    UFUNCTION(BlueprintCallable)
    void UpdatePowerMapIconAll();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdatePowerMapDispIconAll(const TArray<FBtlCharaIcon>& List);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdatePlayerChangeGuidePos(FVector2D Pos);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateHeaderText(const EBattleMenuSeq next_seq);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateFocusSkillID(FName SkillID);
    
protected:
    UFUNCTION(BlueprintCallable)
    void UpdateFocusGroup();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateEnemyRingLamp();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateDispStatusAll();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateDispStatus(int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateDispMainCommand(bool bActed);
    
    UFUNCTION(BlueprintCallable)
    void UpdateAttackTarget();
    
public:
    UFUNCTION(BlueprintCallable)
    void StopWidgetInput();
    
    UFUNCTION(BlueprintCallable)
    void StopSkillFieldIconAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StopSituationIconAll();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StopPlayerCurrentSkillName();
    
    UFUNCTION(BlueprintCallable)
    void StopPlayerAutoAction();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StopInvolveAnimation();
    
    UFUNCTION(BlueprintCallable)
    void StopFieldIconAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StopAutoActionWidget();
    
    UFUNCTION(BlueprintCallable)
    void StartTutorialMenu(EBTL_NEW_TUTORIAL_ID tutorialType);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartNextSeq(const EBattleMenuSeq next_seq);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartAutoActionWidget();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SkipButtonGuideWindow();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SituationTargetMarkOff();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowSystemMessage(EBtlMenuSystemMesType message_type);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetVisibleWidget(const EBattleMenuSeq SeqType, const bool bVisible);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetVisibleTurnGauge(bool bVisible);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetVisibleStatusMenu(bool bVisible);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetVisibleSituationMenu(bool bVisible);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetVisiblePowerMap(bool bVisible);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetVisibilityHeaderText(bool is_visible);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetVisibilityAutoActionWidget(bool bVisible);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetStatusCheckButtonGuide();
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetSkillTargetList(FName skill_id, EBtlMenuTargetRange target_type);
    
    UFUNCTION(BlueprintCallable)
    void SetPartyChangeInfo(UKizokMenuBattlePartyChange* party_change_widget);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetKickOutWait(const TArray<FBtlMenuGroupMoveParam>& kickOutList);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetItemTargetList(FName item_id, UKizokMenuBattleItem* item_widget);
    
public:
    UFUNCTION(BlueprintCallable)
    EBtlMenuTargetRange SetItemTarget(FName ItemId, UKizokMenuBattleItem* Widget);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetInputEnableFromSeq(bool bInEnable);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetHeaderTextEnemyTurn(bool bTextID);
    
    UFUNCTION(BlueprintCallable)
    void SetHeaderText(const FName header_text);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetFocusGroup(EBtlMenuGruopType GroupID);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetEnemyRingLamp();
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetEnemyGroupNo(int32 no);
    
    UFUNCTION(BlueprintCallable)
    void SetDirectionAnimType(EBtlMenuDirectAnim AnimType);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentAttackTarget();
    
    UFUNCTION(BlueprintCallable)
    void SetCameraLock(bool is_lock);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetButtonGuideWindow(EBtlMainMesWindow message_type);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetArtsTargetList(FName ArtsId, EBtlMenuTargetRange TargetRange);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetAllFieldIconAnim(bool is_focus);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SelectedSkill(FName SkillID, EBtlMenuTargetRange TargetType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SelectedKizunaArts(FName SkillID, EBtlMenuTargetRange TargetType);
    
protected:
    UFUNCTION(BlueprintCallable)
    void ResultOpenWidget();
    
public:
    UFUNCTION(BlueprintCallable)
    void ReStartWidgetInput();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RegisterButtonFromFieldEnemy();
    
public:
    UFUNCTION(BlueprintCallable)
    void ReflectChangeActionPlayer();
    
protected:
    UFUNCTION(BlueprintCallable)
    void PlayVoiceAttackDisableEnemy(EBtlMenuSystemMesType InMessageType);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayTurnSkipAnim();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayTurnGaugePackQueue();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayTurnChangePhase2();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayTurnChangePhase1();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlaySituationTargetMark(int32 GroupID, bool bVisibleText, bool bChanceText);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlaySituationIconAnim(const TArray<FBtlMenuGroup>& charaList, const TArray<FText>& TextList, bool bPlayerBonus);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayPreCmdActionAnim();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayPlayerCurrentSkillName();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayPartyChangeAnim(const FBtlMenuGroupPos& Param, PLAYER_ID playerID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayKizunaChargeAnim(const FKiznaChargeAnimParm& List);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayKickOutAnim(const TArray<FBtlMenuGroupMoveParam>& kickOutList);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayInvolveAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayDirectAnimFieldIcon(bool bPlayerList, EBtlMenuDirectAnim AnimType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayCharaDeadAnim(const TArray<FBtlMenuGroup>& List);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OutRapidBattle();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OpenSkillWindow();
    
    UFUNCTION(BlueprintCallable)
    void OpenKiznaChargeWindow();
    
    UFUNCTION(BlueprintCallable)
    void OpenItemWindow();
    
    UFUNCTION(BlueprintCallable)
    void OpenArtsWindow();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUpdateStatusEnemyIcon(EBtlMenuTargetSelectType target_range, const FText& focus_name, int32 group_id);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSkillChangeSeq();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnResultOpenWidget();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnOpenTacticsWindow();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnFinishedDirectionAnimation(EBtlMenuDirectAnim AnimType);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEscapeOpenWidget();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDecideMainCmd(EBattleMainCmdType command_type);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAtkModeChange();
    
public:
    UFUNCTION(BlueprintCallable)
    void NotifyCameraMove();
    
protected:
    UFUNCTION(BlueprintCallable)
    bool IsVisibleGroupChangeCursor();
    
    UFUNCTION(BlueprintCallable)
    bool IsViewFocusTarget();
    
    UFUNCTION(BlueprintCallable)
    bool IsTargetRangeSameGroupOnly();
    
    UFUNCTION(BlueprintCallable)
    bool IsTargetRangeEnemy();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsSelectedNormalAttack();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSelectableTacticsPartyChange() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSelectableTacticsEscape() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsPlayingBtlText();
    
protected:
    UFUNCTION(BlueprintCallable)
    bool IsEnableRapidBattle();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsCurrentSeqMainCmd();
    
protected:
    UFUNCTION(BlueprintCallable)
    bool IsCurDirectAnimNone();
    
public:
    UFUNCTION(BlueprintCallable)
    bool IsCurCorpsPlayerSide();
    
    UFUNCTION(BlueprintCallable)
    bool IsBlowAttack();
    
protected:
    UFUNCTION(BlueprintCallable)
    bool IsAttackTargetTypeSingle();
    
    UFUNCTION(BlueprintCallable)
    bool IsAttackTargetRangeAll();
    
    UFUNCTION(BlueprintCallable)
    EBtlMenuSystemMesType IsAttackableEnemy();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsAnyPlayingDirectAnim();
    
    UFUNCTION(BlueprintCallable)
    bool IsAnyExistPlayerStatusEffect();
    
    UFUNCTION(BlueprintCallable)
    bool IsActionableStateCurrentPlayer();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InVisibleRapidBattle();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InRapidBattle();
    
protected:
    UFUNCTION(BlueprintCallable)
    void InitMenu();
    
    UFUNCTION(BlueprintCallable)
    void InitMainAttackCmd();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InitDataTable(AKizokNewBattleMode* BtlGameMode);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GroupMoveNotify(const FBtlMenuGroup& GroupParam);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GroupMoveAnimNotify(const FBtlMenuGroupPos& CurParam, const FBtlMenuGroupPos& NextParam);
    
protected:
    UFUNCTION(BlueprintCallable)
    TArray<FText> GetViewTargeNametList();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTurnNum() const;
    
public:
    UFUNCTION(BlueprintCallable)
    FSoftObjectPath GetTargetRangeImagePath(EBtlMenuTargetRange TargetRange);
    
protected:
    UFUNCTION(BlueprintCallable)
    void GetTargetIconList(TArray<FBtlMenuGroupPos>& List);
    
    UFUNCTION(BlueprintCallable)
    TArray<UKizokBattleCharaBase*> GetTargetCharaList();
    
public:
    UFUNCTION(BlueprintCallable)
    FSoftObjectPath GetStatusIconPath(EBtlMenuStatusIconType Type);
    
protected:
    UFUNCTION(BlueprintCallable)
    TArray<FBtlMenuStatus> GetStatusDispList();
    
    UFUNCTION(BlueprintCallable)
    FBtlMenuStatus GetStatusDispIcon(int32 Index);
    
public:
    UFUNCTION(BlueprintCallable)
    FSoftObjectPath GetPlayerIconPath(PLAYER_ID playerID, EKizokCharaIconType IconType);
    
    UFUNCTION(BlueprintCallable)
    FSoftObjectPath GetPlayerFacePath(PLAYER_ID playerID);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetHeaderText() const;
    
    UFUNCTION(BlueprintCallable)
    FText GetFocusTargetName();
    
    UFUNCTION(BlueprintCallable)
    EBtlMenuTargetRange GetCurrentTargetRange();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    PLAYER_ID GetCurrentSelectPlayer();
    
public:
    UFUNCTION(BlueprintCallable)
    FSoftObjectPath GetCurrentCharaIconPath();
    
protected:
    UFUNCTION(BlueprintCallable)
    bool GetCurPlayerName(FString& OutName);
    
    UFUNCTION(BlueprintCallable)
    EBtlMenuDirectAnim GetCurDirectAnim();
    
public:
    UFUNCTION(BlueprintCallable)
    void GetCurCharaIDAndFlagTexPath(PLAYER_ID& playerID, FSoftObjectPath& texPath);
    
    UFUNCTION(BlueprintCallable)
    FText GetCurCharaActionExecName();
    
    UFUNCTION(BlueprintCallable)
    UKizokBattleMenuManager* GetBtlMenuManager();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UKizokMenuBattleSubCmd* GetBattleSubCmdWidget();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UKizokMenuBattleSkill* GetBattleSkillWidget();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UKizokMenuBattlePartySelect* GetBattlePartySelectWidget();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UKizokMenuBattleKiznaCharge* GetBattleKiznaChargeWidget();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UKizokMenuBattleItem* GetBattleItemWidget();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UKizokMenuBattleGroupOrder* GetBattleGroupOrderWidget();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UKizokMenuBattleCmd* GetBattleCmdWidget();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UKizokMenuBattleArtsSelect* GetBattleArtsSelectWidget();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetBanquetBonusCount();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ForceFinishedDirectAnimNotify();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FocusSetPartyChangeAnim();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FocusPowerMapPlayer(const FBtlCharaIcon& Param);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FocusPlayerIcon(int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FocusLostTargetIconAll();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FocusFieldIconGroup(int32 group_id);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FinishedKickOutAnim();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FinishedDirectAnim();
    
public:
    UFUNCTION(BlueprintCallable)
    void ExecuteItemAction(const FString& TargetName);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ExecSkillAction(const FString& TargetName);
    
protected:
    UFUNCTION(BlueprintCallable)
    void ExecPartyChange(PLAYER_ID main_player, PLAYER_ID sub_player);
    
    UFUNCTION(BlueprintCallable)
    void ExecAttackAction();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EndCurrentSeq();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DispSPRecoverGauge(PLAYER_ID playerID, int32 last, int32 Now, int32 Max);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DispReinforcementEnemyIcon(const FBtlCharaIcon& icon_info);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DestroyPlayerIconWidget();
    
    UFUNCTION(BlueprintCallable)
    void DestroyPlayerIcon();
    
public:
    UFUNCTION(BlueprintCallable)
    void DestroyFieldIcon();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DestroyEnemyGroupList();
    
    UFUNCTION(BlueprintCallable)
    void DecideMainCmd(EBattleMainCmdType command_type);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CurPlayerFocus();
    
    UFUNCTION(BlueprintCallable)
    void CreateSkillSelectFieldGruopIcon(FBtlMenuSkillInfo SkillInfo);
    
protected:
    UFUNCTION(BlueprintCallable)
    void CreatePlayerIcon();
    
    UFUNCTION(BlueprintCallable)
    void CreateFieldGruopIcon();
    
    UFUNCTION(BlueprintCallable)
    void CreateCurCharaFieldIcon();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CloseTacticsWindow();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CloseSkillWindow();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CloseSkillPartySelect();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CloseItemWindow();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ClearSkipButtonGuideWindow();
    
    UFUNCTION(BlueprintCallable)
    void ClearSkillFieldIconWidget();
    
protected:
    UFUNCTION(BlueprintCallable)
    void ClearEnemyFieldIconList();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ChangeSequence(const EBattleMenuSeq next_seq);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ChangeSeqSelectItem();
    
protected:
    UFUNCTION(BlueprintCallable)
    void ChangePlayerIcon();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ChangeHeaderText(const FName Text, bool bTextID);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ChangeGroupSelectMode(EBtlMenuGroupSelectMode select_mode);
    
private:
    UFUNCTION(BlueprintCallable)
    void ChangeFocusMember(int32 InFocusMemberIndex);
    
public:
    UFUNCTION(BlueprintCallable)
    void ChangeEnemyTurnHeaderText();
    
protected:
    UFUNCTION(BlueprintCallable)
    void ChangeCameraType(EBtlMenuCameraType Type);
    
public:
    UFUNCTION(BlueprintCallable)
    void ChangeBlowAttack();
    
protected:
    UFUNCTION(BlueprintCallable)
    void ChangeAttackTarget(UKizokButtonWidget* button_widget);
    
    UFUNCTION(BlueprintCallable)
    void CancelAttackAction();
    
public:
    UFUNCTION(BlueprintCallable)
    void CallWidgetAnimEnd(EBtlMenuDirectAnim AnimType);
    
    UFUNCTION(BlueprintCallable)
    void CallTacticsCmd(EBattleSubCmdType command_type);
    
protected:
    UFUNCTION(BlueprintCallable)
    void ApplyTarget(const FString& target_name);
    
public:
    UFUNCTION(BlueprintCallable)
    void AddChild(UKizokUserWidget* Widget, int32 ZOrder);
    
};

