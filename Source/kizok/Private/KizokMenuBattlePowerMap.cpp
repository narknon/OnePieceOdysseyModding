#include "KizokMenuBattlePowerMap.h"

class UKizokMenuBattleCharaIcon;





void UKizokMenuBattlePowerMap::SetPosGroupMoveIcon(int32 Index, FVector2D Pos) {
}



void UKizokMenuBattlePowerMap::PlayKickOutAnim(const TArray<FBtlMenuGroupMoveParam>& List) {
}

void UKizokMenuBattlePowerMap::PlayGroupMoveAnim(const FBtlMenuGroupPos& CurParam, const FBtlMenuGroupPos& NextParam) {
}



void UKizokMenuBattlePowerMap::PlayCharaChangeAnim(const FBtlMenuGroupPos& Param, PLAYER_ID playerID) {
}


void UKizokMenuBattlePowerMap::OffsetPosGroupMoveIcon(int32 Index, float Angle, FVector2D Pos) {
}

bool UKizokMenuBattlePowerMap::IsExistDirectAnimList() {
    return false;
}

void UKizokMenuBattlePowerMap::InitRegisterIconNotify() {
}





FBtlMenuGroupPos UKizokMenuBattlePowerMap::GetGroupMovePosParam(int32 Index) {
    return FBtlMenuGroupPos{};
}



void UKizokMenuBattlePowerMap::EndKickOutAnim() {
}

void UKizokMenuBattlePowerMap::DuplicateCharaIcon(const FBtlMenuGroupPos& CurPosParam, const FBtlMenuGroupPos& NextPosParam) {
}

void UKizokMenuBattlePowerMap::DeleteIconListFromWidget(UKizokMenuBattleCharaIcon* Icon) {
}

void UKizokMenuBattlePowerMap::DeleteIconList(int32 Index) {
}

FVector2D UKizokMenuBattlePowerMap::ConvertVectorFromAngle(float Angle, FVector2D Vec) {
    return FVector2D{};
}

void UKizokMenuBattlePowerMap::ClearDierctionIconList() {
}

void UKizokMenuBattlePowerMap::CallDirectAnimEndNotify() {
}


void UKizokMenuBattlePowerMap::AddDirectionAnimIconList(UKizokMenuBattleCharaIcon* Icon) {
}


int32 UKizokMenuBattlePowerMap::AddAnimIconList(FBtlPowerMapDirectAnim& Param) {
    return 0;
}

UKizokMenuBattlePowerMap::UKizokMenuBattlePowerMap() {
    this->GroupMoveAnimTime = 2.00f;
    this->GroupMoveCurve = NULL;
    this->TestCanvasPanel = NULL;
    this->CurDierctAnimType = EBtlMenuDirectAnim::TurnStart;
}

