#include "KizokMenuBattleConversation.h"

class UGridPanel;


void UKizokMenuBattleConversation::StartConvOperate() {
}



bool UKizokMenuBattleConversation::IsSelectableCommand(EBattleSubCmdType CommandType) {
    return false;
}

bool UKizokMenuBattleConversation::IsSelectableCoiceMesWindow() {
    return false;
}


EBattleSubCmdType UKizokMenuBattleConversation::GetSelectTacticsCmdType() const {
    return EBattleSubCmdType::Strategy;
}

FBtlButtonCmdWindow UKizokMenuBattleConversation::GetMesWindowInfo(const EBtlMainMesWindow message_type) {
    return FBtlButtonCmdWindow{};
}

void UKizokMenuBattleConversation::EndConvOperate() {
}

void UKizokMenuBattleConversation::CreateMesButtonGuide(uint8 create_num, UGridPanel* grid_panel) {
}

void UKizokMenuBattleConversation::CloseTacticsWindow() {
}

void UKizokMenuBattleConversation::CallSubCommand() {
}

UKizokMenuBattleConversation::UKizokMenuBattleConversation() {
    this->MesWindowGroupID = 0;
}

