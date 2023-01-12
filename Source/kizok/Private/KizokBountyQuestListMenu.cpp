#include "KizokBountyQuestListMenu.h"

class UKizokUserWidget;
class UKizokQuestStartResultMenuBase;
class UScrollBox;

void UKizokBountyQuestListMenu::SortBountyQuestList() {
}

void UKizokBountyQuestListMenu::InitBountyQuestListMenu(UKizokQuestStartResultMenuBase* InQuestWidget, UScrollBox* InScrollBox, UKizokUserWidget* InCursorWidget) {
}

FText UKizokBountyQuestListMenu::GetSecretNumberText() const {
    return FText::GetEmpty();
}

FKizokBountyQuestListMenuData UKizokBountyQuestListMenu::GetBountyQuestData(int32 InIndex) {
    return FKizokBountyQuestListMenuData{};
}

bool UKizokBountyQuestListMenu::DisableBountyQuestDataNotice(int32 InIndex) {
    return false;
}

UKizokBountyQuestListMenu::UKizokBountyQuestListMenu() {
}

