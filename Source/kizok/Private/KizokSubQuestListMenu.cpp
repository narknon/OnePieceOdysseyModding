#include "KizokSubQuestListMenu.h"

class UKizokUserWidget;
class UKizokQuestStartResultMenuBase;
class UScrollBox;

void UKizokSubQuestListMenu::SortSubQuestList() {
}

void UKizokSubQuestListMenu::InitSubQuestListMenu(UKizokQuestStartResultMenuBase* InQuestWidget, UScrollBox* InScrollBox, UKizokUserWidget* InCursorWidget) {
}

FKizokSubQuestPosterData UKizokSubQuestListMenu::GetSubQuestPosterData(int32 InIndex) {
    return FKizokSubQuestPosterData{};
}

FKizokSubQuestListMenuData UKizokSubQuestListMenu::GetSubQuestData(int32 InIndex) {
    return FKizokSubQuestListMenuData{};
}

FText UKizokSubQuestListMenu::GetSecretText() const {
    return FText::GetEmpty();
}

bool UKizokSubQuestListMenu::DisableSubQuestDataNotice(int32 InIndex) {
    return false;
}

UKizokSubQuestListMenu::UKizokSubQuestListMenu() {
}

