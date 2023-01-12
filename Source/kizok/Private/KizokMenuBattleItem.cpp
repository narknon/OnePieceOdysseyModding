#include "KizokMenuBattleItem.h"

class UKizokMenuBattlePartySelect;
class UKizokMenuBattleMain;
class UKizokTextBlock;

void UKizokMenuBattleItem::ShowSystemMessage(EBtlMenuSystemMesType systemMesType) {
}

void UKizokMenuBattleItem::SetTargetRange_Implementation(EBtlMenuTargetRange Type) {
}

void UKizokMenuBattleItem::SetItemDecision(bool dec) {
}

void UKizokMenuBattleItem::SetBattleMainWidget(UKizokMenuBattleMain* Widget) {
}

void UKizokMenuBattleItem::SelectedItem(FName ItemId) {
}

void UKizokMenuBattleItem::OpenWindow_Implementation(UKizokMenuBattleMain* parentWindow) {
}


void UKizokMenuBattleItem::OpenPartySelectWindow() {
}

bool UKizokMenuBattleItem::IsUseBattle(FName item_id) const {
    return false;
}

bool UKizokMenuBattleItem::IsTutorialUseItem() {
    return false;
}

bool UKizokMenuBattleItem::IsRecoveryAilment(PLAYER_ID PLAYER_ID, FKizokBtlItemEffect& effect_info) {
    return false;
}

bool UKizokMenuBattleItem::IsItemDecision() {
    return false;
}

void UKizokMenuBattleItem::InitTabText(UKizokTextBlock* text_block, int32 tab_index) {
}

EBTL_NEW_TUTORIAL_PHASE_ID UKizokMenuBattleItem::GetTutorialPhaseID() {
    return EBTL_NEW_TUTORIAL_PHASE_ID::BTLNTP_BTL_NONE;
}

int32 UKizokMenuBattleItem::GetTabTextListNum() const {
    return 0;
}

uint8 UKizokMenuBattleItem::GetTabTextListIndex(int32 tab_index) const {
    return 0;
}

EKizokItemMenuHealResult UKizokMenuBattleItem::GetPreHealResult(PLAYER_ID PLAYER_ID) {
    return EKizokItemMenuHealResult::HealHP;
}

UKizokMenuBattlePartySelect* UKizokMenuBattleItem::GetPartySelectWidget() {
    return NULL;
}

TArray<PLAYER_ID> UKizokMenuBattleItem::GetMainPartyList() {
    return TArray<PLAYER_ID>();
}

bool UKizokMenuBattleItem::GetItemEffetInfo(FName in_item_id, FKizokBtlItemEffect& out_info) {
    return false;
}

FKizokItemDispData UKizokMenuBattleItem::GetFocusItemData() const {
    return FKizokItemDispData{};
}

void UKizokMenuBattleItem::ExecuteItemAction(const FString& TargetName) {
}


void UKizokMenuBattleItem::DecideItemSelect() {
}




void UKizokMenuBattleItem::ChangeCameraType(EBtlMenuCameraType Type) {
}

void UKizokMenuBattleItem::ChangeButtonGuide(EBtlMainMesWindow MessageType) {
}


void UKizokMenuBattleItem::CancelItemSelect() {
}

UKizokMenuBattleItem::UKizokMenuBattleItem() {
    this->StatusWidget = NULL;
    this->bOperateItemList = false;
    this->EnableCancelButton = true;
    this->NextBattleSeq = EBattleMenuSeq::BMS_Situation;
    this->m_BattleMainWidget = NULL;
}

