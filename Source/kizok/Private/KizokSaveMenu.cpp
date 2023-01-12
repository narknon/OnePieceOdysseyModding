#include "KizokSaveMenu.h"

class UKizokUserWidget;
class UScrollBox;

void UKizokSaveMenu::SaveGameData() {
}





void UKizokSaveMenu::OnBackToTitle() {
}

void UKizokSaveMenu::InitializeSaveMenu(UScrollBox* InScrollBox, UKizokUserWidget* InCursorWidget) {
}

FKizokSaveloadSlotDisplayData UKizokSaveMenu::GetSaveloadSlotData(int32 Index) const {
    return FKizokSaveloadSlotDisplayData{};
}

FKizokSaveloadSlotDisplayData UKizokSaveMenu::GetNowFocusSaveloadSlotData() const {
    return FKizokSaveloadSlotDisplayData{};
}

EKizokSaveloadDataType UKizokSaveMenu::GetNowFocusDataType() const {
    return EKizokSaveloadDataType::AutoSave;
}

EKizokSaveloadMenuState UKizokSaveMenu::GetMenuState() const {
    return EKizokSaveloadMenuState::Menu;
}

void UKizokSaveMenu::ComplateSave() {
}

void UKizokSaveMenu::ComplateAsyncFinish() {
}

void UKizokSaveMenu::ChangeStateMenu() {
}

void UKizokSaveMenu::ChangeStateActiveDialog() {
}

UKizokSaveMenu::UKizokSaveMenu() {
    this->MainStoryTable = NULL;
}

