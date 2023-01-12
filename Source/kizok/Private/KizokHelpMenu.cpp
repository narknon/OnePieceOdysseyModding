#include "KizokHelpMenu.h"

void UKizokHelpMenu::UpdateReflectedPageIndex(int32 InPageIndex) {
}




int32 UKizokHelpMenu::GetReflectedPageIndex() const {
    return 0;
}

int32 UKizokHelpMenu::GetHelpDataNum() const {
    return 0;
}

FKizokHelpMenuData UKizokHelpMenu::GetHelpData(int32 InIndex) {
    return FKizokHelpMenuData{};
}

int32 UKizokHelpMenu::GetCurrentPageIndex() const {
    return 0;
}

void UKizokHelpMenu::ChangeCurrentPage(int32 InAdd) {
}

UKizokHelpMenu::UKizokHelpMenu() {
    this->HelpParamTableAsset = NULL;
    this->HelpStringTitleTableAsset = NULL;
    this->HelpStringTextTableAsset = NULL;
}

