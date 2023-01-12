#include "KizokBattleGaugeBar.h"


void UKizokBattleGaugeBar::StartGaugeAnim(float StartPercent, float EndPercent, bool bDamage, bool bHpGauge) {
}

void UKizokBattleGaugeBar::SetGaugeParam(float StartPercent, float EndPercent, bool bDamage, bool bHpGauge) {
}






bool UKizokBattleGaugeBar::IsFinishedGaugeAnim() {
    return false;
}


UKizokBattleGaugeBar::UKizokBattleGaugeBar() {
    this->GaugeAnimCurve = NULL;
    this->bGaugeAnimLoop = false;
    this->bHpBar = false;
    this->bDamageAnim = false;
    this->StartGaugePercent = 0.00f;
    this->EndGaugePercent = 0.00f;
    this->CurrentAnimTime = 0.00f;
}

