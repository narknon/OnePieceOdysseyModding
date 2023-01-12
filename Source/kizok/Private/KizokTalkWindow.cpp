#include "KizokTalkWindow.h"

class UKizokButtonWidget;

void UKizokTalkWindow::WaitAdvanceMessage(float InWaitTime, FKizokTalkWindowAfterWaitDelegate InEvent) {
}

void UKizokTalkWindow::RemoveAfterSelectEvent(FKizokTalkWindowAfterSelectDelegate InEvent) {
}

void UKizokTalkWindow::ReflectMessageParam() {
}

void UKizokTalkWindow::PlayMessageWithChoice(FText InMessage, const TArray<FText>& InChoiceList) {
}

void UKizokTalkWindow::PlayMessageWithCharaIconAndChoice(FText InMessage, FText InCharaName, FName InCharaID, const TArray<FText>& InChoiceList) {
}

void UKizokTalkWindow::PlayMessageWithCharaIcon(FText InMessage, FText InCharaName, FName InCharaID) {
}

void UKizokTalkWindow::PlayMessageTimeWithCharaIcon_DisableInput(FText InMessage, float InTime, FText InCharaName, FName InCharaID) {
}

void UKizokTalkWindow::PlayMessageTime_DisableInput(FText InMessage, float InTime) {
}

void UKizokTalkWindow::PlayMessage(FText InMessage) {
}




bool UKizokTalkWindow::IsHideOnlyText() const {
    return false;
}

FText UKizokTalkWindow::GetNextMessageChoice(const UKizokButtonWidget* InButtonWidget) const {
    return FText::GetEmpty();
}

void UKizokTalkWindow::FinishPlayMessage() {
}

bool UKizokTalkWindow::ExistNextMessage() const {
    return false;
}

void UKizokTalkWindow::AddFocusButtonEvent(FKizokTalkWindowFocusButtonDelegate InEvent) {
}

void UKizokTalkWindow::AddBeforeOpenEvent(FKizokTalkWindowBeforeOpenDelegate InEvent) {
}

void UKizokTalkWindow::AddAfterSelectEvent(FKizokTalkWindowAfterSelectDelegate InEvent) {
}

void UKizokTalkWindow::AddAfterCloseEvent(FKizokTalkWindowAfterCloseDelegate InEvent) {
}

UKizokTalkWindow::UKizokTalkWindow() {
    this->MessageDataTable = NULL;
}

