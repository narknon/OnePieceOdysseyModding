#include "KizokMenuBattleMainCmd.h"

class UKizokButtonWidget;
class UVerticalBox;

void UKizokMenuBattleMainCmd::UpdateFocusButton() {
}



void UKizokMenuBattleMainCmd::UpdateCmdDispType() {
}

void UKizokMenuBattleMainCmd::SetMainCmdAnm(bool anm) {
}

void UKizokMenuBattleMainCmd::SetActionableStatePlayer(bool bActionableState) {
}

void UKizokMenuBattleMainCmd::SetActedPlayerFlag(bool bActed) {
}

void UKizokMenuBattleMainCmd::ScrollUpdateListName(UVerticalBox* vertical_box) {
}

bool UKizokMenuBattleMainCmd::IsUsableArtsSkill() {
    return false;
}

bool UKizokMenuBattleMainCmd::IsRapidBattle() {
    return false;
}

bool UKizokMenuBattleMainCmd::IsMainCmdAnm() {
    return false;
}

bool UKizokMenuBattleMainCmd::IsExistDispSkillInfo() {
    return false;
}

bool UKizokMenuBattleMainCmd::IsChangeSeq(UKizokButtonWidget* Button) {
    return false;
}

bool UKizokMenuBattleMainCmd::IsAutoBattle() {
    return false;
}

void UKizokMenuBattleMainCmd::InitPlayerTurn(int32 InFocusIndex) {
}


EBattleMainCmdType UKizokMenuBattleMainCmd::GetFocusCmdType() {
    return EBattleMainCmdType::BMC_LinkArts;
}


EBattleMainCmdType UKizokMenuBattleMainCmd::GetCommnadType(UKizokButtonWidget* Button) {
    return EBattleMainCmdType::BMC_LinkArts;
}

EMainCmdDispType UKizokMenuBattleMainCmd::GetCmdDispType() {
    return EMainCmdDispType::UsableAllCmd;
}

UKizokMenuBattleMainCmd::UKizokMenuBattleMainCmd() {
    this->bNormalInputMethod = false;
    this->bActedPlayer = false;
    this->bActionableStatePlayer = false;
    this->CurCmdDispType = EMainCmdDispType::UsableAllCmd;
    this->PreCmdDispType = EMainCmdDispType::UsableAllCmd;
    this->CommandButtonGroupID = 0;
}

