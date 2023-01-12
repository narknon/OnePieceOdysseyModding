#include "KizokAccessoryResetMenu.h"

class UScrollBox;
class UVerticalBox;
class UTexture2D;

void UKizokAccessoryResetMenu::Sort() {
}

void UKizokAccessoryResetMenu::SetState(EKizokAccessoryResetMenuState InState) {
}

void UKizokAccessoryResetMenu::SetParamButtonGroupInputEnable(bool bInInputEnable) {
}

void UKizokAccessoryResetMenu::SetAccessoryButtonGroupInputEnable(bool bInInputEnable) {
}

bool UKizokAccessoryResetMenu::SelectResetParam() {
    return false;
}

EKizokAccessoryResetMenuSelect UKizokAccessoryResetMenu::SelectResetAccessory() {
    return EKizokAccessoryResetMenuSelect::NotEnoughMoney;
}

void UKizokAccessoryResetMenu::ResetAccessoryAfter() {
}

void UKizokAccessoryResetMenu::ResetAccessory() {
}

void UKizokAccessoryResetMenu::RegisterParamButtonGroup(const UVerticalBox* InVerticalBox) {
}

void UKizokAccessoryResetMenu::RegisterAccessoryWidget() {
}

void UKizokAccessoryResetMenu::PrepareSelectResetParam() {
}

bool UKizokAccessoryResetMenu::IsNotSelectableAccessoryParam() const {
    return false;
}

UTexture2D* UKizokAccessoryResetMenu::GetThumbnailTexture(int32 InIndex) const {
    return NULL;
}

EKizokAccessoryResetMenuState UKizokAccessoryResetMenu::GetState() const {
    return EKizokAccessoryResetMenuState::SelectAccessoryState;
}

uint8 UKizokAccessoryResetMenu::GetSortStep() const {
    return 0;
}

int32 UKizokAccessoryResetMenu::GetParamButtonGroupFocusIndex() const {
    return 0;
}

UTexture2D* UKizokAccessoryResetMenu::GetNormalIconTexture() const {
    return NULL;
}

int32 UKizokAccessoryResetMenu::GetAccessoryDataNum() const {
    return 0;
}

FKizokAccessoryResetMenuData UKizokAccessoryResetMenu::GetAccessoryData(int32 InIndex) {
    return FKizokAccessoryResetMenuData{};
}

int32 UKizokAccessoryResetMenu::GetAccessoryButtonDroupIndex() const {
    return 0;
}

UTexture2D* UKizokAccessoryResetMenu::GetAbilityIconTexture() const {
    return NULL;
}

void UKizokAccessoryResetMenu::CreateAccessoryListWidget(UScrollBox* InScrollBox) {
}

UKizokAccessoryResetMenu::UKizokAccessoryResetMenu() {
    this->ResetCostCoefficient = 0;
    this->NormalIconTexture = NULL;
    this->AbilityIconTexture = NULL;
}

