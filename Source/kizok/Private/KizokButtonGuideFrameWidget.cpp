#include "KizokButtonGuideFrameWidget.h"

class UKizokUserWidget;
class UImage;
class UGridPanel;

void UKizokButtonGuideFrameWidget::SetGridPanel(UGridPanel* InGridPanel) {
}

void UKizokButtonGuideFrameWidget::SetButtonGuideText(uint8 InIndex, const FText& InText) {
}

void UKizokButtonGuideFrameWidget::SetBaseImage(UImage* InBaseImage) {
}

void UKizokButtonGuideFrameWidget::ReplaceButtonGuideTextFromUIText(uint8 InIndex, FName InTextId) {
}


void UKizokButtonGuideFrameWidget::CreateButtonGuide(UKizokUserWidget* InWidget, const TArray<FKizokButtonGuideSettingData>& InButtonGuideSettingDataList) {
}

void UKizokButtonGuideFrameWidget::ClearButtonGuide() {
}

UKizokButtonGuideFrameWidget::UKizokButtonGuideFrameWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->ButtonGuideCoreWidgetClass = NULL;
}

