#include "KizokTitleLicenceMenu.h"

class UImage;
class UScrollBox;
class UKizokTitleLicenceMenu;
class UCanvasPanel;
class UTexture2D;

void UKizokTitleLicenceMenu::StartLanguageSelect() {
}

void UKizokTitleLicenceMenu::SetLanguageSettingImage(UImage* InImage) {
}

void UKizokTitleLicenceMenu::SetLanguageSelectImage(UImage* InImage) {
}

void UKizokTitleLicenceMenu::SetDisagreeImage(UImage* InImage) {
}

void UKizokTitleLicenceMenu::SetAgreeImage(UImage* InImage) {
}

void UKizokTitleLicenceMenu::RegisterLicenceScrollBox(UScrollBox* InScrollBox) {
}

void UKizokTitleLicenceMenu::RegisterLanguageButtonGroup(UScrollBox* InScrollBox) {
}

void UKizokTitleLicenceMenu::RegisterAgreeButtonGroup(UCanvasPanel* InCanvasPanel) {
}

void UKizokTitleLicenceMenu::ReflectLanguageTexture() {
}

UKizokTitleLicenceMenu* UKizokTitleLicenceMenu::OpenTitleLicenceMenu(EKizokTitleLicenceType InLicenceType, int32 InLanguageSelectFocusIndex, bool bInPaused) {
    return NULL;
}


bool UKizokTitleLicenceMenu::IsLanguageSelectMode() const {
    return false;
}

UTexture2D* UKizokTitleLicenceMenu::GetLanguageSelectTexture(int32 InButtonIndex) const {
    return NULL;
}

void UKizokTitleLicenceMenu::FinishLanguageSelect() {
}

UKizokTitleLicenceMenu::UKizokTitleLicenceMenu() {
    this->TextureTableAsset = NULL;
    this->ScrollLength = 0.00f;
    this->LanguageSettingImage = NULL;
    this->LanguageSelectImage = NULL;
    this->AgreeImage = NULL;
    this->DisagreeImage = NULL;
}

