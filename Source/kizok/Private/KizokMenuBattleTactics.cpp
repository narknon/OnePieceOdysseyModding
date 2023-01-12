#include "KizokMenuBattleTactics.h"

class UKizokMenuBattleMain;

void UKizokMenuBattleTactics::OpenWindow_Implementation(UKizokMenuBattleMain* parentWidget) {
}

void UKizokMenuBattleTactics::NotCalledStartWidgetOperate() {
}


void UKizokMenuBattleTactics::DecideAction(EBtlPlayerActionType Type) {
}



UKizokMenuBattleTactics::UKizokMenuBattleTactics() {
    this->TacticsButtonGruopID = 0;
    this->CurPlayerActionType = EBtlPlayerActionType::PlayerAction;
    this->bDecideButtonAction = false;
}

