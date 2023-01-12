#include "KizokEndCreditsWidget.h"

class UScrollBox;
class UTexture2D;

void UKizokEndCreditsWidget::WaitBgm() {
}

void UKizokEndCreditsWidget::StartScroll() {
}

void UKizokEndCreditsWidget::StartBgmManagement() {
}

void UKizokEndCreditsWidget::RegisterCreditsListScrollBox(UScrollBox* InScrollBox) {
}

void UKizokEndCreditsWidget::PlayBgm() {
}

float UKizokEndCreditsWidget::GetTextureChangeTime() const {
    return 0.0f;
}

UTexture2D* UKizokEndCreditsWidget::GetNextTexture() {
    return NULL;
}

UKizokEndCreditsWidget::UKizokEndCreditsWidget() {
    this->PreTextureDelayTime = 0.00f;
    this->PostTextureDelayTime = 0.00f;
    this->PreBgmDelayTime = 0.00f;
    this->MiddleBgmDelayTime = 0.00f;
    this->PostBgmDelayTime = 0.00f;
    this->StaffrollTable = NULL;
    this->StaffrollImageTable = NULL;
    this->StaffrollBGMTable = NULL;
}

