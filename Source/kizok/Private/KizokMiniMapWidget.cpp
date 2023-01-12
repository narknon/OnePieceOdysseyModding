#include "KizokMiniMapWidget.h"

class UKizokUserWidget;
class UImage;
class UKizokTextBlock;


void UKizokMiniMapWidget::SetMiniMapState(EKizokMiniMapState InState) {
}



void UKizokMiniMapWidget::InitMiniMap(UImage* InMiniMapImage, UImage* InNorthIconImage, UImage* InVisibleRangeImage, UImage* InArrowImage, UKizokUserWidget* InMarkerWidget, UKizokTextBlock* InNoMapTextBlock) {
}

EKizokMiniMapState UKizokMiniMapWidget::GetMiniMapState() const {
    return EKizokMiniMapState::Hidden;
}

UKizokMiniMapWidget::UKizokMiniMapWidget() {
    this->TraceAlphaMin = 0.00f;
    this->TraceAlphaMax = 0.00f;
    this->IconDisplayRadius = 0.00f;
    this->NoMapMaterial = NULL;
    this->IconWidgetClass = NULL;
    this->TraceTexture = NULL;
}

