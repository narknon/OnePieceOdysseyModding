#include "KizokClothChangeMenu.h"

class UKizokUserWidget;
class UImage;
class UScrollBox;

void UKizokClothChangeMenu::TerminateClothChange() {
}

void UKizokClothChangeMenu::SetupCaptureRoom(UImage* InCaptureImage) {
}

void UKizokClothChangeMenu::SetFieldNPCCostumeChangeEnable(bool InIsEnable) {
}


void UKizokClothChangeMenu::OnTextureStreamingFinishedEvent() {
}




void UKizokClothChangeMenu::OnChaptureRoomFinishedEvent() {
}

void UKizokClothChangeMenu::OnActiveCharacterFinishedEvent() {
}

void UKizokClothChangeMenu::InitializeClothChange(UScrollBox* InScrollBox, UKizokUserWidget* InCursorWidget) {
}

PLAYER_ID UKizokClothChangeMenu::GetSupportCharaID(int32 InIndex) const {
    return PLAYER_ID::PLAYER_ID_LUF;
}

FSoftObjectPath UKizokClothChangeMenu::GetSupportCharaIconPath(int32 InIndex) const {
    return FSoftObjectPath{};
}

FText UKizokClothChangeMenu::GetPreviewText() const {
    return FText::GetEmpty();
}

EKizokClothMenuState UKizokClothChangeMenu::GetMenuState() const {
    return EKizokClothMenuState::SelectCloth;
}

FText UKizokClothChangeMenu::GetItemName(int32 InIndex) const {
    return FText::GetEmpty();
}

FText UKizokClothChangeMenu::GetItemInfo(int32 InIndex) const {
    return FText::GetEmpty();
}

void UKizokClothChangeMenu::FinishedFieldCharacterClothChange() {
}

EKizokClothError UKizokClothChangeMenu::DecisionSelectCloth() {
    return EKizokClothError::None;
}

void UKizokClothChangeMenu::ChangeCloth() {
}

void UKizokClothChangeMenu::CaptureBPLoadFinish() {
}

void UKizokClothChangeMenu::BackToSelectState() {
}

UKizokClothChangeMenu::UKizokClothChangeMenu() {
    this->CostumeDataTable = NULL;
    this->CharaDataTable = NULL;
    this->RotatingVelocity = 0.00f;
    this->CaptureRoom = NULL;
}

