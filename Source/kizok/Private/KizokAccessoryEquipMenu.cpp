#include "KizokAccessoryEquipMenu.h"

class UKizokUserWidget;
class UKizokButtonWidget;
class UKizokAccessoryEquipBoardWidget;
class UImage;
class UScrollBox;
class UCanvasPanel;
class UVerticalBox;
class UTexture2D;
class UMaterialInstanceDynamic;

int32 UKizokAccessoryEquipMenu::SortAccessoryList() {
    return 0;
}

void UKizokAccessoryEquipMenu::ShowSelectPlayerStatus() {
}

void UKizokAccessoryEquipMenu::SetupBoardWidget(UKizokAccessoryEquipBoardWidget* InBoardWidget) {
}

void UKizokAccessoryEquipMenu::RotateFocusAccessory() {
}

void UKizokAccessoryEquipMenu::RemoveEquipFocusAccessory() {
}

void UKizokAccessoryEquipMenu::RegisterStatusScrollBoxInfo(UScrollBox* InScrollBox) {
}

void UKizokAccessoryEquipMenu::RegisterCharaIconMaterial(UMaterialInstanceDynamic* InMaterial, FName InParameterName, UImage* InImage) {
}

void UKizokAccessoryEquipMenu::RegisterAccessoryListFromScrollBox(UScrollBox* InScrollBox, UKizokUserWidget* InCursorWidget, UKizokButtonWidget* InUniqueButtonWidget) {
}

void UKizokAccessoryEquipMenu::RegisterAccessoryBoard(UCanvasPanel* InBoard, int32 InSquareWidthNum, int32 InSquareHeightNum) {
}

void UKizokAccessoryEquipMenu::RegisterAbilityWidget(UKizokUserWidget* InWidget) {
}
























void UKizokAccessoryEquipMenu::MouseWheelOnBoard(float InWheelDelta) {
}

void UKizokAccessoryEquipMenu::MouseMovedOnBoard(FVector2D InScreenSpacePosition) {
}

void UKizokAccessoryEquipMenu::MouseEnterOnBoard(UKizokButtonWidget* InButtonWidget) {
}

bool UKizokAccessoryEquipMenu::IsCharaChange() const {
    return false;
}

UTexture2D* UKizokAccessoryEquipMenu::GetThumbnail(int32 InIndex) const {
    return NULL;
}

int32 UKizokAccessoryEquipMenu::GetSortModeIndex() const {
    return 0;
}

uint8 UKizokAccessoryEquipMenu::GetSelectPlayerAccessoryReleaseState() const {
    return 0;
}

UTexture2D* UKizokAccessoryEquipMenu::GetNormalIconTexture() const {
    return NULL;
}

EKizokEquipMenuState UKizokAccessoryEquipMenu::GetEquipMenuState() const {
    return EKizokEquipMenuState::Status;
}

FText UKizokAccessoryEquipMenu::GetAutoEquipText(FName InUITextId) const {
    return FText::GetEmpty();
}

FKizokAccessoryDispData UKizokAccessoryEquipMenu::GetAccessoryData(int32 InIndex) {
    return FKizokAccessoryDispData{};
}

UTexture2D* UKizokAccessoryEquipMenu::GetAbilityIconTexture() const {
    return NULL;
}

void UKizokAccessoryEquipMenu::EndCharaChange() {
}

void UKizokAccessoryEquipMenu::CreateAbilityWidget(UVerticalBox* InVerticalBox) {
}

void UKizokAccessoryEquipMenu::ChangeEquipMenuState(EKizokEquipMenuState InEquipMenuState) {
}

void UKizokAccessoryEquipMenu::CancelEquipState() {
}

UKizokAccessoryEquipMenu::UKizokAccessoryEquipMenu() {
    this->AccessoryWidgetClass = NULL;
    this->NormalIconTexture = NULL;
    this->AbilityIconTexture = NULL;
    this->StatusScrollLength = 0.00f;
}

