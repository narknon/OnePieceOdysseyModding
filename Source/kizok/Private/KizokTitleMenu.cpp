#include "KizokTitleMenu.h"

class UObject;
class UWidget;
class UKizokButtonGuideFrameWidget;
class UKizokSettingMenu;
class UWidgetSwitcher;

void UKizokTitleMenu::StartTitleMenuOut() {
}

void UKizokTitleMenu::StartSaveSequence(FKizokEndSystemSaveSequenceDelegate InDelegate) {
}

void UKizokTitleMenu::StartBonusSequence(FKizokEndBonusSequenceDelegate InDelegate) {
}

void UKizokTitleMenu::SetupLoadMenuButtonGuide(UKizokButtonGuideFrameWidget* InTargetButtonGuideFrame, const TArray<FKizokButtonGuideSettingData>& InButtonGuideSettingDataList) {
}

void UKizokTitleMenu::SetTabGroupIndex(int32 InIndex) {
}

void UKizokTitleMenu::SelectNewGame() {
}

void UKizokTitleMenu::SelectLoadGame() {
}

void UKizokTitleMenu::ReturnTitleLogoMenu() {
}

UWidget* UKizokTitleMenu::ReplacementSettingMenuWidget(UWidgetSwitcher* WidgetSwitcher, UClass* InClass) {
    return NULL;
}

UWidget* UKizokTitleMenu::ReplacementLoadWidget(UWidgetSwitcher* WidgetSwitcher, UClass* InClass) {
    return NULL;
}

UWidget* UKizokTitleMenu::ReplacementAsyncLoadWidget(UWidgetSwitcher* WidgetSwitcher, UObject* InObject, bool bIsReplacementLoadAsset) {
    return NULL;
}

void UKizokTitleMenu::RegisterSettingMenu(UKizokSettingMenu* InSettingMenu) {
}

bool UKizokTitleMenu::IsNeedDoSaveSequence() const {
    return false;
}

void UKizokTitleMenu::GiveBonus() {
}

FSoftObjectPath UKizokTitleMenu::GetTabIcon(int32 InIndex) const {
    return FSoftObjectPath{};
}

int32 UKizokTitleMenu::GetTabGroupFocusIndex() const {
    return 0;
}



bool UKizokTitleMenu::ExistSaveData() {
    return false;
}

void UKizokTitleMenu::EndSaveSequence() {
}


void UKizokTitleMenu::BindOnSelectNewGame(FKizokTitleMenuSelectNewGame InEvent) {
}

void UKizokTitleMenu::BindOnSelectLoadGame(FKizokTitleMenuSelectLoadGame InEvent) {
}

UKizokTitleMenu::UKizokTitleMenu() {
    this->SettingMenu = NULL;
    this->SystemSaveSequence = NULL;
    this->BonusSequence = NULL;
}

