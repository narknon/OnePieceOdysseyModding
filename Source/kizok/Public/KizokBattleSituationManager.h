#pragma once
#include "CoreMinimal.h"
#include "PLAYER_ID.h"
#include "EResists.h"
#include "ESITUATIONRIBBON.h"
#include "EEXCLAMATION.h"
#include "EDRAMATICAFFECTTYPE.h"
#include "ANOMALIES.h"
#include "UIFinisedDelegate.h"
#include "AllTriggeredControlFinishedDelegate.h"
#include "EnemyGroupCameraFinishedDelegate.h"
#include "SlipDamageCameraFinishedDelegate.h"
#include "SysMsgFinishedDelegate.h"
#include "DramaticAffect.h"
#include "DramaticAffectThing.h"
#include "BtlSituationText.h"
#include "AttackingAffectThing.h"
#include "SituationCameraParam.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "KizokBattleSituationManager.generated.h"

class UBtlCharactersParams;
class UBtlGroups;
class UBehaviorTreeComponent;
class UBlackboardComponent;

UCLASS(Blueprintable)
class KIZOK_API AKizokBattleSituationManager : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBehaviorTreeComponent* BehaviorTreeComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBlackboardComponent* BlackboardComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBtlCharactersParams* characters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBtlGroups* Groups;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDramaticAffectThing HandledAffect;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUIFinised OnUIFinished;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSysMsgFinished OnSysMsgFinished;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlipDamageCameraFinished OnSlipDamageCameraFinished;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEnemyGroupCameraFinished OnEnemyGroupCameraFinished;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAllTriggeredControlFinished OnAllTriggeredControlFinished;
    
public:
    AKizokBattleSituationManager();
    UFUNCTION(BlueprintCallable)
    bool WasMomentMeteoWeaponDownThisTurn();
    
    UFUNCTION(BlueprintCallable)
    bool WasMomentMeteoWeaponAscendThisCycle();
    
    UFUNCTION(BlueprintCallable)
    bool WasKickout();
    
    UFUNCTION(BlueprintCallable)
    TArray<int32> WasCriticalHitOccurredEx();
    
    UFUNCTION(BlueprintCallable)
    bool WasCriticalHitOccurred();
    
    UFUNCTION(BlueprintCallable)
    void TriggerTalkCameraQueue();
    
    UFUNCTION(BlueprintCallable)
    void TriggerLipSync(FName PCID, float Time);
    
    UFUNCTION(BlueprintCallable)
    void TitleWarningOff();
    
    UFUNCTION(BlueprintCallable)
    void TitleTextOff();
    
    UFUNCTION(BlueprintCallable)
    void StopLipSync(FName PCID);
    
    UFUNCTION(BlueprintCallable)
    void StartTitleFromInsertList(FName TextId, TArray<FString> insertList, bool bUseWarnFrame);
    
    UFUNCTION(BlueprintCallable)
    void StartTitle(FName TextId, bool bUseWarnFrame);
    
    UFUNCTION(BlueprintCallable)
    void StartSystemMessage();
    
    UFUNCTION(BlueprintCallable)
    void StartSuccessOrFailedSceneUI(bool bSuccess, FBtlSituationText desc);
    
    UFUNCTION(BlueprintCallable)
    void StartStatusIcon();
    
    UFUNCTION(BlueprintCallable)
    void StartKizunaGaugeUpUI();
    
    UFUNCTION(BlueprintCallable)
    void StartInfoText();
    
    UFUNCTION(BlueprintCallable)
    void StartFrameWidget();
    
    UFUNCTION(BlueprintCallable)
    void StartExclamationMark();
    
    UFUNCTION(BlueprintCallable)
    void StartDSceneWidgetAll();
    
    UFUNCTION(BlueprintCallable)
    bool SituationPercentCheck(float Percent);
    
    UFUNCTION(BlueprintCallable)
    void SituationEnd();
    
    UFUNCTION(BlueprintCallable)
    void SituationCameraSelfCustom(int32 Uid, float rotZ, float CranePitch, float craneArmLen, FVector tgt, float CamOfsY, float CamOfsZ);
    
    UFUNCTION(BlueprintCallable)
    void SituationCameraSelf(int32 Uid);
    
    UFUNCTION(BlueprintCallable)
    void SituationCameraReinforcement(int32 GroupID);
    
    UFUNCTION(BlueprintCallable)
    void SituationCameraPlayerSlipDamage(int32 Uid);
    
    UFUNCTION(BlueprintCallable)
    void SituationCameraNormal(int32 Uid);
    
    UFUNCTION(BlueprintCallable)
    void SituationCameraGroup(int32 Uid, int32 GroupID);
    
    UFUNCTION(BlueprintCallable)
    void SituationCameraEnemyGroup(int32 Uid);
    
    UFUNCTION(BlueprintCallable)
    void SituationCameraAll(int32 Uid);
    
    UFUNCTION(BlueprintCallable)
    void ShowSkipButtonGuide();
    
    UFUNCTION(BlueprintCallable)
    void SetTitleText(const FBtlSituationText& textParam);
    
    UFUNCTION(BlueprintCallable)
    void SetTimeSystemMessage(float visibleTimePerMessage);
    
    UFUNCTION(BlueprintCallable)
    void SetSystemText(TArray<FBtlSituationText> TextList);
    
    UFUNCTION(BlueprintCallable)
    void SetStatusAffectText(TArray<FBtlSituationText> TextList);
    
    UFUNCTION(BlueprintCallable)
    void SetStatusAffectParam(EDRAMATICAFFECTTYPE affectType, int32 Uid, TArray<FDramaticAffect> affectList, bool bPlayerBonus);
    
    UFUNCTION(BlueprintCallable)
    void SetMeteoWeaponTargetedGroup(int32 grpid);
    
    UFUNCTION(BlueprintCallable)
    void SetInfoText(TArray<FBtlSituationText> TextList);
    
    UFUNCTION(BlueprintCallable)
    void SetFrameType(ESITUATIONRIBBON frameType);
    
    UFUNCTION(BlueprintCallable)
    void SetForcedVictory();
    
    UFUNCTION(BlueprintCallable)
    void SetForcedLoose();
    
    UFUNCTION(BlueprintCallable)
    void SetFacialByUID(int32 Uid, FName FaceID);
    
    UFUNCTION(BlueprintCallable)
    void SetFacialByPCID(FName PCID, FName FaceID);
    
    UFUNCTION(BlueprintCallable)
    void SetExclamationParam(int32 Uid, EEXCLAMATION ExclamationType);
    
    UFUNCTION(BlueprintCallable)
    void SetEmphasizeTargetMarks(TArray<int32> Uids);
    
    UFUNCTION(BlueprintCallable)
    void SetDropFoodStuff(int32 Uid, int32 Mul);
    
    UFUNCTION(BlueprintCallable)
    void SetCategoryText(const FBtlSituationText& textParam);
    
    UFUNCTION(BlueprintCallable)
    void SetBeriMultipleRate(float Rate);
    
    UFUNCTION(BlueprintCallable)
    void ResetEmphasizeTargetMarks();
    
    UFUNCTION(BlueprintCallable)
    void RegistTalkCameraQueue(TArray<FSituationCameraParam> CamQueue);
    
    UFUNCTION(BlueprintCallable)
    void ProhibitKizunaMove(int32 Uid);
    
    UFUNCTION(BlueprintCallable)
    void ProhibitAlternateGroup(int32 GroupID);
    
    UFUNCTION(BlueprintCallable)
    void ProhibitAlternate(int32 Uid);
    
    UFUNCTION(BlueprintCallable)
    void PostSituationInitElapsedTime(const FString& str);
    
    UFUNCTION(BlueprintCallable)
    TArray<int32> PlayersListByGroupWithMoreEnemies();
    
    UFUNCTION(BlueprintCallable)
    TArray<int32> PlayersListByGroupWithFewerEnemies();
    
    UFUNCTION(BlueprintCallable)
    TArray<int32> PlayerListOfRecovered();
    
    UFUNCTION(BlueprintCallable)
    void PlayCommonJingleSE(FName Cue);
    
    UFUNCTION(BlueprintCallable)
    void PlayCommonBankSE(FName Cue);
    
    UFUNCTION(BlueprintCallable)
    void LiftAProhibitAlterGroup();
    
    UFUNCTION(BlueprintCallable)
    void LetEnemyEscapeAndAndRemoveUI(int32 Uid);
    
    UFUNCTION(BlueprintCallable)
    bool IsSanjiInHarlem();
    
    UFUNCTION(BlueprintCallable)
    bool IsRareEnemiesParty();
    
    UFUNCTION(BlueprintCallable)
    bool IsMonsterPoint();
    
    UFUNCTION(BlueprintCallable)
    bool IsDSceneApplied();
    
    UFUNCTION(BlueprintCallable)
    bool IsControllable(int32 Uid);
    
    UFUNCTION(BlueprintCallable)
    bool IsAnomaried(int32 Uid, ANOMALIES anomaly);
    
    UFUNCTION(BlueprintCallable)
    void InfoTextOff();
    
    UFUNCTION(BlueprintCallable)
    void HideSkipButtonGuide();
    
    UFUNCTION(BlueprintCallable)
    void HideLeftStatusUI();
    
    UFUNCTION(BlueprintCallable)
    bool HaveValidKizunaArts();
    
    UFUNCTION(BlueprintCallable)
    bool HaveFoodStuff(int32 Uid);
    
    UFUNCTION(BlueprintCallable)
    TArray<EResists> GetWeakResistanceThatAffectsDamage(int32 Uid);
    
    UFUNCTION(BlueprintCallable)
    FName GetTableID(int32 Uid);
    
    UFUNCTION(BlueprintCallable)
    int32 GetSurpState();
    
    UFUNCTION(BlueprintCallable)
    float GetResistsValue(int32 Uid, EResists resist);
    
    UFUNCTION(BlueprintCallable)
    TArray<int32> GetReinforcedGroupID();
    
    UFUNCTION(BlueprintCallable)
    TArray<int32> GetReinforcedEnemiesInGroup(int32 GroupIndex);
    
    UFUNCTION(BlueprintCallable)
    int32 GetRace(int32 Uid);
    
    UFUNCTION(BlueprintCallable)
    int32 GetProhibitAlternateGroup();
    
    UFUNCTION(BlueprintCallable)
    int32 GetPrimeSeed();
    
    UFUNCTION(BlueprintCallable)
    int32 GetOpponentsInGroup(PLAYER_ID Pid);
    
    UFUNCTION(BlueprintCallable)
    FName GetNameID(int32 Uid);
    
    UFUNCTION(BlueprintCallable)
    int32 GetMeteoWeaponsState();
    
    UFUNCTION(BlueprintCallable)
    TArray<EResists> GetLowestResistsWithoutAffectDamage(int32 Uid);
    
    UFUNCTION(BlueprintCallable)
    TArray<EResists> GetLowestResists(int32 Uid);
    
    UFUNCTION(BlueprintCallable)
    TMap<EResists, int32> GetListLowestResistsInEnemies();
    
    UFUNCTION(BlueprintCallable)
    TMap<EResists, int32> GetListHighestResistsInEnemies();
    
    UFUNCTION(BlueprintCallable)
    int32 GetLevel(PLAYER_ID Pid);
    
    UFUNCTION(BlueprintCallable)
    int32 GetLastActorUID4Result();
    
    UFUNCTION(BlueprintCallable)
    TMap<PLAYER_ID, int32> GetJoinGuests();
    
    UFUNCTION(BlueprintCallable)
    TMap<FName, int32> GetJoinEnemies();
    
    UFUNCTION(BlueprintCallable)
    TArray<int32> GetJoinedGuestInGroup(int32 GroupIndex);
    
    UFUNCTION(BlueprintCallable)
    TArray<int32> GetJoinedGuestGroupID();
    
    UFUNCTION(BlueprintCallable)
    int32 GetHPMax(PLAYER_ID Pid);
    
    UFUNCTION(BlueprintCallable)
    int32 GetHP(PLAYER_ID Pid);
    
    UFUNCTION(BlueprintCallable)
    TArray<EResists> GetHighestResists(int32 Uid);
    
    UFUNCTION(BlueprintCallable)
    int32 GetGroupIndex(PLAYER_ID Pid);
    
    UFUNCTION(BlueprintCallable)
    int32 GetFriendInGroup(PLAYER_ID Pid);
    
    UFUNCTION(BlueprintCallable)
    TArray<int32> GetExpectedReinforcementGroupID();
    
    UFUNCTION(BlueprintCallable)
    FName GetEnemyPartyId();
    
    UFUNCTION(BlueprintCallable)
    int32 GetCyclesBeforeReinforcementArrive();
    
    UFUNCTION(BlueprintCallable)
    int32 GetBattleCycle();
    
    UFUNCTION(BlueprintCallable)
    FAttackingAffectThing GetAtkAffectThing();
    
    UFUNCTION(BlueprintCallable)
    int32 GetAliveLeaderUIDFromEnemies();
    
    UFUNCTION(BlueprintCallable)
    void FrameWidgetOff();
    
    UFUNCTION(BlueprintCallable)
    void ForceCloseSystemMessage();
    
    UFUNCTION(BlueprintCallable)
    void FinishDScene();
    
    UFUNCTION(BlueprintCallable)
    void ExecuteJoinAnimation(PLAYER_ID Pid);
    
    UFUNCTION(BlueprintCallable)
    void EndTitle();
    
    UFUNCTION(BlueprintCallable)
    void EndStatusIcon();
    
    UFUNCTION(BlueprintCallable)
    void EndInfoText();
    
    UFUNCTION(BlueprintCallable)
    void EndFrameWidget();
    
    UFUNCTION(BlueprintCallable)
    void EndExclamationMark();
    
    UFUNCTION(BlueprintCallable)
    void EndDSceneWidgetAll();
    
    UFUNCTION(BlueprintCallable)
    void DispLeftStatusUI();
    
    UFUNCTION(BlueprintCallable)
    void DeployExtendedGuests();
    
    UFUNCTION(BlueprintCallable)
    bool DeployExtendedEnemies(int32 GroupIndex);
    
    UFUNCTION(BlueprintCallable)
    void ClearProhibits();
    
    UFUNCTION(BlueprintCallable)
    void ClearAttackAffects();
    
    UFUNCTION(BlueprintCallable)
    bool CannotEscape();
    
    UFUNCTION(BlueprintCallable)
    bool CanAct(int32 Uid);
    
    UFUNCTION(BlueprintCallable)
    void ApplyRulesImmediately(const FDramaticAffectThing& affect);
    
    UFUNCTION(BlueprintCallable)
    void ApplyDScene(const FDramaticAffectThing& affect);
    
    UFUNCTION(BlueprintCallable)
    void ApplyAtkAffectThing(FAttackingAffectThing AtkAffect);
    
    UFUNCTION(BlueprintCallable)
    void AddKizunaLineValueUp(int32 Add, FBtlSituationText desc);
    
    UFUNCTION(BlueprintCallable)
    void AddExpMultipleRateAtEndBattle(int32 Add);
    
};

