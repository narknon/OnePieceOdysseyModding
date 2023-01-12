#include "KizokKizunaQuestListMenu.h"

class UKizokUserWidget;
class UKizokQuestStartResultMenuBase;
class UScrollBox;

void UKizokKizunaQuestListMenu::SortKizunaQuestList() {
}

void UKizokKizunaQuestListMenu::InitKizunaQuestListMenu(UKizokQuestStartResultMenuBase* InQuestWidget, UScrollBox* InScrollBox, UKizokUserWidget* InCursorWidget) {
}

FText UKizokKizunaQuestListMenu::GetSecretText() const {
    return FText::GetEmpty();
}

FKizokKizunaQuestPosterData UKizokKizunaQuestListMenu::GetKizunaQuestPosterData(int32 InIndex) {
    return FKizokKizunaQuestPosterData{};
}

FKizokKizunaQuestListMenuData UKizokKizunaQuestListMenu::GetKizunaQuestData(int32 InIndex) {
    return FKizokKizunaQuestListMenuData{};
}

bool UKizokKizunaQuestListMenu::DisableKizunaQuestDataNotice(int32 InIndex) {
    return false;
}

UKizokKizunaQuestListMenu::UKizokKizunaQuestListMenu() {
}

