#include "KizokMenuBattleHitMark.h"



void UKizokMenuBattleHitMark::UnBindDelegates() {
}









FVector2D UKizokMenuBattleHitMark::GetNumberTextSize() {
    return FVector2D{};
}

FVector2D UKizokMenuBattleHitMark::GetNumberTextOffset() {
    return FVector2D{};
}

FVector2D UKizokMenuBattleHitMark::GetFrameSize() {
    return FVector2D{};
}


void UKizokMenuBattleHitMark::ExecFinishAnimNotify() {
}

TArray<int32> UKizokMenuBattleHitMark::ConvertNumberToDigitArray(int32 Number) {
    return TArray<int32>();
}

void UKizokMenuBattleHitMark::BindDelegates() {
}

UKizokMenuBattleHitMark::UKizokMenuBattleHitMark() {
    this->HitMarkManager = NULL;
    this->bFinishedAdjustPos = false;
    this->StartAnimWaitTime = 0.00f;
}

