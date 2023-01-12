#include "KizokSettingMenuDisplayTab.h"

class UKizokUserWidget;
class UKizokButtonWidget;
class UKizokButtonGuideFrameWidget;
class UPanelWidget;

void UKizokSettingMenuDisplayTab::SetupFirstStartupButtonGuide(UKizokButtonGuideFrameWidget* InFrameWidget, UKizokUserWidget* InUserWidget, const TArray<FKizokButtonGuideSettingData>& InButtonGuideSettingDataList) {
}

void UKizokSettingMenuDisplayTab::RegisterDisplaySettingFromVerticalBox(UPanelWidget* InVerticalBox, const uint8 inTextIndexHead, UKizokButtonWidget* InResetButton) {
}

void UKizokSettingMenuDisplayTab::PlayStartInAnimation(FKizokDisplaySettingMenuInAnimationFinishedEvent InEvent) {
}



bool UKizokSettingMenuDisplayTab::IsFirstStartup() const {
    return false;
}

FText UKizokSettingMenuDisplayTab::GetInfoText(int32 InIndex) const {
    return FText::GetEmpty();
}

void UKizokSettingMenuDisplayTab::FinishedInAnimation() {
}

UKizokSettingMenuDisplayTab::UKizokSettingMenuDisplayTab() {
    this->SystemSaveSequence = NULL;
}

