#include "KizokBattleMenuFieldIcon.h"

class UKizokMenuBattleGroupIcon;

void UKizokBattleMenuFieldIcon::UpdatePosition() {
}







void UKizokBattleMenuFieldIcon::SetGroupIcon(UKizokMenuBattleGroupIcon* Widget) {
}


void UKizokBattleMenuFieldIcon::ResistWeakTutorial() {
}







bool UKizokBattleMenuFieldIcon::IsVisibleWeakMark() const {
    return false;
}

bool UKizokBattleMenuFieldIcon::IsVisibleResistMark() const {
    return false;
}


bool UKizokBattleMenuFieldIcon::IsAnyPlayngDirectAnim() {
    return false;
}

void UKizokBattleMenuFieldIcon::InitTargetCursor() {
}



int32 UKizokBattleMenuFieldIcon::GetGroupID() const {
    return 0;
}

FText UKizokBattleMenuFieldIcon::GetCharaName() const {
    return FText::GetEmpty();
}

FBtlCharaIcon UKizokBattleMenuFieldIcon::GetCharaIconParam() {
    return FBtlCharaIcon{};
}

float UKizokBattleMenuFieldIcon::GetCharaHpRate() {
    return 0.0f;
}

FSoftObjectPath UKizokBattleMenuFieldIcon::GetAttributeIconPath(ASP_ATTRIBUTE Attribute) const {
    return FSoftObjectPath{};
}


void UKizokBattleMenuFieldIcon::FinishedDirectAnimNotify() {
}


UKizokBattleMenuFieldIcon::UKizokBattleMenuFieldIcon() {
    this->bDirectPlayingAnim = false;
    this->CurDirectionAnim = EBtlMenuDirectAnim::TurnStart;
    this->VisibleWaitTime = 0.00f;
    this->bInAnm = false;
    this->TargetCursor = NULL;
    this->bEnableTargetCursor = false;
    this->bDispAttributeIcon = false;
    this->m_MenuBtlMain = NULL;
}

