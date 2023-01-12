#include "KizokBountyQuestBoardMenu.h"

class UKizokUserWidget;
class UScrollBox;
class UWidgetAnimation;
class UDataTable;

void UKizokBountyQuestBoardMenu::SortBountyQuestDataList() {
}

void UKizokBountyQuestBoardMenu::SetState(EKizokBountyQuestBoardMenuState InState) {
}

void UKizokBountyQuestBoardMenu::SetScrollBoxInfoAndButtonGroupInputEnable(bool InInputEnable) {
}

void UKizokBountyQuestBoardMenu::SetReceiveState(EKizokBountyQuestBoardMenuReceiveState InState) {
}

EKizokBountyQuestState UKizokBountyQuestBoardMenu::SelectBountyQuest() {
    return EKizokBountyQuestState::OrderNotAcceptedState;
}

void UKizokBountyQuestBoardMenu::RegisterBountyQuestMessage() {
}

void UKizokBountyQuestBoardMenu::ReceiveRewardMoney() {
}


bool UKizokBountyQuestBoardMenu::IsBountyBoard() const {
    return false;
}

void UKizokBountyQuestBoardMenu::InitBountyReceiveRewardMenu(FName InQuestId) {
}

void UKizokBountyQuestBoardMenu::InitBountyQuestBoardMenu(FName InRegionId) {
}

EKizokBountyQuestBoardMenuState UKizokBountyQuestBoardMenu::GetState() const {
    return EKizokBountyQuestBoardMenuState::SelectQuestState;
}

int32 UKizokBountyQuestBoardMenu::GetSortStep() const {
    return 0;
}

FText UKizokBountyQuestBoardMenu::GetRegionBoardText() const {
    return FText::GetEmpty();
}

EKizokBountyQuestBoardMenuReceiveState UKizokBountyQuestBoardMenu::GetReceiveState() const {
    return EKizokBountyQuestBoardMenuReceiveState::RewardMoney;
}

int32 UKizokBountyQuestBoardMenu::GetReceivableRewardBountyQuestNum() const {
    return 0;
}

bool UKizokBountyQuestBoardMenu::GetNoticeDeletePossible() const {
    return false;
}

UDataTable* UKizokBountyQuestBoardMenu::GetBountyTextDataTable() const {
    return NULL;
}

int32 UKizokBountyQuestBoardMenu::GetBountyQuestDataNum() const {
    return 0;
}

FKizokBountyQuestBoardMenuData UKizokBountyQuestBoardMenu::GetBountyQuestData(int32 InIndex) {
    return FKizokBountyQuestBoardMenuData{};
}

int32 UKizokBountyQuestBoardMenu::GetBountyQuestButtonGroupFocusIndex() const {
    return 0;
}

void UKizokBountyQuestBoardMenu::FinishMessage() {
}

void UKizokBountyQuestBoardMenu::DisableBountyQuestDataNotice(int32 InIndex) {
}

TArray<int32> UKizokBountyQuestBoardMenu::CreateReceivableRewardNumberList() {
    return TArray<int32>();
}

bool UKizokBountyQuestBoardMenu::CheckReceivemoneyOver() const {
    return false;
}

void UKizokBountyQuestBoardMenu::ChangeScrollBoxInfo(float InScrollInsideSize) {
}

int32 UKizokBountyQuestBoardMenu::CalcOverMoney(int32 InRewardMoney, int32 InBrokerage) const {
    return 0;
}

int32 UKizokBountyQuestBoardMenu::CalcFinalMoney(int32 InRewardMoney, int32 InBrokerage) const {
    return 0;
}

void UKizokBountyQuestBoardMenu::BackSelectBountyQuest(bool bInNextBountyQuestState) {
}

void UKizokBountyQuestBoardMenu::AddButtonWidgetAndCreateButtonGroup(UScrollBox* InScrollBox, UKizokUserWidget* InCursorWidget, UWidgetAnimation* InAnimation) {
}

UKizokBountyQuestBoardMenu::UKizokBountyQuestBoardMenu() {
    this->BountyQuestParamTableAsset = NULL;
    this->BountyQuestStringTableAsset = NULL;
    this->MessageParamTableAsset = NULL;
    this->MessageStringTableAsset = NULL;
    this->BountyQuestButtonWidgetClass = NULL;
    this->ConversationWidget = NULL;
}

