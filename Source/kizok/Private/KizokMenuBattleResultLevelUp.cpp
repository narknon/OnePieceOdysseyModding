#include "KizokMenuBattleResultLevelUp.h"


void UKizokMenuBattleResultLevelUp::UpdateDispLevelUp() {
}



void UKizokMenuBattleResultLevelUp::SetLevelUpInfo(const TArray<FBtlResultLevelUpInfo>& chara_list) {
}


void UKizokMenuBattleResultLevelUp::PlayLevelUpVoice(PLAYER_ID PLAYER_ID) {
}


bool UKizokMenuBattleResultLevelUp::IsWaitState() {
    return false;
}

bool UKizokMenuBattleResultLevelUp::IsExsistLevelUpList() {
    return false;
}

int32 UKizokMenuBattleResultLevelUp::GetLevelUpListNum() {
    return 0;
}

FBtlResultLevelUpDisp UKizokMenuBattleResultLevelUp::GetCurrentDispData() const {
    return FBtlResultLevelUpDisp{};
}


FSoftObjectPath UKizokMenuBattleResultLevelUp::GetCharaIconPath(PLAYER_ID PLAYER_ID) const {
    return FSoftObjectPath{};
}

UKizokMenuBattleResultLevelUp::UKizokMenuBattleResultLevelUp() {
    this->bDispWaitState = false;
}

