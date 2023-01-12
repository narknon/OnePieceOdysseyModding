#include "KizokCharacterStatusManager.h"

void UKizokCharacterStatusManager::SetRapidBattleEnable(bool bRapid) {
}

int32 UKizokCharacterStatusManager::SetPlayerSP_ByName(FName Pid, int32 immediate) {
    return 0;
}

int32 UKizokCharacterStatusManager::SetPlayerSP(PLAYER_ID ID, int32 immediate) {
    return 0;
}

void UKizokCharacterStatusManager::SetPlayerRestrictionOrderAll() {
}

void UKizokCharacterStatusManager::SetPlayerRestrictionOrder(PLAYER_ID chara_type, bool is_change) {
}

void UKizokCharacterStatusManager::SetPlayerOtherRestrictionOrder(PLAYER_ID chara_type) {
}

int32 UKizokCharacterStatusManager::SetPlayerLevel(PLAYER_ID ID, int32 Level) {
    return 0;
}

int32 UKizokCharacterStatusManager::SetPlayerHP_ByName(FName Pid, int32 immediate) {
    return 0;
}

int32 UKizokCharacterStatusManager::SetPlayerHP(PLAYER_ID ID, int32 immediate) {
    return 0;
}

bool UKizokCharacterStatusManager::SetPartyOrder(TMap<PLAYER_ID, int32> Order) {
    return false;
}

bool UKizokCharacterStatusManager::SetGuestLevel(PLAYER_ID _player_id, int32 Level) {
    return false;
}

void UKizokCharacterStatusManager::SetBattlePlacementCode(int32 code) {
}

void UKizokCharacterStatusManager::SetBanquetBonus(int32 Count) {
}

void UKizokCharacterStatusManager::SetAutoBattleEnable(bool isAuto) {
}

void UKizokCharacterStatusManager::RemovePartyMoneyEvent(FKizokPartyMoneyDelegate InEvent) {
}

void UKizokCharacterStatusManager::RemoveKArtsObtainFlag(FName KArtsID) {
}

void UKizokCharacterStatusManager::RecoveryHPAllPartyMember() {
}

bool UKizokCharacterStatusManager::PlayerSkill_WasSkillRankReleased(FName skill_id, int32 Rank) {
    return false;
}

bool UKizokCharacterStatusManager::PlayerSkill_WasSkillRankFixed(FName skill_id, int32 Rank) {
    return false;
}

bool UKizokCharacterStatusManager::PlayerSkill_UnreleaseSkillRank(FName skill_id, int32 Rank) {
    return false;
}

bool UKizokCharacterStatusManager::PlayerSkill_UnfixSkillRank(FName skill_id, int32 Rank) {
    return false;
}

int32 UKizokCharacterStatusManager::PlayerSkill_SetCube(FName skill_id, int32 cubes) {
    return 0;
}

bool UKizokCharacterStatusManager::PlayerSkill_ResetObtainMark(FName skill_id) {
    return false;
}

int32 UKizokCharacterStatusManager::PlayerSkill_RemoveCubes(FName skill_id) {
    return 0;
}

bool UKizokCharacterStatusManager::PlayerSkill_ReleaseSkillRank(FName skill_id, int32 Rank) {
    return false;
}

bool UKizokCharacterStatusManager::PlayerSkill_IsLearnWithRank(PLAYER_ID PLAYER_ID, FName skill_id, int32 Rank) {
    return false;
}

bool UKizokCharacterStatusManager::PlayerSkill_IsLearn(PLAYER_ID PLAYER_ID, FName skill_id) {
    return false;
}

bool UKizokCharacterStatusManager::PlayerSkill_HasObtainMark(FName skill_id) {
    return false;
}

int32 UKizokCharacterStatusManager::PlayerSkill_GetItemLevel() {
    return 0;
}

int32 UKizokCharacterStatusManager::PlayerSkill_GetFittedCube(FName skill_id) {
    return 0;
}

int32 UKizokCharacterStatusManager::PlayerSkill_GetCookingLevel() {
    return 0;
}

int32 UKizokCharacterStatusManager::PlayerSkill_GetAccessoryLevel() {
    return 0;
}

void UKizokCharacterStatusManager::PlayerSkill_ForgetSkillsWhenEvent(bool IsStayStrongNewGame) {
}

void UKizokCharacterStatusManager::PlayerSkill_ForceSkillLearn(PLAYER_ID PLAYER_ID, FName skill_id, bool isMonitorOut) {
}

bool UKizokCharacterStatusManager::PlayerSkill_ForceLearnSkillRank(FName skill_id, int32 Rank) {
    return false;
}

bool UKizokCharacterStatusManager::PlayerSkill_FixSkillRank(FName skill_id, int32 Rank) {
    return false;
}

bool UKizokCharacterStatusManager::PlayerLevelUp_PlayerIDValue(PLAYER_ID _player_id) {
    return false;
}

bool UKizokCharacterStatusManager::PlayerLevelUp(FName _player_id) {
    return false;
}

bool UKizokCharacterStatusManager::LeaveParty(PLAYER_ID _player_id) {
    return false;
}

void UKizokCharacterStatusManager::LearnKizunaArts(FName KArtsID) {
}

bool UKizokCharacterStatusManager::JoinParty(PLAYER_ID _player_id) {
    return false;
}

bool UKizokCharacterStatusManager::IsRapidBattleEnable() {
    return false;
}

bool UKizokCharacterStatusManager::IsLearnedKiznaArts(FName KArtsID) {
    return false;
}

bool UKizokCharacterStatusManager::IsEnoughMoney(int32 _money) {
    return false;
}

bool UKizokCharacterStatusManager::IsAutoBattleEnable() {
    return false;
}

bool UKizokCharacterStatusManager::HasKArtsObtainFlag(FName KArtsID) {
    return false;
}

TArray<PLAYER_ID> UKizokCharacterStatusManager::GetPossibleLevelUpPlayerIDValueList() {
    return TArray<PLAYER_ID>();
}

TArray<FName> UKizokCharacterStatusManager::GetPossibleLevelUpPlayerIDList() {
    return TArray<FName>();
}

FKizokPlayerUserStatusUp UKizokCharacterStatusManager::GetPlayerUserStatusUp_PlayerIDValue(PLAYER_ID _player_id) {
    return FKizokPlayerUserStatusUp{};
}

FKizokPlayerUserStatusUp UKizokCharacterStatusManager::GetPlayerUserStatusUp(FName _player_id) {
    return FKizokPlayerUserStatusUp{};
}

bool UKizokCharacterStatusManager::GetPlayerStateAbnormality_PlayerIDValue(PLAYER_ID _player_id, ANOMALIES anomaly) {
    return false;
}

bool UKizokCharacterStatusManager::GetPlayerStateAbnormality(FName _player_id, ANOMALIES anomaly) {
    return false;
}

int32 UKizokCharacterStatusManager::GetPlayerSpecifiedLevelNeedExp_PlayerIDValue(PLAYER_ID _player_id, int32 _level) {
    return 0;
}

int32 UKizokCharacterStatusManager::GetPlayerSpecifiedLevelNeedExp(FName _player_id, int32 _level) {
    return 0;
}

int32 UKizokCharacterStatusManager::GetPlayerSP_ByName(FName Pid) {
    return 0;
}

int32 UKizokCharacterStatusManager::GetPlayerSP(PLAYER_ID ID) {
    return 0;
}

int32 UKizokCharacterStatusManager::GetPlayerNextLevelNeedExp_PlayerIDValue(PLAYER_ID _player_id) {
    return 0;
}

int32 UKizokCharacterStatusManager::GetPlayerNextLevelNeedExp(FName _player_id) {
    return 0;
}

int32 UKizokCharacterStatusManager::GetPlayerMaxSP_ByName(FName Pid) {
    return 0;
}

int32 UKizokCharacterStatusManager::GetPlayerMaxSP(PLAYER_ID ID) {
    return 0;
}

int32 UKizokCharacterStatusManager::GetPlayerMaxHP_ByName(FName Pid) {
    return 0;
}

int32 UKizokCharacterStatusManager::GetPlayerMaxHP(PLAYER_ID ID) {
    return 0;
}

int32 UKizokCharacterStatusManager::GetPlayerLevel(PLAYER_ID ID) {
    return 0;
}

bool UKizokCharacterStatusManager::GetPlayerInParty(PLAYER_ID _player_id) {
    return false;
}

TArray<PLAYER_ID> UKizokCharacterStatusManager::GetPlayerIDValueList() {
    return TArray<PLAYER_ID>();
}

TArray<FName> UKizokCharacterStatusManager::GetPlayerIDList() {
    return TArray<FName>();
}

PLAYER_ID UKizokCharacterStatusManager::GetPlayerIDFromFNameID(FName PorNxxx) {
    return PLAYER_ID::PLAYER_ID_LUF;
}

int32 UKizokCharacterStatusManager::GetPlayerHP_ByName(FName Pid) {
    return 0;
}

int32 UKizokCharacterStatusManager::GetPlayerHP(PLAYER_ID ID) {
    return 0;
}

int32 UKizokCharacterStatusManager::GetPlayerHaveSkillPoint_PlayerIDValue(PLAYER_ID _player_id) {
    return 0;
}

int32 UKizokCharacterStatusManager::GetPlayerHaveSkillPoint(FName _player_id) {
    return 0;
}

FKizokTablePlayerGrowParam UKizokCharacterStatusManager::GetPlayerGrowParam_PlayerIDValue(PLAYER_ID _player_id) {
    return FKizokTablePlayerGrowParam{};
}

FKizokTablePlayerGrowParam UKizokCharacterStatusManager::GetPlayerGrowParam(FName _player_id) {
    return FKizokTablePlayerGrowParam{};
}

int32 UKizokCharacterStatusManager::GetPlayerExp_PlayerIDValue(PLAYER_ID _player_id) {
    return 0;
}

int32 UKizokCharacterStatusManager::GetPlayerExp(FName _player_id) {
    return 0;
}

FKizokTablePlayerGrowParam UKizokCharacterStatusManager::GetPlayerDiffLevelUpParam_PlayerIDValue(PLAYER_ID _player_id) {
    return FKizokTablePlayerGrowParam{};
}

FKizokTablePlayerGrowParam UKizokCharacterStatusManager::GetPlayerDiffLevelUpParam(FName _player_id) {
    return FKizokTablePlayerGrowParam{};
}

FKizokTablePlayerGrowParam UKizokCharacterStatusManager::GetPlayerBaseGrowParam_Level_PlayerIDValue(PLAYER_ID _player_id, int32 _level) {
    return FKizokTablePlayerGrowParam{};
}

FKizokTablePlayerGrowParam UKizokCharacterStatusManager::GetPlayerBaseGrowParam_Level(FName _player_id, int32 _level) {
    return FKizokTablePlayerGrowParam{};
}

int32 UKizokCharacterStatusManager::GetLowestLevelOfJoinedRegularParty() {
    return 0;
}

TArray<FName> UKizokCharacterStatusManager::GetLearnedKiznaArts() {
    return TArray<FName>();
}

int32 UKizokCharacterStatusManager::GetBattlePlacementCode() {
    return 0;
}

void UKizokCharacterStatusManager::ForgetKizunaArts(FName KArtsID) {
}

void UKizokCharacterStatusManager::FlushBtlGroupAsign() {
}

void UKizokCharacterStatusManager::DestroyStateAbnormalityPlayerAll(ANOMALIES anomaly) {
}

void UKizokCharacterStatusManager::DestroyStateAbnormalityPlayer_PlayerIDValue(PLAYER_ID _player_id, ANOMALIES anomaly) {
}

void UKizokCharacterStatusManager::DestroyStateAbnormalityPlayer(FName _player_id, ANOMALIES anomaly) {
}

int32 UKizokCharacterStatusManager::CollectPlayerLevel(PLAYER_ID ID, int32 borderLevel) {
    return 0;
}

bool UKizokCharacterStatusManager::ChangeGuestStatus(PLAYER_ID _player_id, bool becomeGuest) {
    return false;
}

void UKizokCharacterStatusManager::CancelPlayerRestrictionOrderAll() {
}

void UKizokCharacterStatusManager::AllDestroyStateAbnormalityPlayerAll() {
}

void UKizokCharacterStatusManager::AllDestroyStateAbnormalityPlayer_PlayerIDValue(PLAYER_ID _player_id) {
}

void UKizokCharacterStatusManager::AllDestroyStateAbnormalityPlayer(FName _player_id) {
}

void UKizokCharacterStatusManager::AddStateAbnormalityPlayerAll(ANOMALIES anomaly, bool _use_boss_effect) {
}

void UKizokCharacterStatusManager::AddStateAbnormalityPlayer_PlayerIDValue(PLAYER_ID _player_id, ANOMALIES anomaly, bool _use_boss_effect) {
}

void UKizokCharacterStatusManager::AddStateAbnormalityPlayer(FName _player_id, ANOMALIES anomaly, bool _use_boss_effect) {
}

void UKizokCharacterStatusManager::AddPlayerUserStatus_PlayerIDValue(PLAYER_ID _player_id, FKizokPlayerUserStatusUp _add_status) {
}

void UKizokCharacterStatusManager::AddPlayerUserStatus(FName _player_id, FKizokPlayerUserStatusUp _add_status) {
}

int32 UKizokCharacterStatusManager::AddPlayerSP_ByName(FName Pid, int32 Add) {
    return 0;
}

int32 UKizokCharacterStatusManager::AddPlayerSP(PLAYER_ID ID, int32 Add) {
    return 0;
}

int32 UKizokCharacterStatusManager::AddPlayerHP_ByName(FName Pid, int32 Add) {
    return 0;
}

int32 UKizokCharacterStatusManager::AddPlayerHP(PLAYER_ID ID, int32 Add) {
    return 0;
}

void UKizokCharacterStatusManager::AddPartyMoneyEvent(FKizokPartyMoneyDelegate InEvent) {
}

void UKizokCharacterStatusManager::AddPartyMoney(int64 _add_money) {
}

int32 UKizokCharacterStatusManager::AddKizunaLineValue(int32 Add) {
    return 0;
}

void UKizokCharacterStatusManager::AddExpPlayerAll(int32 _add_exp) {
}

void UKizokCharacterStatusManager::AddExpPlayer_PlayerIDValue(PLAYER_ID _player_id, int32 _add_exp) {
}

void UKizokCharacterStatusManager::AddExpPlayer(FName _player_id, int32 _add_exp) {
}

UKizokCharacterStatusManager::UKizokCharacterStatusManager() {
}

