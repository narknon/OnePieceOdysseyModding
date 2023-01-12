#include "KizokItemMenu.h"

class UKizokUserWidget;
class UKizokButtonWidget;
class UKizokCharacterSelectMenu;
class UKizokCharacterSelectButtonWidget;
class UPanelWidget;
class UScrollBox;
class UMaterialInstance;


void UKizokItemMenu::RegisterItemListFromScrollBox(UScrollBox* InScrollBox, UKizokUserWidget* InCursorWidget, int32 InTabButtonGroupIndex) {
}

void UKizokItemMenu::RegisterItemInfoScrollBox(UScrollBox* InScrollBox) {
}

bool UKizokItemMenu::IsTabButtonWidget(const UKizokButtonWidget* InButtonWidget) const {
    return false;
}

bool UKizokItemMenu::IsAvailableItem(bool bFieldUse, FName ItemId) {
    return false;
}

bool UKizokItemMenu::InitItemInfoScroll() {
    return false;
}

void UKizokItemMenu::HideHealEffectAll() {
}

EKizokItemMenuHealResult UKizokItemMenu::HealByUseOverallItemsTogether(UKizokCharacterSelectMenu* InCharacterSelectMenu) {
    return EKizokItemMenuHealResult::HealHP;
}

EKizokItemMenuHealResult UKizokItemMenu::HealByUseItemsTogether(UKizokCharacterSelectMenu* InCharacterSelectMenu) {
    return EKizokItemMenuHealResult::HealHP;
}

EKizokItemMenuHealResult UKizokItemMenu::HealByOverallItem(UKizokCharacterSelectMenu* InCharacterSelectMenu) {
    return EKizokItemMenuHealResult::HealHP;
}

EKizokItemMenuHealResult UKizokItemMenu::Heal(UKizokCharacterSelectButtonWidget* InButtonWidget) {
    return EKizokItemMenuHealResult::HealHP;
}

UMaterialInstance* UKizokItemMenu::GetTabMaterial(int32 InIndex) const {
    return NULL;
}

FSoftObjectPath UKizokItemMenu::GetTabIcon(int32 InIndex) const {
    return FSoftObjectPath{};
}

FKizokItemDispData UKizokItemMenu::GetSelectedItemData() {
    return FKizokItemDispData{};
}

FSoftObjectPath UKizokItemMenu::GetItemIcon(uint8 InKey) const {
    return FSoftObjectPath{};
}

int32 UKizokItemMenu::GetItemDataNum() const {
    return 0;
}

FKizokItemDispData UKizokItemMenu::GetItemData(int32 InIndex) const {
    return FKizokItemDispData{};
}

void UKizokItemMenu::CreateItemList() {
}

void UKizokItemMenu::CheckUsedUpItem() {
}

void UKizokItemMenu::AddHealEffect(UPanelWidget* InPanelWidget, int32 InNum) {
}

UKizokItemMenu::UKizokItemMenu() {
    this->ItemWidgetClass = NULL;
    this->ItemInfoScrollLength = 0.00f;
}

