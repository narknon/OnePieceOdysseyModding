#include "KizokMenuBattleGroupParty.h"


bool UKizokMenuBattleGroupParty::IsValidGroupTypeData() {
    return false;
}

void UKizokMenuBattleGroupParty::InitOrderParts() {
}


UKizokMenuBattleGroupParty::UKizokMenuBattleGroupParty() {
    this->GroupType = EBtlMenuGruopType::Group0;
    this->CurPlayerNumInGroup = 0;
}

