#include "KizokSettingMenu.h"

class UWidget;
class UKizokSettingMenuTab;
class UKizokTextBlock;
class UKizokTitleMenu;
class UHorizontalBox;
class UWidgetSwitcher;

void UKizokSettingMenu::SetupActiveTab(UKizokSettingMenuTab* InMenuTab, bool bInOperate) {
}

void UKizokSettingMenu::SetTitleMenu(UKizokTitleMenu* InTitleMenu) {
}

void UKizokSettingMenu::SetTabText(UKizokTextBlock* InTextBlock, int32 InIndex) const {
}

void UKizokSettingMenu::SetTabButtonLock(int32 InMenuIndex, bool IsLock) {
}

UWidget* UKizokSettingMenu::ReplacementDisplaySettingWidget(UWidgetSwitcher* WidgetSwitcher, UClass* InClass) {
    return NULL;
}

void UKizokSettingMenu::RegisterTabFromHorizontalBox(UHorizontalBox* InHorizontalBox) {
}









bool UKizokSettingMenu::IsValidHelp() const {
    return false;
}

UKizokTitleMenu* UKizokSettingMenu::GetTitleMenu() const {
    return NULL;
}

FSoftObjectPath UKizokSettingMenu::GetTabIcon(int32 InIndex) const {
    return FSoftObjectPath{};
}

uint8 UKizokSettingMenu::GetBootTabIndex() const {
    return 0;
}

UKizokSettingMenu::UKizokSettingMenu() {
    this->HelpTable = NULL;
    this->ActiveMenuTab = NULL;
    this->TitleMenu = NULL;
}

