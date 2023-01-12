#include "KizokAccessoryComposeMenu.h"

class UScrollBox;
class UTexture2D;

void UKizokAccessoryComposeMenu::Sort() {
}

void UKizokAccessoryComposeMenu::SetState(EKizokAccessoryComposeMenuState InState) {
}

void UKizokAccessoryComposeMenu::SetAccessoryDataInitialized(int32 InDataIndex) {
}

void UKizokAccessoryComposeMenu::SetAccessoryButtonGroupIndex(int32 InIndex) {
}

EKizokAccessoryComposeMenuSelectConsumeNext UKizokAccessoryComposeMenu::SelectConsumeAccessory() {
    return EKizokAccessoryComposeMenuSelectConsumeNext::SelectEquip;
}

bool UKizokAccessoryComposeMenu::SelectBaseAccessory() {
    return false;
}

void UKizokAccessoryComposeMenu::RegisterAccessoryWidget() {
}

bool UKizokAccessoryComposeMenu::PossibleAddParam(int32 InDataIndex) {
    return false;
}


EKizokAccessoryMagnificationType UKizokAccessoryComposeMenu::LotteryMagnificationType() {
    return EKizokAccessoryMagnificationType::Normal;
}

UTexture2D* UKizokAccessoryComposeMenu::GetThumbnail(int32 InIndex) const {
    return NULL;
}

EKizokAccessoryComposeMenuState UKizokAccessoryComposeMenu::GetState() const {
    return EKizokAccessoryComposeMenuState::SelectBaseAccessoryState;
}

uint8 UKizokAccessoryComposeMenu::GetSortStep() const {
    return 0;
}

FText UKizokAccessoryComposeMenu::GetQuestionText() const {
    return FText::GetEmpty();
}

EKizokAccessoryMagnificationType UKizokAccessoryComposeMenu::GetMagnificationType() const {
    return EKizokAccessoryMagnificationType::Normal;
}

int32 UKizokAccessoryComposeMenu::GetConsumeAccessoryIndex() const {
    return 0;
}

int32 UKizokAccessoryComposeMenu::GetBaseAccessoryIndex() const {
    return 0;
}

int32 UKizokAccessoryComposeMenu::GetAccessoryDataNum() const {
    return 0;
}

FKizokAccessoryComposeMenuData UKizokAccessoryComposeMenu::GetAccessoryData(int32 InIndex) {
    return FKizokAccessoryComposeMenuData{};
}

FSoftObjectPath UKizokAccessoryComposeMenu::GetAbilityIconTexture() const {
    return FSoftObjectPath{};
}

void UKizokAccessoryComposeMenu::CreateShortageAccessoryWidget(UScrollBox* InScrollBox) {
}

void UKizokAccessoryComposeMenu::ComposeAccessoryAfter() {
}

void UKizokAccessoryComposeMenu::ComposeAccessory() {
}

void UKizokAccessoryComposeMenu::CancelConsumeAccessory() {
}

void UKizokAccessoryComposeMenu::CancelCheck() {
}

UKizokAccessoryComposeMenu::UKizokAccessoryComposeMenu() {
    this->AccessoryButtonWidget = NULL;
    this->ComposeSRate = 0.00f;
    this->ComposeHSRate = 0.00f;
    this->NamedComposeSRate = 0.00f;
    this->NamedComposeHSRate = 0.00f;
}

