#include "BattleTacticsCmd.h"

FBattleTacticsCmd::FBattleTacticsCmd() {
    this->CommandType = EBattleSubCmdType::Strategy;
    this->DefaultChoiceType = EBtlMesWindowDispState::Normal;
}

