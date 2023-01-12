#include "KizokMenuBattlePartySelect.h"

class UKizokButtonWidget;
class UKizokMenuBattleMain;

void UKizokMenuBattlePartySelect::UpdateFocusIcon(UKizokButtonWidget* Button) {
}





void UKizokMenuBattlePartySelect::OpenWindow_Implementation(UKizokMenuBattleMain* parentWindow) {
}



bool UKizokMenuBattlePartySelect::IsInit() const {
    return false;
}

bool UKizokMenuBattlePartySelect::IsChangeIcon(int32 pre_focus_index, int32 next_focus_index) {
    return false;
}

void UKizokMenuBattlePartySelect::InitButtonInfo() {
}

void UKizokMenuBattlePartySelect::GroupeFocusOut() {
}

FBtlMenuDispStatus UKizokMenuBattlePartySelect::GetStatus(int32 Index) const {
    return FBtlMenuDispStatus{};
}

FString UKizokMenuBattlePartySelect::GetSelectPlayerName() {
    return TEXT("");
}

PLAYER_ID UKizokMenuBattlePartySelect::GetSelectPlayerID() {
    return PLAYER_ID::PLAYER_ID_LUF;
}

TArray<PLAYER_ID> UKizokMenuBattlePartySelect::GetPlayerIDList() {
    return TArray<PLAYER_ID>();
}

int32 UKizokMenuBattlePartySelect::GetPartyMemberNum() {
    return 0;
}

int32 UKizokMenuBattlePartySelect::GetNextExp(PLAYER_ID playerID) {
    return 0;
}

int32 UKizokMenuBattlePartySelect::GetMemberIndex(const UKizokButtonWidget* InButtonWidget) const {
    return 0;
}

FSoftObjectPath UKizokMenuBattlePartySelect::GetItemIcon(int32 Index) const {
    return FSoftObjectPath{};
}

int32 UKizokMenuBattlePartySelect::GetExp(PLAYER_ID playerID) {
    return 0;
}

FSoftObjectPath UKizokMenuBattlePartySelect::GetCharaFlag(PLAYER_ID PLAYER_ID) const {
    return FSoftObjectPath{};
}

FSoftObjectPath UKizokMenuBattlePartySelect::GetCharaFace(PLAYER_ID PLAYER_ID) const {
    return FSoftObjectPath{};
}

FSoftObjectPath UKizokMenuBattlePartySelect::GetButtonNumber(int32 Index) const {
    return FSoftObjectPath{};
}

FSoftObjectPath UKizokMenuBattlePartySelect::GetBGTexture(int32 InIndex) const {
    return FSoftObjectPath{};
}


void UKizokMenuBattlePartySelect::FocusIconAll() {
}

void UKizokMenuBattlePartySelect::FocusGroupIconList(TArray<int32> focus_index_list) {
}




void UKizokMenuBattlePartySelect::ChangeFocusMember(int32 InFocusMemberIndex) {
}

void UKizokMenuBattlePartySelect::ChangeFocusIcon(int32 pre_focus_index, int32 next_focus_index) {
}

UKizokMenuBattlePartySelect::UKizokMenuBattlePartySelect() {
    this->TargetSelectType = EBtlMenuTargetSelectType::BMTST_One;
    this->bTargetRangeSameGroup = false;
    this->PartyButtonGroupID = 0;
    this->bAllSelect = false;
}

