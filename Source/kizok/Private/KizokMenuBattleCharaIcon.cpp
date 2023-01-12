#include "KizokMenuBattleCharaIcon.h"

class UCurveFloat;






void UKizokMenuBattleCharaIcon::SituationIconOff() {
}


void UKizokMenuBattleCharaIcon::SetValidScale(bool bValid) {
}

void UKizokMenuBattleCharaIcon::SetValidActedAnim(bool bValid) {
}

void UKizokMenuBattleCharaIcon::SetUsePlayerFlagImage(bool bUseFlag) {
}







void UKizokMenuBattleCharaIcon::PlaySituationIcon(TArray<FText> TextList, bool bPlayerBonus) {
}



void UKizokMenuBattleCharaIcon::PlayMoveAnim(UCurveFloat* Curve, FVector2D EndPos, EBtlMenuDirectAnim AnimType) {
}
















bool UKizokMenuBattleCharaIcon::IsPlayedCharaDeadAnim() {
    return false;
}

bool UKizokMenuBattleCharaIcon::IsInitIcon() {
    return false;
}


void UKizokMenuBattleCharaIcon::GroupMoveAnimEnd() {
}

FBtlCharaIcon UKizokMenuBattleCharaIcon::GetIconParam() {
    return FBtlCharaIcon{};
}

void UKizokMenuBattleCharaIcon::DirectionAnimEndNotify(EBtlMenuDirectAnim AnimType) {
}

void UKizokMenuBattleCharaIcon::CharaDeadAnimEndNotify() {
}

void UKizokMenuBattleCharaIcon::CharaChangeAnimEndNotify() {
}



UKizokMenuBattleCharaIcon::UKizokMenuBattleCharaIcon() {
    this->bUsePlayerFlag = false;
    this->bValidScaleChange = false;
    this->bValidActedAnim = false;
    this->bActedCharaDeadAnim = false;
    this->bMoveAnimLoop = false;
    this->bWaitTimeLoop = false;
    this->MoveAnimationFinishedWaitTime = 0.00f;
    this->MoveAnimCurve = NULL;
}

