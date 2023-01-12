#include "KizokMenuBattlePartyChange.h"

class UKizokButtonWidget;
class UPanelWidget;
class UKizokMenuBattleMain;



void UKizokMenuBattlePartyChange::UpdateCharaButton(UPanelWidget* InPanelWidget, int32 InNum) {
}

void UKizokMenuBattlePartyChange::ShowSystemMessage(EBtlMenuSystemMesType systemMesType) {
}


void UKizokMenuBattlePartyChange::RequestPartyLists() {
}


void UKizokMenuBattlePartyChange::OpenWindow_Implementation(UKizokMenuBattleMain* parentWidget) {
}

bool UKizokMenuBattlePartyChange::IsSelectableChangeMenberIdx(int32 Index) {
    return false;
}

bool UKizokMenuBattlePartyChange::IsSelectableChangeMenber() {
    return false;
}

bool UKizokMenuBattlePartyChange::IsButtonGroupListEmpty() const {
    return false;
}

int32 UKizokMenuBattlePartyChange::GetTotalButtonNum() const {
    return 0;
}

FBtlMenuDispStatus UKizokMenuBattlePartyChange::GetSubStatusInfo(int32 Index) const {
    return FBtlMenuDispStatus{};
}

PLAYER_ID UKizokMenuBattlePartyChange::GetSubPlayerID() const {
    return PLAYER_ID::PLAYER_ID_LUF;
}

int32 UKizokMenuBattlePartyChange::GetSubPartyMemberNum() const {
    return 0;
}

UKizokButtonWidget* UKizokMenuBattlePartyChange::GetSubGroupButtonWidget(int32 Index) {
    return NULL;
}

int32 UKizokMenuBattlePartyChange::GetSubButtonNum() const {
    return 0;
}

FSoftObjectPath UKizokMenuBattlePartyChange::GetSubAndGuestCharaFace(uint8 InIndex) const {
    return FSoftObjectPath{};
}

int32 UKizokMenuBattlePartyChange::GetNextExp(PLAYER_ID playerID) {
    return 0;
}

int32 UKizokMenuBattlePartyChange::GetMemberIndex(const UKizokButtonWidget* InButtonWidget) const {
    return 0;
}

FBtlMenuDispStatus UKizokMenuBattlePartyChange::GetMainStatusInfo(int32 Index) const {
    return FBtlMenuDispStatus{};
}

PLAYER_ID UKizokMenuBattlePartyChange::GetMainPlayerID() const {
    return PLAYER_ID::PLAYER_ID_LUF;
}

int32 UKizokMenuBattlePartyChange::GetMainPartyMemberNum() const {
    return 0;
}

UKizokButtonWidget* UKizokMenuBattlePartyChange::GetMainGroupButtonWidget(int32 Index) {
    return NULL;
}

int32 UKizokMenuBattlePartyChange::GetMainButtonNum() const {
    return 0;
}

int32 UKizokMenuBattlePartyChange::GetExp(PLAYER_ID playerID) {
    return 0;
}

FSoftObjectPath UKizokMenuBattlePartyChange::GetCharaFlag(PLAYER_ID PLAYER_ID) const {
    return FSoftObjectPath{};
}

FSoftObjectPath UKizokMenuBattlePartyChange::GetCharaFace(PLAYER_ID PLAYER_ID) const {
    return FSoftObjectPath{};
}

FSoftObjectPath UKizokMenuBattlePartyChange::GetButtonNumber(int32 Index) const {
    return FSoftObjectPath{};
}

void UKizokMenuBattlePartyChange::ExecPartyChange() {
}


void UKizokMenuBattlePartyChange::ChangeFocusMember(int32 InFocusMemberIndex) {
}

void UKizokMenuBattlePartyChange::ChangeButtonGuide(EBtlMainMesWindow MessageType) {
}

UKizokMenuBattlePartyChange::UKizokMenuBattlePartyChange() {
    this->CurrentPartyChangeSeq = EBtlPartyChangeSeq::BPCS_First_Select;
    this->MainPartyButtonGroupID = 0;
    this->SubPartyButtonGroupID = 0;
    this->IsChangeConfirm = false;
    this->FirstSelectIndex = 0;
    this->SecondSelectIndex = 0;
    this->FocusMemberIndex = 0;
}

