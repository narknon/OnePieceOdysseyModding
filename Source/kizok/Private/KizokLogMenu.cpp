#include "KizokLogMenu.h"

class UScrollBox;

void UKizokLogMenu::ShowBonusDialog() {
}

void UKizokLogMenu::RegisterLogListFromScrollBox(UScrollBox* InScrollBox) {
}

void UKizokLogMenu::RegisterLogInfoScrollBox(UScrollBox* InScrollBox, EKizokLogRewardType InRewardType) {
}

void UKizokLogMenu::ReceiveRewardCollectively() {
}

void UKizokLogMenu::ReceiveReward() {
}




void UKizokLogMenu::OnFinishBonusDialog() {
}

FText UKizokLogMenu::GetUnreleaseTitleText() const {
    return FText::GetEmpty();
}

FText UKizokLogMenu::GetUnreleaseRewardText() const {
    return FText::GetEmpty();
}

FKizokLogDispData UKizokLogMenu::GetLogData(int32 InIndex) const {
    return FKizokLogDispData{};
}

void UKizokLogMenu::EndGroundLog() {
}

void UKizokLogMenu::CompletedUnloadGroundLog() {
}

void UKizokLogMenu::CompletedLoadGroundLog() {
}

void UKizokLogMenu::CompletedEndFadeGroundLog() {
}

void UKizokLogMenu::CompletedBeginFadeGroundLog() {
}

void UKizokLogMenu::ChangeSelectLog(int32 InIndex) {
}

void UKizokLogMenu::BeginGroundLog() {
}

UKizokLogMenu::UKizokLogMenu() {
    this->LogInfoScrollLength = 0.00f;
    this->AcceIconCategory = 0;
    this->MoneyIconCategory = 0;
    this->LogStrTable = NULL;
    this->LogWidgetClass = NULL;
    this->BonusDialogClass = NULL;
    this->BonusDialog = NULL;
}

