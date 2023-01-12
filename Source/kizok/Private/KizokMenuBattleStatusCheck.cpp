#include "KizokMenuBattleStatusCheck.h"

class UKizokUserWidget;
class AKizokNewBattleMode;
class UKizokMenuBattleMain;
class UGridPanel;


void UKizokMenuBattleStatusCheck::UpdateDescText() {
}



void UKizokMenuBattleStatusCheck::SetCharaIconPath(AKizokNewBattleMode* BattleMode) {
}

int32 UKizokMenuBattleStatusCheck::RegisterButtonFromGridPanel(UGridPanel* InGridPanel, int32 InColumnNum, int32 InRowNum, UKizokUserWidget* InCursorWidget, int32 InFocusIndex) {
    return 0;
}

void UKizokMenuBattleStatusCheck::OpenWindow_Implementation(UKizokMenuBattleMain* parentWindow) {
}

void UKizokMenuBattleStatusCheck::InitSetting() {
}

TArray<PLAYER_ID> UKizokMenuBattleStatusCheck::GetMainPartyList() {
    return TArray<PLAYER_ID>();
}

FSoftObjectPath UKizokMenuBattleStatusCheck::GetCharaImagePath(PLAYER_ID playerID) {
    return FSoftObjectPath{};
}


UKizokMenuBattleStatusCheck::UKizokMenuBattleStatusCheck() {
    this->ColumnMax = 5;
    this->RowMax = 5;
    this->StautsIndexMax = 0;
    this->CurSelectButtonGroupIndex = 0;
}

