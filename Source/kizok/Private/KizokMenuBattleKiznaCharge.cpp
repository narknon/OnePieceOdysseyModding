#include "KizokMenuBattleKiznaCharge.h"

class UKizokMenuBattleMain;









void UKizokMenuBattleKiznaCharge::PlayKiznaChargeAnim(const FKiznaChargeAnimParm& Param) {
}



void UKizokMenuBattleKiznaCharge::OpenWindow_Implementation(UKizokMenuBattleMain* parentWindow) {
}


float UKizokMenuBattleKiznaCharge::GetKiznaGaugeCurveValue(float kiznaGaugeRate) {
    return 0.0f;
}

int32 UKizokMenuBattleKiznaCharge::GetCurKiznaChargeValue() {
    return 0;
}

int32 UKizokMenuBattleKiznaCharge::GetCurKiznaChargeLevel() {
    return 0;
}

void UKizokMenuBattleKiznaCharge::FinishedDirectAnim() {
}

void UKizokMenuBattleKiznaCharge::DirectionAnimEndNotify() {
}

UKizokMenuBattleKiznaCharge::UKizokMenuBattleKiznaCharge() {
    this->MaxGaugeBarPercent = 0.00f;
    this->MaxKiznaChargeValue = 1000.00f;
    this->MaxKiznaLevel = 10;
    this->GaugeBarUpdateTiming = 0.00f;
    this->KiznaGaugeCurve = NULL;
    this->CurDierctAnimType = EBtlMenuDirectAnim::TurnStart;
    this->bFirstGaugeUp = false;
}

