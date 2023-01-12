#include "KizokDialogMenu.h"

class UHorizontalBox;

void UKizokDialogMenu::SelectDialogToTextId(const FName InTextId, bool bInContinuousInputProtectionEnable) {
}

void UKizokDialogMenu::SelectDialogToMessage(const FText& InMessage, bool bInContinuousInputProtectionEnable) {
}

void UKizokDialogMenu::SelectDialog(uint8 InUITextIndex, bool bInContinuousInputProtectionEnable) {
}

void UKizokDialogMenu::RegisterButtonGuideWidget(UHorizontalBox* InHorizontalBox) {
}


void UKizokDialogMenu::OnIsPlayAnimationFlag() {
}




void UKizokDialogMenu::OffIsPlayAnimationFlag() {
}

void UKizokDialogMenu::MessageOnlyDialogToMessage(const FText& InMessage) {
}

void UKizokDialogMenu::MessageOnlyDialog(uint8 InUITextIndex) {
}

bool UKizokDialogMenu::IsContinuousInputProtectionEnable() const {
    return false;
}

void UKizokDialogMenu::DecisionOnlyDialogToTextId(const FName& InTextId, bool bInContinuousInputProtectionEnable) {
}

void UKizokDialogMenu::DecisionOnlyDialogToMessage(const FText& InMessage, bool bInContinuousInputProtectionEnable) {
}

void UKizokDialogMenu::DecisionOnlyDialog(uint8 InUITextIndex, bool bInContinuousInputProtectionEnable) {
}

void UKizokDialogMenu::ChangeDialogEvent() {
}

void UKizokDialogMenu::ChangeDialog() {
}

UKizokDialogMenu::UKizokDialogMenu() {
    this->ContinuousInputProtectionTime = 0;
}

