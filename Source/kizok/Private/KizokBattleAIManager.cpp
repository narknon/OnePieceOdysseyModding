#include "KizokBattleAIManager.h"
#include "BtlCharactersParams.h"
#include "BtlGroups.h"
#include "BehaviorTree/BehaviorTreeComponent.h"
#include "BehaviorTree/BlackboardComponent.h"

bool AKizokBattleAIManager::WhetherMadePowerAttack(int32 Uid) {
    return false;
}

bool AKizokBattleAIManager::WasMomentMeteoWeaponDownThisTurn() {
    return false;
}

bool AKizokBattleAIManager::WasMomentMeteoWeaponAscendThisCycle() {
    return false;
}

ASP_SKILLTYPES AKizokBattleAIManager::SkillTypeNameToASP(FName SkillTypeName) {
    return ASP_SKILLTYPES::INVALID;
}

void AKizokBattleAIManager::SetPalaAttackReservation() {
}

void AKizokBattleAIManager::SetMeteoWeaponTargetedGroup(int32 grpid) {
}

void AKizokBattleAIManager::ResetPalaAttackReservation() {
}

bool AKizokBattleAIManager::OnBattleMap(int32 TgtUID) {
    return false;
}

void AKizokBattleAIManager::MarkMadePowerAttack(int32 Uid) {
}

bool AKizokBattleAIManager::IsSummonable(int32 ownUid) {
    return false;
}

bool AKizokBattleAIManager::IsMultipleAttackKizunaArts(FName SkillID) {
    return false;
}

bool AKizokBattleAIManager::IsKizunaMove(FName SkillID) {
    return false;
}

bool AKizokBattleAIManager::IsIvokeableSkillBySp(int32 ownUid, FName SkillID) {
    return false;
}

bool AKizokBattleAIManager::IsAnomaried(int32 TgtUID, ANOMALIES anomaly) {
    return false;
}

bool AKizokBattleAIManager::InSameGroup(int32 ownUid, int32 TgtUID) {
    return false;
}

bool AKizokBattleAIManager::InAnotherGroup(int32 ownUid, int32 TgtUID) {
    return false;
}

bool AKizokBattleAIManager::HasPalaAttackReservation() {
    return false;
}

TArray<FName> AKizokBattleAIManager::GetZeroCostAtkSkillID(int32 ownUid) {
    return TArray<FName>();
}

TArray<FName> AKizokBattleAIManager::GetUsableKizunaAtrsID(int32 ownUid) {
    return TArray<FName>();
}

TArray<int32> AKizokBattleAIManager::GetTargetableUidListByItem(int32 ownUid, FName ItemId) {
    return TArray<int32>();
}

TArray<int32> AKizokBattleAIManager::GetTargetableUidList(int32 ownUid, FName SkillID) {
    return TArray<int32>();
}

FName AKizokBattleAIManager::GetTableID(int32 Uid) {
    return NAME_None;
}

int32 AKizokBattleAIManager::GetSumOfEffectValue(int32 ownUid, FName SkillID, int32 TgtUID) {
    return 0;
}

TArray<FName> AKizokBattleAIManager::GetSummonSkillList(int32 ownUid) {
    return TArray<FName>();
}

float AKizokBattleAIManager::GetSPperSPMAX(int32 TgtUID) {
    return 0.0f;
}

int32 AKizokBattleAIManager::GetSpCost(FName SkillID) {
    return 0;
}

TArray<FName> AKizokBattleAIManager::GetSkillListSPUsable(int32 ownUid) {
    return TArray<FName>();
}

TArray<FName> AKizokBattleAIManager::GetSkillListForUsableSpecials(int32 ownUid) {
    return TArray<FName>();
}

int32 AKizokBattleAIManager::GetOwnSP(int32 TgtUID) {
    return 0;
}

int32 AKizokBattleAIManager::GetOwnHP(int32 TgtUID) {
    return 0;
}

int32 AKizokBattleAIManager::GetMeteoWeaponsState() {
    return 0;
}

float AKizokBattleAIManager::GetLevelAverageInGroup(int32 ownUid, int32 GroupID) {
    return 0.0f;
}

int32 AKizokBattleAIManager::GetLevel(int32 TgtUID) {
    return 0;
}

int32 AKizokBattleAIManager::GetKizunaValue() {
    return 0;
}

int32 AKizokBattleAIManager::GetKizunaCost(FName SkillID) {
    return 0;
}

TArray<PLAYER_ID> AKizokBattleAIManager::GetKizunaArtsInvokeMembers(FName SkillID) {
    return TArray<PLAYER_ID>();
}

TArray<EBattleAIKizunaAttr> AKizokBattleAIManager::GetKizunaArtsExAttr(FName SkillID) {
    return TArray<EBattleAIKizunaAttr>();
}

TArray<FName> AKizokBattleAIManager::GetItemListForUsable(int32 ownUid) {
    return TArray<FName>();
}

float AKizokBattleAIManager::GetHPperHPMAX(int32 TgtUID) {
    return 0.0f;
}

int32 AKizokBattleAIManager::GetGroupID(int32 TgtUID) {
    return 0;
}

FName AKizokBattleAIManager::GetEnemyPartyId() {
    return NAME_None;
}

int32 AKizokBattleAIManager::GetEnemiesNumOnBattleMap(int32 ownUid) {
    return 0;
}

int32 AKizokBattleAIManager::GetEnemiesNumInGroup(int32 ownUid) {
    return 0;
}

int32 AKizokBattleAIManager::GetEffectiveTargetNumByItem(int32 ownUid, FName ItemId, int32 TgtUID) {
    return 0;
}

int32 AKizokBattleAIManager::GetEffectiveTargetNum(int32 ownUid, FName SkillID, int32 TgtUID) {
    return 0;
}

int32 AKizokBattleAIManager::GetDisabilityPrediction(int32 ownUid, FName SkillID, int32 TgtUID) {
    return 0;
}

FName AKizokBattleAIManager::GetDefaultAtkSkillID(int32 ownUid) {
    return NAME_None;
}

int32 AKizokBattleAIManager::GetDeathPrediction(int32 ownUid, FName SkillID, int32 TgtUID) {
    return 0;
}

int32 AKizokBattleAIManager::GetBattleCycle() {
    return 0;
}

float AKizokBattleAIManager::GetAvarageOfEffectValue(int32 ownUid, FName SkillID, int32 TgtUID) {
    return 0.0f;
}

TArray<FName> AKizokBattleAIManager::GetAllSkillList(int32 ownUid) {
    return TArray<FName>();
}

TMap<FName, float> AKizokBattleAIManager::GetAllSkillAndRate(int32 Uid) {
    return TMap<FName, float>();
}

TArray<FName> AKizokBattleAIManager::GetAllKizunaAtrsSkillID(int32 ownUid) {
    return TArray<FName>();
}

int32 AKizokBattleAIManager::GetAlliesNumOnBattleMap(int32 ownUid) {
    return 0;
}

int32 AKizokBattleAIManager::GetAlliesNumInGroup(int32 ownUid) {
    return 0;
}

void AKizokBattleAIManager::ExecuteDecide() {
}

FName AKizokBattleAIManager::DrawUseSkill(int32 ownUid, TArray<FName> SkillList) {
    return NAME_None;
}

int32 AKizokBattleAIManager::DrawTarget(TArray<int32> UidList) {
    return 0;
}

void AKizokBattleAIManager::DecideUseItem(int32 ownUid, FName ItemId, int32 TgtUID) {
}

void AKizokBattleAIManager::DecideSkillAndTarget(int32 ownUid, FName SkillID, int32 TgtUID) {
}

void AKizokBattleAIManager::DecideIgnore(int32 ownUid) {
}

void AKizokBattleAIManager::DecideFocusEnergy(int32 ownUid) {
}

AKizokBattleAIManager::AKizokBattleAIManager() {
    this->BehaviorTree = NULL;
    this->BehaviorTreeComp = CreateDefaultSubobject<UBehaviorTreeComponent>(TEXT("BehaviorTree"));
    this->BlackboardComp = CreateDefaultSubobject<UBlackboardComponent>(TEXT("Blackboard"));
    this->characters = CreateDefaultSubobject<UBtlCharactersParams>(TEXT("AIchs"));
    this->Groups = CreateDefaultSubobject<UBtlGroups>(TEXT("AIgrps"));
    this->bIsValidAI = false;
    this->bIsFinished = true;
}

