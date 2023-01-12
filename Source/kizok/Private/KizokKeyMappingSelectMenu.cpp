#include "KizokKeyMappingSelectMenu.h"

class UKizokKeyMappingMenu;
class UCanvasPanel;

void UKizokKeyMappingSelectMenu::SetIsReflectFocusTextEnable(bool bInIsReflectFocusTextEnable) {
}





bool UKizokKeyMappingSelectMenu::IsReflectFocusTextEnable() const {
    return false;
}

UKizokKeyMappingMenu* UKizokKeyMappingSelectMenu::GetKeyMappingMenu() const {
    return NULL;
}

bool UKizokKeyMappingSelectMenu::GetConnectDeviceStatus(int32 InIndex) const {
    return false;
}

void UKizokKeyMappingSelectMenu::DestroyKeyMappingMenu() {
}

void UKizokKeyMappingSelectMenu::CreateAndRegisterKeyMappingMenu(UCanvasPanel* InCanvasPanel) {
}

void UKizokKeyMappingSelectMenu::CloseKeyMappingMenu() {
}

UKizokKeyMappingSelectMenu::UKizokKeyMappingSelectMenu() {
    this->KeyMappingMenu = NULL;
}

