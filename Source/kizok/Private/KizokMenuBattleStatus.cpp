#include "KizokMenuBattleStatus.h"

class UKizokBattleMenuManager;
class UImage;
class UKizokMenuBattleMain;


void UKizokMenuBattleStatus::UpdateStatusAll(const TArray<FBtlMenuStatus>& status_list) {
}

void UKizokMenuBattleStatus::UpdateStatus(int32 Index, const FBtlMenuStatus& Status) {
}





void UKizokMenuBattleStatus::UnfocusStatusButtonList() {
}

void UKizokMenuBattleStatus::SetStatusIcon(PLAYER_ID PLAYER_ID, UImage* Image, FName parameter_name) {
}

void UKizokMenuBattleStatus::SetButtonGroupInfo(int32 button_gruop_id) {
}

void UKizokMenuBattleStatus::SetBtlMenuManager(UKizokBattleMenuManager* manager) {
}

void UKizokMenuBattleStatus::SetBattleMainWBP(UKizokMenuBattleMain* main_widget) {
}


bool UKizokMenuBattleStatus::IsActedPlayer(PLAYER_ID playerID) {
    return false;
}

int32 UKizokMenuBattleStatus::GetStatusListNum() const {
    return 0;
}

FSoftObjectPath UKizokMenuBattleStatus::GetStatusIconPath(EBtlMenuStatusIconType Type) const {
    return FSoftObjectPath{};
}

FSoftObjectPath UKizokMenuBattleStatus::GetStatusCharaIconPath(PLAYER_ID PLAYER_ID) {
    return FSoftObjectPath{};
}

TArray<FSoftObjectPath> UKizokMenuBattleStatus::GetStatusChangePathList(int32 Index) {
    return TArray<FSoftObjectPath>();
}


FBtlMenuStatus UKizokMenuBattleStatus::GetStatus(int32 Index) const {
    return FBtlMenuStatus{};
}

PLAYER_ID UKizokMenuBattleStatus::GetSelectPlayerID() {
    return PLAYER_ID::PLAYER_ID_LUF;
}

FString UKizokMenuBattleStatus::GetSelectCharaName() {
    return TEXT("");
}

TArray<FBtlCharaIcon> UKizokMenuBattleStatus::GetEnemyGroupList(PLAYER_ID PLAYER_ID) {
    return TArray<FBtlCharaIcon>();
}

void UKizokMenuBattleStatus::FocusCurrentSelectChara() {
}




void UKizokMenuBattleStatus::ChangeFocusMember(int32 InFocusMemberIndex) {
}

UKizokMenuBattleStatus::UKizokMenuBattleStatus() {
    this->StatusHorizontalBox = NULL;
    this->CharaSelelctHorizontalBox = NULL;
    this->StatusIconDispNum = 0;
    this->MenuBattleMain = NULL;
    this->m_BtlMenuManager = NULL;
}

