#include "KizokMenuBattleSubCmd.h"

class UKizokMenuBattleMain;


void UKizokMenuBattleSubCmd::UpdateDispAll() {
}

void UKizokMenuBattleSubCmd::SubCmdTacticsDecide() {
}



void UKizokMenuBattleSubCmd::ShowSystemMessage(EBtlMenuSystemMesType systemMesType) {
}

void UKizokMenuBattleSubCmd::SetVisibleSubCmd(ESlateVisibility visibilityType) {
}

void UKizokMenuBattleSubCmd::SetInputEnableSubCmd(bool bEnable) {
}

void UKizokMenuBattleSubCmd::ResetInvalidInput() {
}

void UKizokMenuBattleSubCmd::PlayVoiceNotEscape(EBattleSubCmdType CommandType) {
}

void UKizokMenuBattleSubCmd::OpenWindow_Implementation(UKizokMenuBattleMain* parentWindow) {
}

bool UKizokMenuBattleSubCmd::OpenSubCommandWidget() {
    return false;
}

void UKizokMenuBattleSubCmd::OnceInvalidInput() {
}

bool UKizokMenuBattleSubCmd::IsUsableCommand(EBattleSubCmdType CommandType) {
    return false;
}

bool UKizokMenuBattleSubCmd::IsSelectableCurButton() {
    return false;
}

EBattleSubCmdType UKizokMenuBattleSubCmd::GetCurCommandType() const {
    return EBattleSubCmdType::Strategy;
}

int32 UKizokMenuBattleSubCmd::GetCmdListMaxNum() const {
    return 0;
}


void UKizokMenuBattleSubCmd::CloseSubCommandWidget() {
}

void UKizokMenuBattleSubCmd::CallCurSelectSubCommand() {
}

UKizokMenuBattleSubCmd::UKizokMenuBattleSubCmd() {
    this->SubCommandButtonGroupID = 0;
    this->bOnceInvalidInput = false;
    this->BattleModeSelectWindow = NULL;
    this->PartyChangeWindow = NULL;
    this->StatusCheckWindow = NULL;
}

