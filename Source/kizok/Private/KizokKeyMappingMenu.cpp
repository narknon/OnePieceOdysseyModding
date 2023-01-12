#include "KizokKeyMappingMenu.h"

class UKizokButtonWidget;
class UScrollBox;
class UKizokKeyMappingSelectMenu;
class UKizokTextBlock;

void UKizokKeyMappingMenu::SetupFocusText(UKizokTextBlock* InTextBlock, int32 InButtonIndex) {
}

void UKizokKeyMappingMenu::SetIsShow(bool bInIsShow) {
}










bool UKizokKeyMappingMenu::IsSwitch(int32 InButtonIndex) const {
    return false;
}

bool UKizokKeyMappingMenu::IsEnableDestroyWidget() const {
    return false;
}

UKizokKeyMappingSelectMenu* UKizokKeyMappingMenu::GetKeyMappingSelectMenu() const {
    return NULL;
}

EKizokKeyMappingMode UKizokKeyMappingMenu::GetKeyMappingMode() const {
    return EKizokKeyMappingMode::ModeMax;
}

void UKizokKeyMappingMenu::CreateKeyMappingList(UScrollBox* InScrollBox, UKizokButtonWidget* InUniqueButtonWidget) {
}

void UKizokKeyMappingMenu::ButtonFocus(const UKizokButtonWidget* InButtonWidget) {
}

UKizokKeyMappingMenu::UKizokKeyMappingMenu() {
}

