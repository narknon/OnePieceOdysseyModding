#include "KizokCommonMenu.h"

class UKizokButtonWidget;
class UKizokTalkWindow;

void UKizokCommonMenu::SetSelectMode(const TArray<EKizokButtonWidgetSelectMode>& InSelectModeList) {
}

void UKizokCommonMenu::SetEnableCancelButton(bool bInEnable) {
}

void UKizokCommonMenu::RegisterTalkWindow(UKizokTalkWindow* InTalkWindow) {
}

void UKizokCommonMenu::ReflectParamToMenu() {
}





FText UKizokCommonMenu::GetNextMenuChoice(const UKizokButtonWidget* InButtonWidget) const {
    return FText::GetEmpty();
}

void UKizokCommonMenu::ExecTalkWindowAfterCloseEvent() {
}

void UKizokCommonMenu::ExecFocusButtonEvent(int32 InFocusIndex) {
}

void UKizokCommonMenu::ExecAfterSelectEvent(int32 InChoiceNo) {
}

void UKizokCommonMenu::CloseWidgetAndPlayDecisionSE() {
}

void UKizokCommonMenu::BackPrevPage() {
}

void UKizokCommonMenu::BackPage(int32 InPage) {
}

void UKizokCommonMenu::BackMenuPage() {
}

void UKizokCommonMenu::BackFirstPage() {
}

void UKizokCommonMenu::AddMessageToMenuWithUITextId(const TArray<FName>& InUITextIdList) {
}

void UKizokCommonMenu::AddMessageToMenuWithMessageId(const TArray<FName>& InMessageIdList) {
}

void UKizokCommonMenu::AddMessageToMenu(const TArray<FText>& InMessageList) {
}

void UKizokCommonMenu::AddFocusButtonEvent(FKizokCommonMenuFocusButtonDelegate InEvent) {
}

void UKizokCommonMenu::AddChoiceToTalkWindowWithUITextId(const TArray<FName>& InUITextIdList, FName InUITextId, FKizokCommonMenuAfterSelectDelegate InEvent) {
}

void UKizokCommonMenu::AddChoiceToTalkWindowWithMessageIdAndInsertNum(FName InMessageId, int32 InNum, FKizokCommonMenuAfterSelectDelegate InEvent) {
}

void UKizokCommonMenu::AddChoiceToTalkWindowWithMessageId(FName InMessageId, FKizokCommonMenuAfterSelectDelegate InEvent) {
}

void UKizokCommonMenu::AddChoiceToTalkWindow(const TArray<FText>& InChoiceList, FText InMessage, FKizokCommonMenuAfterSelectDelegate InEvent) {
}

void UKizokCommonMenu::AddChoiceToMenuWithUITextId(const TArray<FName>& InUITextIdList, FKizokCommonMenuAfterSelectDelegate InEvent) {
}

void UKizokCommonMenu::AddChoiceToMenu(const TArray<FText>& InChoiceList, FKizokCommonMenuAfterSelectDelegate InEvent) {
}

UKizokCommonMenu::UKizokCommonMenu() {
}

