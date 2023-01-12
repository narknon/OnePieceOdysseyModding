#include "KizokAccessoryShopMenu.h"

class UTexture2D;

void UKizokAccessoryShopMenu::UpdateCursorVisibility(int32 InButtonIndex) {
}

void UKizokAccessoryShopMenu::Sort() {
}

void UKizokAccessoryShopMenu::SetPossessAccessoryNum(FName AccessoryId, int32 UniqueId, int32 Num) {
}

void UKizokAccessoryShopMenu::SetEquipRemoveState(bool bInState) {
}

void UKizokAccessoryShopMenu::SetAccessoryButtonGroupInputEnable(bool bInInputEnable) {
}

UTexture2D* UKizokAccessoryShopMenu::GetThumbnailTexture(uint8 InIndex) const {
    return NULL;
}

uint8 UKizokAccessoryShopMenu::GetSortStep() const {
    return 0;
}

UTexture2D* UKizokAccessoryShopMenu::GetNormalIconTexture() const {
    return NULL;
}

bool UKizokAccessoryShopMenu::GetEquipRemoveState() const {
    return false;
}

FKizokShopAccessoryDispData UKizokAccessoryShopMenu::GetAccessoryDispData(int32 InIndex) {
    return FKizokShopAccessoryDispData{};
}

UTexture2D* UKizokAccessoryShopMenu::GetAbilityIconTexture() const {
    return NULL;
}

bool UKizokAccessoryShopMenu::CheckSelectEquipAccessory() {
    return false;
}

UKizokAccessoryShopMenu::UKizokAccessoryShopMenu() {
    this->NormalIconTexture = NULL;
    this->AbilityIconTexture = NULL;
}

