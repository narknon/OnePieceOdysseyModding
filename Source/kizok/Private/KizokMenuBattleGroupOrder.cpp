#include "KizokMenuBattleGroupOrder.h"

class UKizokBattleCharaBase;
class UKizokMenuBattleMain;


void UKizokMenuBattleGroupOrder::UpdateTargetFocusIcon(EBtlMenuTargetSelectType AttackRange, UKizokBattleCharaBase* CharaBase) {
}

void UKizokMenuBattleGroupOrder::UpdateStatusAll(const TArray<FBtlMenuStatus>& InStatusList) {
}

void UKizokMenuBattleGroupOrder::UpdateStatus(int32 InIndex, const FBtlMenuStatus& InStatus) {
}

void UKizokMenuBattleGroupOrder::UpdateSPRecover(PLAYER_ID playerID, int32 last, int32 Now, int32 Max) {
}

void UKizokMenuBattleGroupOrder::UpdateSPDifference(int32 CostSP) {
}


void UKizokMenuBattleGroupOrder::UpdateDispRingLamp() {
}

void UKizokMenuBattleGroupOrder::UpdateDispMoveEnableByGroupId(int32 GroupID) {
}

void UKizokMenuBattleGroupOrder::UpdateDispMoveEnable() {
}

void UKizokMenuBattleGroupOrder::UpdateDispAll() {
}

void UKizokMenuBattleGroupOrder::UpdateCharaIcon() {
}

void UKizokMenuBattleGroupOrder::UpdateAllTurnList(bool bActEnd) {
}

void UKizokMenuBattleGroupOrder::StopSituationIconAll() {
}

void UKizokMenuBattleGroupOrder::SituationTargetMarkAllOff() {
}

void UKizokMenuBattleGroupOrder::SetWeakResistNormalAttackEnemyList() {
}

void UKizokMenuBattleGroupOrder::SetWeakResistEnemyList(FName SkillID) {
}









void UKizokMenuBattleGroupOrder::SetDispPreKickOut(const TArray<FBtlMenuGroupMoveParam>& kickOutList) {
}

void UKizokMenuBattleGroupOrder::SetDispPostKickOut() {
}








void UKizokMenuBattleGroupOrder::PlaySituationTargetMark(int32 GroupID, bool bVisibleText, bool bChanceText) {
}

void UKizokMenuBattleGroupOrder::PlaySituationIconAnim(const TArray<FBtlMenuGroup>& charaList, TArray<FText> TextList, bool bPlayerBonus) {
}

void UKizokMenuBattleGroupOrder::PlayPackQueueIconAnim() {
}


void UKizokMenuBattleGroupOrder::PlayKickOutAnimatin(const TArray<FBtlMenuGroupMoveParam>& kickOutList) {
}

void UKizokMenuBattleGroupOrder::PlayInAnimEnemyGroupAll() {
}


void UKizokMenuBattleGroupOrder::PlayGroupMoveAnim(const FBtlMenuGroup& GroupParam) {
}


void UKizokMenuBattleGroupOrder::PlayDirectTurnStartAnim() {
}


void UKizokMenuBattleGroupOrder::PlayCharaDeadAnim(const TArray<FBtlMenuGroup>& List) {
}

void UKizokMenuBattleGroupOrder::PlayActionEndAnim() {
}


bool UKizokMenuBattleGroupOrder::IsExistDispTurnList() {
    return false;
}

void UKizokMenuBattleGroupOrder::InitSetting() {
}

void UKizokMenuBattleGroupOrder::InitOrderParts() {
}

void UKizokMenuBattleGroupOrder::InitGuestOrderParts() {
}

void UKizokMenuBattleGroupOrder::InitEnemyIcon() {
}

void UKizokMenuBattleGroupOrder::InitButtonGroupSelectMode() {
}

void UKizokMenuBattleGroupOrder::InitAllEnemyDisp() {
}




FVector2D UKizokMenuBattleGroupOrder::GetOffsetPosByTurnOrder(int32 TurnOrder) {
    return FVector2D{};
}




UKizokMenuBattleMain* UKizokMenuBattleGroupOrder::GetBattleMainWidget() {
    return NULL;
}

bool UKizokMenuBattleGroupOrder::GetBanquetBonus() {
    return false;
}

void UKizokMenuBattleGroupOrder::ForceFinishedIconDirectAnim() {
}


void UKizokMenuBattleGroupOrder::FocusTargetAnim(TArray<UKizokBattleCharaBase*> FocusList) {
}

void UKizokMenuBattleGroupOrder::FocusSetPartyChangeAnim() {
}

void UKizokMenuBattleGroupOrder::FocusLostTargetIconAll() {
}

void UKizokMenuBattleGroupOrder::FocusLostStatusListAll() {
}



void UKizokMenuBattleGroupOrder::DirectionAnimEndNotify(EBtlMenuDirectAnim AnimType) {
}

void UKizokMenuBattleGroupOrder::CurPlayerFocus() {
}





UKizokMenuBattleGroupOrder::UKizokMenuBattleGroupOrder() {
    this->DefalutIconScale = 0.00f;
    this->DefalutIconZOrder = 0;
    this->GroupMoveCurve = NULL;
    this->CurFocusButtonGroupIndex = 0;
    this->CurDierctAnimType = EBtlMenuDirectAnim::TurnStart;
    this->m_BtlMenuManager = NULL;
}

