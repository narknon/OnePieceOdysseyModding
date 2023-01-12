#include "KizokBattleStatusButton.h"

class UImage;
class UKizokBattleStatusButton;
class UCurveFloat;

void UKizokBattleStatusButton::UpdateStatusChangeList(int32 DispNum, const TArray<FSoftObjectPath>& List) {
}












void UKizokBattleStatusButton::PlaySPRecoverAnim(UImage* gauge, UImage* eff, int32 last, int32 Now, int32 Max) {
}

void UKizokBattleStatusButton::PlayGroupMoveAnimByStatusWBP(UKizokBattleStatusButton* StatusWBP, UCurveFloat* Curve) {
}


FSoftObjectPath UKizokBattleStatusButton::GetStatusIconPath(EBtlMenuStatusIconType StatusType) {
    return FSoftObjectPath{};
}

TArray<FSoftObjectPath> UKizokBattleStatusButton::GetStatusChangePathList(const TArray<EBtlMenuStatusIconType>& StatusList) {
    return TArray<FSoftObjectPath>();
}

FSoftObjectPath UKizokBattleStatusButton::GetCharaIconPath(PLAYER_ID playerID, EKizokCharaIconType IconType) {
    return FSoftObjectPath{};
}

FSoftObjectPath UKizokBattleStatusButton::GetCharaFacePath(PLAYER_ID playerID) {
    return FSoftObjectPath{};
}

FSoftObjectPath UKizokBattleStatusButton::GetAttributeIconPath(ASP_ATTRIBUTE Attribute) const {
    return FSoftObjectPath{};
}


void UKizokBattleStatusButton::DirectionAnimEndNotify(EBtlMenuDirectAnim AnimType) {
}

float UKizokBattleStatusButton::CalcMaterialOffsetValue(int32 CurValue, int32 MaxValue) {
    return 0.0f;
}

UKizokBattleStatusButton::UKizokBattleStatusButton() {
    this->bReflectColorByPlayer = false;
    this->bUseMaterialGaugeBar = false;
    this->MinOffsetMaterialBar = 0.00f;
    this->MaxOffsetMaterialBarValue = 0.00f;
    this->SpGaugeCurve = NULL;
    this->bEnableDebugMode = false;
    this->DebugPlayerId = PLAYER_ID::PLAYER_ID_LUF;
    this->bDebugCheckHpBar = false;
    this->bDebugCheckSpBar = false;
    this->DebugCurValue = 0;
    this->DebugMaxValue = 0;
    this->IconDispMaxNum = 3;
    this->bPlayingMoveAnim = false;
    this->bPlayingSPRecoverAnim = false;
    this->SpGaugeImage = NULL;
    this->SpGaugeEffImage = NULL;
    this->MoveAnimCurve = NULL;
    this->MoveTargetWBP = NULL;
    this->BtlGroupWidget = NULL;
}

