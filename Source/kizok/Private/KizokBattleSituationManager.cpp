#include "KizokBattleSituationManager.h"
#include "BtlCharactersParams.h"
#include "BtlGroups.h"
#include "BehaviorTree/BehaviorTreeComponent.h"
#include "BehaviorTree/BlackboardComponent.h"

bool AKizokBattleSituationManager::WasMomentMeteoWeaponDownThisTurn() {
    return false;
}

bool AKizokBattleSituationManager::WasMomentMeteoWeaponAscendThisCycle() {
    return false;
}

bool AKizokBattleSituationManager::WasKickout() {
    return false;
}

TArray<int32> AKizokBattleSituationManager::WasCriticalHitOccurredEx() {
    return TArray<int32>();
}

bool AKizokBattleSituationManager::WasCriticalHitOccurred() {
    return false;
}

void AKizokBattleSituationManager::TriggerTalkCameraQueue() {
}

void AKizokBattleSituationManager::TriggerLipSync(FName PCID, float Time) {
}

void AKizokBattleSituationManager::TitleWarningOff() {
}

void AKizokBattleSituationManager::TitleTextOff() {
}

void AKizokBattleSituationManager::StopLipSync(FName PCID) {
}

void AKizokBattleSituationManager::StartTitleFromInsertList(FName TextId, TArray<FString> insertList, bool bUseWarnFrame) {
}

void AKizokBattleSituationManager::StartTitle(FName TextId, bool bUseWarnFrame) {
}

void AKizokBattleSituationManager::StartSystemMessage() {
}

void AKizokBattleSituationManager::StartSuccessOrFailedSceneUI(bool bSuccess, FBtlSituationText desc) {
}

void AKizokBattleSituationManager::StartStatusIcon() {
}

void AKizokBattleSituationManager::StartKizunaGaugeUpUI() {
}

void AKizokBattleSituationManager::StartInfoText() {
}

void AKizokBattleSituationManager::StartFrameWidget() {
}

void AKizokBattleSituationManager::StartExclamationMark() {
}

void AKizokBattleSituationManager::StartDSceneWidgetAll() {
}

bool AKizokBattleSituationManager::SituationPercentCheck(float Percent) {
    return false;
}

void AKizokBattleSituationManager::SituationEnd() {
}

void AKizokBattleSituationManager::SituationCameraSelfCustom(int32 Uid, float rotZ, float CranePitch, float craneArmLen, FVector tgt, float CamOfsY, float CamOfsZ) {
}

void AKizokBattleSituationManager::SituationCameraSelf(int32 Uid) {
}

void AKizokBattleSituationManager::SituationCameraReinforcement(int32 GroupID) {
}

void AKizokBattleSituationManager::SituationCameraPlayerSlipDamage(int32 Uid) {
}

void AKizokBattleSituationManager::SituationCameraNormal(int32 Uid) {
}

void AKizokBattleSituationManager::SituationCameraGroup(int32 Uid, int32 GroupID) {
}

void AKizokBattleSituationManager::SituationCameraEnemyGroup(int32 Uid) {
}

void AKizokBattleSituationManager::SituationCameraAll(int32 Uid) {
}

void AKizokBattleSituationManager::ShowSkipButtonGuide() {
}

void AKizokBattleSituationManager::SetTitleText(const FBtlSituationText& textParam) {
}

void AKizokBattleSituationManager::SetTimeSystemMessage(float visibleTimePerMessage) {
}

void AKizokBattleSituationManager::SetSystemText(TArray<FBtlSituationText> TextList) {
}

void AKizokBattleSituationManager::SetStatusAffectText(TArray<FBtlSituationText> TextList) {
}

void AKizokBattleSituationManager::SetStatusAffectParam(EDRAMATICAFFECTTYPE affectType, int32 Uid, TArray<FDramaticAffect> affectList, bool bPlayerBonus) {
}

void AKizokBattleSituationManager::SetMeteoWeaponTargetedGroup(int32 grpid) {
}

void AKizokBattleSituationManager::SetInfoText(TArray<FBtlSituationText> TextList) {
}

void AKizokBattleSituationManager::SetFrameType(ESITUATIONRIBBON frameType) {
}

void AKizokBattleSituationManager::SetForcedVictory() {
}

void AKizokBattleSituationManager::SetForcedLoose() {
}

void AKizokBattleSituationManager::SetFacialByUID(int32 Uid, FName FaceID) {
}

void AKizokBattleSituationManager::SetFacialByPCID(FName PCID, FName FaceID) {
}

void AKizokBattleSituationManager::SetExclamationParam(int32 Uid, EEXCLAMATION ExclamationType) {
}

void AKizokBattleSituationManager::SetEmphasizeTargetMarks(TArray<int32> Uids) {
}

void AKizokBattleSituationManager::SetDropFoodStuff(int32 Uid, int32 Mul) {
}

void AKizokBattleSituationManager::SetCategoryText(const FBtlSituationText& textParam) {
}

void AKizokBattleSituationManager::SetBeriMultipleRate(float Rate) {
}

void AKizokBattleSituationManager::ResetEmphasizeTargetMarks() {
}

void AKizokBattleSituationManager::RegistTalkCameraQueue(TArray<FSituationCameraParam> CamQueue) {
}

void AKizokBattleSituationManager::ProhibitKizunaMove(int32 Uid) {
}

void AKizokBattleSituationManager::ProhibitAlternateGroup(int32 GroupID) {
}

void AKizokBattleSituationManager::ProhibitAlternate(int32 Uid) {
}

void AKizokBattleSituationManager::PostSituationInitElapsedTime(const FString& str) {
}

TArray<int32> AKizokBattleSituationManager::PlayersListByGroupWithMoreEnemies() {
    return TArray<int32>();
}

TArray<int32> AKizokBattleSituationManager::PlayersListByGroupWithFewerEnemies() {
    return TArray<int32>();
}

TArray<int32> AKizokBattleSituationManager::PlayerListOfRecovered() {
    return TArray<int32>();
}

void AKizokBattleSituationManager::PlayCommonJingleSE(FName Cue) {
}

void AKizokBattleSituationManager::PlayCommonBankSE(FName Cue) {
}

void AKizokBattleSituationManager::LiftAProhibitAlterGroup() {
}

void AKizokBattleSituationManager::LetEnemyEscapeAndAndRemoveUI(int32 Uid) {
}

bool AKizokBattleSituationManager::IsSanjiInHarlem() {
    return false;
}

bool AKizokBattleSituationManager::IsRareEnemiesParty() {
    return false;
}

bool AKizokBattleSituationManager::IsMonsterPoint() {
    return false;
}

bool AKizokBattleSituationManager::IsDSceneApplied() {
    return false;
}

bool AKizokBattleSituationManager::IsControllable(int32 Uid) {
    return false;
}

bool AKizokBattleSituationManager::IsAnomaried(int32 Uid, ANOMALIES anomaly) {
    return false;
}

void AKizokBattleSituationManager::InfoTextOff() {
}

void AKizokBattleSituationManager::HideSkipButtonGuide() {
}

void AKizokBattleSituationManager::HideLeftStatusUI() {
}

bool AKizokBattleSituationManager::HaveValidKizunaArts() {
    return false;
}

bool AKizokBattleSituationManager::HaveFoodStuff(int32 Uid) {
    return false;
}

TArray<EResists> AKizokBattleSituationManager::GetWeakResistanceThatAffectsDamage(int32 Uid) {
    return TArray<EResists>();
}

FName AKizokBattleSituationManager::GetTableID(int32 Uid) {
    return NAME_None;
}

int32 AKizokBattleSituationManager::GetSurpState() {
    return 0;
}

float AKizokBattleSituationManager::GetResistsValue(int32 Uid, EResists resist) {
    return 0.0f;
}

TArray<int32> AKizokBattleSituationManager::GetReinforcedGroupID() {
    return TArray<int32>();
}

TArray<int32> AKizokBattleSituationManager::GetReinforcedEnemiesInGroup(int32 GroupIndex) {
    return TArray<int32>();
}

int32 AKizokBattleSituationManager::GetRace(int32 Uid) {
    return 0;
}

int32 AKizokBattleSituationManager::GetProhibitAlternateGroup() {
    return 0;
}

int32 AKizokBattleSituationManager::GetPrimeSeed() {
    return 0;
}

int32 AKizokBattleSituationManager::GetOpponentsInGroup(PLAYER_ID Pid) {
    return 0;
}

FName AKizokBattleSituationManager::GetNameID(int32 Uid) {
    return NAME_None;
}

int32 AKizokBattleSituationManager::GetMeteoWeaponsState() {
    return 0;
}

TArray<EResists> AKizokBattleSituationManager::GetLowestResistsWithoutAffectDamage(int32 Uid) {
    return TArray<EResists>();
}

TArray<EResists> AKizokBattleSituationManager::GetLowestResists(int32 Uid) {
    return TArray<EResists>();
}

TMap<EResists, int32> AKizokBattleSituationManager::GetListLowestResistsInEnemies() {
    return TMap<EResists, int32>();
}

TMap<EResists, int32> AKizokBattleSituationManager::GetListHighestResistsInEnemies() {
    return TMap<EResists, int32>();
}

int32 AKizokBattleSituationManager::GetLevel(PLAYER_ID Pid) {
    return 0;
}

int32 AKizokBattleSituationManager::GetLastActorUID4Result() {
    return 0;
}

TMap<PLAYER_ID, int32> AKizokBattleSituationManager::GetJoinGuests() {
    return TMap<PLAYER_ID, int32>();
}

TMap<FName, int32> AKizokBattleSituationManager::GetJoinEnemies() {
    return TMap<FName, int32>();
}

TArray<int32> AKizokBattleSituationManager::GetJoinedGuestInGroup(int32 GroupIndex) {
    return TArray<int32>();
}

TArray<int32> AKizokBattleSituationManager::GetJoinedGuestGroupID() {
    return TArray<int32>();
}

int32 AKizokBattleSituationManager::GetHPMax(PLAYER_ID Pid) {
    return 0;
}

int32 AKizokBattleSituationManager::GetHP(PLAYER_ID Pid) {
    return 0;
}

TArray<EResists> AKizokBattleSituationManager::GetHighestResists(int32 Uid) {
    return TArray<EResists>();
}

int32 AKizokBattleSituationManager::GetGroupIndex(PLAYER_ID Pid) {
    return 0;
}

int32 AKizokBattleSituationManager::GetFriendInGroup(PLAYER_ID Pid) {
    return 0;
}

TArray<int32> AKizokBattleSituationManager::GetExpectedReinforcementGroupID() {
    return TArray<int32>();
}

FName AKizokBattleSituationManager::GetEnemyPartyId() {
    return NAME_None;
}

int32 AKizokBattleSituationManager::GetCyclesBeforeReinforcementArrive() {
    return 0;
}

int32 AKizokBattleSituationManager::GetBattleCycle() {
    return 0;
}

FAttackingAffectThing AKizokBattleSituationManager::GetAtkAffectThing() {
    return FAttackingAffectThing{};
}

int32 AKizokBattleSituationManager::GetAliveLeaderUIDFromEnemies() {
    return 0;
}

void AKizokBattleSituationManager::FrameWidgetOff() {
}

void AKizokBattleSituationManager::ForceCloseSystemMessage() {
}

void AKizokBattleSituationManager::FinishDScene() {
}

void AKizokBattleSituationManager::ExecuteJoinAnimation(PLAYER_ID Pid) {
}

void AKizokBattleSituationManager::EndTitle() {
}

void AKizokBattleSituationManager::EndStatusIcon() {
}

void AKizokBattleSituationManager::EndInfoText() {
}

void AKizokBattleSituationManager::EndFrameWidget() {
}

void AKizokBattleSituationManager::EndExclamationMark() {
}

void AKizokBattleSituationManager::EndDSceneWidgetAll() {
}

void AKizokBattleSituationManager::DispLeftStatusUI() {
}

void AKizokBattleSituationManager::DeployExtendedGuests() {
}

bool AKizokBattleSituationManager::DeployExtendedEnemies(int32 GroupIndex) {
    return false;
}

void AKizokBattleSituationManager::ClearProhibits() {
}

void AKizokBattleSituationManager::ClearAttackAffects() {
}

bool AKizokBattleSituationManager::CannotEscape() {
    return false;
}

bool AKizokBattleSituationManager::CanAct(int32 Uid) {
    return false;
}

void AKizokBattleSituationManager::ApplyRulesImmediately(const FDramaticAffectThing& affect) {
}

void AKizokBattleSituationManager::ApplyDScene(const FDramaticAffectThing& affect) {
}

void AKizokBattleSituationManager::ApplyAtkAffectThing(FAttackingAffectThing AtkAffect) {
}

void AKizokBattleSituationManager::AddKizunaLineValueUp(int32 Add, FBtlSituationText desc) {
}

void AKizokBattleSituationManager::AddExpMultipleRateAtEndBattle(int32 Add) {
}

AKizokBattleSituationManager::AKizokBattleSituationManager() {
    this->BehaviorTreeComp = CreateDefaultSubobject<UBehaviorTreeComponent>(TEXT("BehaviorTree"));
    this->BlackboardComp = CreateDefaultSubobject<UBlackboardComponent>(TEXT("Blackboard"));
    this->characters = CreateDefaultSubobject<UBtlCharactersParams>(TEXT("STchs"));
    this->Groups = CreateDefaultSubobject<UBtlGroups>(TEXT("STgrps"));
}

