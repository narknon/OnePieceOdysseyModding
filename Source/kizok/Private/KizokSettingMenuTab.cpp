#include "KizokSettingMenuTab.h"

class UKizokButtonWidget;
class UKizokSettingMenu;


UKizokSettingMenu* UKizokSettingMenuTab::GetSettingMenu() const {
    return NULL;
}

void UKizokSettingMenuTab::ButtonFocus(const UKizokButtonWidget* InButtonWidget) {
}

UKizokSettingMenuTab::UKizokSettingMenuTab() {
    this->SettingMenu = NULL;
}

