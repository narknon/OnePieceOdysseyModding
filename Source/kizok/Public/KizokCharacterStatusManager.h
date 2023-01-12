#pragma once
#include "CoreMinimal.h"
#include "PLAYER_ID.h"
#include "ANOMALIES.h"
#include "KizokPartyMoneyDelegateDelegate.h"
#include "KizokPlayerUserStatusUp.h"
#include "KizokTablePlayerGrowParam.h"
#include "UObject/Object.h"
#include "KizokCharacterStatusManager.generated.h"

UCLASS(Blueprintable)
class KIZOK_API UKizokCharacterStatusManager : public UObject {
    GENERATED_BODY()
public:
    UKizokCharacterStatusManager();
    UFUNCTION(BlueprintCallable)
    void SetRapidBattleEnable(bool bRapid);
    
    UFUNCTION(BlueprintCallable)
    int32 SetPlayerSP_ByName(FName Pid, int32 immediate);
    
    UFUNCTION(BlueprintCallable)
    int32 SetPlayerSP(PLAYER_ID ID, int32 immediate);
    
    UFUNCTION(BlueprintCallable)
    void SetPlayerRestrictionOrderAll();
    
    UFUNCTION(BlueprintCallable)
    void SetPlayerRestrictionOrder(PLAYER_ID chara_type, bool is_change);
    
    UFUNCTION(BlueprintCallable)
    void SetPlayerOtherRestrictionOrder(PLAYER_ID chara_type);
    
    UFUNCTION(BlueprintCallable)
    int32 SetPlayerLevel(PLAYER_ID ID, int32 Level);
    
    UFUNCTION(BlueprintCallable)
    int32 SetPlayerHP_ByName(FName Pid, int32 immediate);
    
    UFUNCTION(BlueprintCallable)
    int32 SetPlayerHP(PLAYER_ID ID, int32 immediate);
    
    UFUNCTION(BlueprintCallable)
    bool SetPartyOrder(TMap<PLAYER_ID, int32> Order);
    
    UFUNCTION(BlueprintCallable)
    bool SetGuestLevel(PLAYER_ID _player_id, int32 Level);
    
    UFUNCTION(BlueprintCallable)
    void SetBattlePlacementCode(int32 code);
    
    UFUNCTION(BlueprintCallable)
    void SetBanquetBonus(int32 Count);
    
    UFUNCTION(BlueprintCallable)
    void SetAutoBattleEnable(bool isAuto);
    
    UFUNCTION(BlueprintCallable)
    void RemovePartyMoneyEvent(FKizokPartyMoneyDelegate InEvent);
    
    UFUNCTION(BlueprintCallable)
    void RemoveKArtsObtainFlag(FName KArtsID);
    
    UFUNCTION(BlueprintCallable)
    void RecoveryHPAllPartyMember();
    
    UFUNCTION(BlueprintCallable)
    bool PlayerSkill_WasSkillRankReleased(FName skill_id, int32 Rank);
    
    UFUNCTION(BlueprintCallable)
    bool PlayerSkill_WasSkillRankFixed(FName skill_id, int32 Rank);
    
    UFUNCTION(BlueprintCallable)
    bool PlayerSkill_UnreleaseSkillRank(FName skill_id, int32 Rank);
    
    UFUNCTION(BlueprintCallable)
    bool PlayerSkill_UnfixSkillRank(FName skill_id, int32 Rank);
    
    UFUNCTION(BlueprintCallable)
    int32 PlayerSkill_SetCube(FName skill_id, int32 cubes);
    
    UFUNCTION(BlueprintCallable)
    bool PlayerSkill_ResetObtainMark(FName skill_id);
    
    UFUNCTION(BlueprintCallable)
    int32 PlayerSkill_RemoveCubes(FName skill_id);
    
    UFUNCTION(BlueprintCallable)
    bool PlayerSkill_ReleaseSkillRank(FName skill_id, int32 Rank);
    
    UFUNCTION(BlueprintCallable)
    bool PlayerSkill_IsLearnWithRank(PLAYER_ID PLAYER_ID, FName skill_id, int32 Rank);
    
    UFUNCTION(BlueprintCallable)
    bool PlayerSkill_IsLearn(PLAYER_ID PLAYER_ID, FName skill_id);
    
    UFUNCTION(BlueprintCallable)
    bool PlayerSkill_HasObtainMark(FName skill_id);
    
    UFUNCTION(BlueprintCallable)
    int32 PlayerSkill_GetItemLevel();
    
    UFUNCTION(BlueprintCallable)
    int32 PlayerSkill_GetFittedCube(FName skill_id);
    
    UFUNCTION(BlueprintCallable)
    int32 PlayerSkill_GetCookingLevel();
    
    UFUNCTION(BlueprintCallable)
    int32 PlayerSkill_GetAccessoryLevel();
    
    UFUNCTION(BlueprintCallable)
    void PlayerSkill_ForgetSkillsWhenEvent(bool IsStayStrongNewGame);
    
    UFUNCTION(BlueprintCallable)
    void PlayerSkill_ForceSkillLearn(PLAYER_ID PLAYER_ID, FName skill_id, bool isMonitorOut);
    
    UFUNCTION(BlueprintCallable)
    bool PlayerSkill_ForceLearnSkillRank(FName skill_id, int32 Rank);
    
    UFUNCTION(BlueprintCallable)
    bool PlayerSkill_FixSkillRank(FName skill_id, int32 Rank);
    
    UFUNCTION(BlueprintCallable)
    bool PlayerLevelUp_PlayerIDValue(PLAYER_ID _player_id);
    
    UFUNCTION(BlueprintCallable)
    bool PlayerLevelUp(FName _player_id);
    
    UFUNCTION(BlueprintCallable)
    bool LeaveParty(PLAYER_ID _player_id);
    
    UFUNCTION(BlueprintCallable)
    void LearnKizunaArts(FName KArtsID);
    
    UFUNCTION(BlueprintCallable)
    bool JoinParty(PLAYER_ID _player_id);
    
    UFUNCTION(BlueprintCallable)
    bool IsRapidBattleEnable();
    
    UFUNCTION(BlueprintCallable)
    bool IsLearnedKiznaArts(FName KArtsID);
    
    UFUNCTION(BlueprintCallable)
    bool IsEnoughMoney(int32 _money);
    
    UFUNCTION(BlueprintCallable)
    bool IsAutoBattleEnable();
    
    UFUNCTION(BlueprintCallable)
    bool HasKArtsObtainFlag(FName KArtsID);
    
    UFUNCTION(BlueprintCallable)
    TArray<PLAYER_ID> GetPossibleLevelUpPlayerIDValueList();
    
    UFUNCTION(BlueprintCallable)
    TArray<FName> GetPossibleLevelUpPlayerIDList();
    
    UFUNCTION(BlueprintCallable)
    FKizokPlayerUserStatusUp GetPlayerUserStatusUp_PlayerIDValue(PLAYER_ID _player_id);
    
    UFUNCTION(BlueprintCallable)
    FKizokPlayerUserStatusUp GetPlayerUserStatusUp(FName _player_id);
    
    UFUNCTION(BlueprintCallable)
    bool GetPlayerStateAbnormality_PlayerIDValue(PLAYER_ID _player_id, ANOMALIES anomaly);
    
    UFUNCTION(BlueprintCallable)
    bool GetPlayerStateAbnormality(FName _player_id, ANOMALIES anomaly);
    
    UFUNCTION(BlueprintCallable)
    int32 GetPlayerSpecifiedLevelNeedExp_PlayerIDValue(PLAYER_ID _player_id, int32 _level);
    
    UFUNCTION(BlueprintCallable)
    int32 GetPlayerSpecifiedLevelNeedExp(FName _player_id, int32 _level);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPlayerSP_ByName(FName Pid);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPlayerSP(PLAYER_ID ID);
    
    UFUNCTION(BlueprintCallable)
    int32 GetPlayerNextLevelNeedExp_PlayerIDValue(PLAYER_ID _player_id);
    
    UFUNCTION(BlueprintCallable)
    int32 GetPlayerNextLevelNeedExp(FName _player_id);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPlayerMaxSP_ByName(FName Pid);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPlayerMaxSP(PLAYER_ID ID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPlayerMaxHP_ByName(FName Pid);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPlayerMaxHP(PLAYER_ID ID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPlayerLevel(PLAYER_ID ID);
    
    UFUNCTION(BlueprintCallable)
    bool GetPlayerInParty(PLAYER_ID _player_id);
    
    UFUNCTION(BlueprintCallable)
    TArray<PLAYER_ID> GetPlayerIDValueList();
    
    UFUNCTION(BlueprintCallable)
    TArray<FName> GetPlayerIDList();
    
    UFUNCTION(BlueprintCallable)
    PLAYER_ID GetPlayerIDFromFNameID(FName PorNxxx);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPlayerHP_ByName(FName Pid);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPlayerHP(PLAYER_ID ID);
    
    UFUNCTION(BlueprintCallable)
    int32 GetPlayerHaveSkillPoint_PlayerIDValue(PLAYER_ID _player_id);
    
    UFUNCTION(BlueprintCallable)
    int32 GetPlayerHaveSkillPoint(FName _player_id);
    
    UFUNCTION(BlueprintCallable)
    FKizokTablePlayerGrowParam GetPlayerGrowParam_PlayerIDValue(PLAYER_ID _player_id);
    
    UFUNCTION(BlueprintCallable)
    FKizokTablePlayerGrowParam GetPlayerGrowParam(FName _player_id);
    
    UFUNCTION(BlueprintCallable)
    int32 GetPlayerExp_PlayerIDValue(PLAYER_ID _player_id);
    
    UFUNCTION(BlueprintCallable)
    int32 GetPlayerExp(FName _player_id);
    
    UFUNCTION(BlueprintCallable)
    FKizokTablePlayerGrowParam GetPlayerDiffLevelUpParam_PlayerIDValue(PLAYER_ID _player_id);
    
    UFUNCTION(BlueprintCallable)
    FKizokTablePlayerGrowParam GetPlayerDiffLevelUpParam(FName _player_id);
    
    UFUNCTION(BlueprintCallable)
    FKizokTablePlayerGrowParam GetPlayerBaseGrowParam_Level_PlayerIDValue(PLAYER_ID _player_id, int32 _level);
    
    UFUNCTION(BlueprintCallable)
    FKizokTablePlayerGrowParam GetPlayerBaseGrowParam_Level(FName _player_id, int32 _level);
    
    UFUNCTION(BlueprintCallable)
    int32 GetLowestLevelOfJoinedRegularParty();
    
    UFUNCTION(BlueprintCallable)
    TArray<FName> GetLearnedKiznaArts();
    
    UFUNCTION(BlueprintCallable)
    int32 GetBattlePlacementCode();
    
    UFUNCTION(BlueprintCallable)
    void ForgetKizunaArts(FName KArtsID);
    
    UFUNCTION(BlueprintCallable)
    void FlushBtlGroupAsign();
    
    UFUNCTION(BlueprintCallable)
    void DestroyStateAbnormalityPlayerAll(ANOMALIES anomaly);
    
    UFUNCTION(BlueprintCallable)
    void DestroyStateAbnormalityPlayer_PlayerIDValue(PLAYER_ID _player_id, ANOMALIES anomaly);
    
    UFUNCTION(BlueprintCallable)
    void DestroyStateAbnormalityPlayer(FName _player_id, ANOMALIES anomaly);
    
    UFUNCTION(BlueprintCallable)
    int32 CollectPlayerLevel(PLAYER_ID ID, int32 borderLevel);
    
    UFUNCTION(BlueprintCallable)
    bool ChangeGuestStatus(PLAYER_ID _player_id, bool becomeGuest);
    
    UFUNCTION(BlueprintCallable)
    void CancelPlayerRestrictionOrderAll();
    
    UFUNCTION(BlueprintCallable)
    void AllDestroyStateAbnormalityPlayerAll();
    
    UFUNCTION(BlueprintCallable)
    void AllDestroyStateAbnormalityPlayer_PlayerIDValue(PLAYER_ID _player_id);
    
    UFUNCTION(BlueprintCallable)
    void AllDestroyStateAbnormalityPlayer(FName _player_id);
    
    UFUNCTION(BlueprintCallable)
    void AddStateAbnormalityPlayerAll(ANOMALIES anomaly, bool _use_boss_effect);
    
    UFUNCTION(BlueprintCallable)
    void AddStateAbnormalityPlayer_PlayerIDValue(PLAYER_ID _player_id, ANOMALIES anomaly, bool _use_boss_effect);
    
    UFUNCTION(BlueprintCallable)
    void AddStateAbnormalityPlayer(FName _player_id, ANOMALIES anomaly, bool _use_boss_effect);
    
    UFUNCTION(BlueprintCallable)
    void AddPlayerUserStatus_PlayerIDValue(PLAYER_ID _player_id, FKizokPlayerUserStatusUp _add_status);
    
    UFUNCTION(BlueprintCallable)
    void AddPlayerUserStatus(FName _player_id, FKizokPlayerUserStatusUp _add_status);
    
    UFUNCTION(BlueprintCallable)
    int32 AddPlayerSP_ByName(FName Pid, int32 Add);
    
    UFUNCTION(BlueprintCallable)
    int32 AddPlayerSP(PLAYER_ID ID, int32 Add);
    
    UFUNCTION(BlueprintCallable)
    int32 AddPlayerHP_ByName(FName Pid, int32 Add);
    
    UFUNCTION(BlueprintCallable)
    int32 AddPlayerHP(PLAYER_ID ID, int32 Add);
    
    UFUNCTION(BlueprintCallable)
    void AddPartyMoneyEvent(FKizokPartyMoneyDelegate InEvent);
    
    UFUNCTION(BlueprintCallable)
    void AddPartyMoney(int64 _add_money);
    
    UFUNCTION(BlueprintCallable)
    int32 AddKizunaLineValue(int32 Add);
    
    UFUNCTION(BlueprintCallable)
    void AddExpPlayerAll(int32 _add_exp);
    
    UFUNCTION(BlueprintCallable)
    void AddExpPlayer_PlayerIDValue(PLAYER_ID _player_id, int32 _add_exp);
    
    UFUNCTION(BlueprintCallable)
    void AddExpPlayer(FName _player_id, int32 _add_exp);
    
};

