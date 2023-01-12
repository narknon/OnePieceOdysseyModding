#include "KizokMenuBattleTurnGauge.h"

class UKizokMenuBattleCharaIcon;
class UHorizontalBox;







bool UKizokMenuBattleTurnGauge::IsExistDirectAnimList() {
    return false;
}



FSoftObjectPath UKizokMenuBattleTurnGauge::GetCurPlayerIconPath() {
    return FSoftObjectPath{};
}

int32 UKizokMenuBattleTurnGauge::GetCurPlayerGroupId() {
    return 0;
}

void UKizokMenuBattleTurnGauge::DirectionAnimEndNotify() {
}



void UKizokMenuBattleTurnGauge::CreateCharaIcon(int32 CreateNum, UHorizontalBox* Box) {
}

void UKizokMenuBattleTurnGauge::ClearDierctionIconList() {
}

void UKizokMenuBattleTurnGauge::BindEndDirectionAnimNotify(UKizokMenuBattleCharaIcon* Icon) {
}

void UKizokMenuBattleTurnGauge::AddDirectionAnimIconList(UKizokMenuBattleCharaIcon* Icon) {
}

UKizokMenuBattleTurnGauge::UKizokMenuBattleTurnGauge() {
    this->PlayerGaugeHighPos = 0.00f;
    this->Group1GaugeHighPos = 0.00f;
    this->Group2GaugeHighPos = 0.00f;
    this->Group3GaugeHighPos = 0.00f;
    this->Group4GaugeHighPos = 0.00f;
    this->InitGaugeWidePos = 0.00f;
    this->GaugeMoveLength = 0.00f;
    this->MaxDispIconNum = 11;
    this->GroupMoveCurve = NULL;
    this->bEnableCmdOperateChara = false;
    this->bEnemyTurn = false;
    this->CurDierctAnimType = EBtlMenuDirectAnim::TurnStart;
}

