#include "KizokMenuBattleResult.h"

class UGridPanel;






bool UKizokMenuBattleResult::IsFinishedConverstationWidget() {
    return false;
}




int32 UKizokMenuBattleResult::GetMoney() const {
    return 0;
}

int32 UKizokMenuBattleResult::GetExp() const {
    return 0;
}

TArray<FBtlResultItemInfo> UKizokMenuBattleResult::GetDropList() const {
    return TArray<FBtlResultItemInfo>();
}

void UKizokMenuBattleResult::CreateMesButtonGuide(uint8 create_num, UGridPanel* grid_panel) {
}

UKizokMenuBattleResult::UKizokMenuBattleResult() {
    this->bDebugMode = false;
    this->DebugResultExp = 0;
    this->DebugResultMoney = 0;
    this->CurrentSeq = EBtlResultSeq::DropDispPlaying;
    this->ExpInAnimWaitTime = 0.00f;
    this->MoneyInAnimWaitTime = 0.00f;
    this->ItemInAnimWaitTime = 0.00f;
    this->m_BtlMenuManager = NULL;
}

