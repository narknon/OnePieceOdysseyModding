#include "KizokCraftMenu.h"

class UKizokUserWidget;
class UScrollBox;
class UVerticalBox;

void UKizokCraftMenu::SetScrollBoxInputFromNowState() {
}


void UKizokCraftMenu::SetCraftMenuInputEnable(bool InputEnable) {
}

void UKizokCraftMenu::SetAllCraftWidgetData() {
}

void UKizokCraftMenu::OnUserScrolled(float InCurrentOffset) {
}


bool UKizokCraftMenu::IsMaterialItemOver() const {
    return false;
}

bool UKizokCraftMenu::IsExistCraftItem() const {
    return false;
}

bool UKizokCraftMenu::IsChangeCraftMenuEnable() const {
    return false;
}

void UKizokCraftMenu::InitializeKitchen(UScrollBox* InScrollBox, UVerticalBox* InVerticalBox, UKizokUserWidget* InCursorWidget) {
}

void UKizokCraftMenu::InitializeFactory(UScrollBox* InScrollBox, UVerticalBox* InVerticalBox, UKizokUserWidget* InCursorWidget) {
}

FSoftObjectPath UKizokCraftMenu::GetNoteTitleIconImage(uint8 Index) const {
    return FSoftObjectPath{};
}

FKizokCraftData UKizokCraftMenu::GetMaterialNoteData(int32 Index) const {
    return FKizokCraftData{};
}

FSoftObjectPath UKizokCraftMenu::GetMaterialIconImage(uint8 Category) const {
    return FSoftObjectPath{};
}

bool UKizokCraftMenu::GetIsOver(int32 Index) const {
    return false;
}

bool UKizokCraftMenu::GetIsNotMake(int32 Index) const {
    return false;
}

FKizokCraftData UKizokCraftMenu::GetCraftNoteData(int32 Index) const {
    return FKizokCraftData{};
}

EKizokCraftMenuState UKizokCraftMenu::GetCraftMenuState() const {
    return EKizokCraftMenuState::CraftMenu;
}

bool UKizokCraftMenu::GetCraftMenuInputEnable() const {
    return false;
}

FSoftObjectPath UKizokCraftMenu::GetCraftItemIconImage() const {
    return FSoftObjectPath{};
}

FKizokCraftData UKizokCraftMenu::GetCraftData(int32 Index) const {
    return FKizokCraftData{};
}

void UKizokCraftMenu::CreateMaterialItemNoteWidget(UScrollBox* InScrollBox) {
}

void UKizokCraftMenu::CreateCraftItemNoteWidget(UScrollBox* InScrollBox) {
}

void UKizokCraftMenu::ClearCraftNoteScrollBoxs() {
}


void UKizokCraftMenu::ChangeFocus(int32 Index) {
}


void UKizokCraftMenu::ChangeCraftMenuState(EKizokCraftMenuState MenuState) {
}

void UKizokCraftMenu::ApplyItemData() {
}

UKizokCraftMenu::UKizokCraftMenu() {
    this->CraftRecipeDataTable = NULL;
}

