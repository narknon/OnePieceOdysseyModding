#include "KizokMenuBattleSituation.h"

void UKizokMenuBattleSituation::UnBindDelegates() {
}







void UKizokMenuBattleSituation::SetFrameWidgetType(ESITUATIONRIBBON frameType) {
}

void UKizokMenuBattleSituation::RemoveVisibleDispType(EBtlSituationDispType Type) {
}

void UKizokMenuBattleSituation::RemoveAllVisibleDispType() {
}






bool UKizokMenuBattleSituation::IsVisibleDispType(EBtlSituationDispType Type) {
    return false;
}

bool UKizokMenuBattleSituation::IsAnyDispType() {
    return false;
}


void UKizokMenuBattleSituation::ExecFinishAnimNotify() {
}


void UKizokMenuBattleSituation::BindDelegates() {
}

void UKizokMenuBattleSituation::AddVisibleDispType(EBtlSituationDispType Type) {
}

UKizokMenuBattleSituation::UKizokMenuBattleSituation() {
    this->bWarningAnim = false;
    this->bEndSituation = false;
    this->CurDispFrameType = ESITUATIONRIBBON::RIBBON_NONE;
    this->DispTypeBits = 0;
}

