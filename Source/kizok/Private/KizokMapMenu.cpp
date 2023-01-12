#include "KizokMapMenu.h"

class UKizokUserWidget;
class UKizokAreaNameLabelWidget;
class UKizokAreaMapWidget;
class UImage;
class UScrollBox;
class UKizokMapIconWidget;
class UKizokTextBlock;
class UCanvasPanel;
class UTexture2D;


void UKizokMapMenu::SetupCurrentIdAsShowId() {
}

void UKizokMapMenu::SetFastTravelPointChecked(int32 InIndex, bool bInChecked) {
}

void UKizokMapMenu::SetAreaPointChecked(int32 InIndex, bool bInChecked) {
}



bool UKizokMapMenu::IsSameShowAreaIdAndCurrentAreaId() const {
    return false;
}

void UKizokMapMenu::InitRegionMap(UCanvasPanel* InCanvasPanel, UScrollBox* InScrollBox, UKizokUserWidget* InCursorWidget) {
}

void UKizokMapMenu::InitMap(UKizokAreaMapWidget* InAreaMapWidget, UImage* InImage, UKizokUserWidget* InMarkerWidget, UKizokTextBlock* InNoMapTextBlock, UScrollBox* InScrollBox) {
}

void UKizokMapMenu::InitFastTravel(UScrollBox* InScrollBox, UKizokUserWidget* InCursorWidget) {
}

FText UKizokMapMenu::GetShowRegionName() const {
    return FText::GetEmpty();
}

FText UKizokMapMenu::GetShowAreaName() const {
    return FText::GetEmpty();
}

EKizokMapMenuState UKizokMapMenu::GetMapMenuState() const {
    return EKizokMapMenuState::Invalid;
}

UTexture2D* UKizokMapMenu::GetIconTexture(int32 InIndex) const {
    return NULL;
}

FText UKizokMapMenu::GetIconName(int32 InIndex) const {
    return FText::GetEmpty();
}

UKizokMapIconWidget* UKizokMapMenu::GetFastTravelPointWidget(int32 InIndex) const {
    return NULL;
}

FText UKizokMapMenu::GetFastTravelPointName(int32 InIndex) const {
    return FText::GetEmpty();
}

bool UKizokMapMenu::GetFastTravelPointChecked(int32 InIndex) const {
    return false;
}

FText UKizokMapMenu::GetAreaPointName(int32 InIndex) const {
    return FText::GetEmpty();
}

bool UKizokMapMenu::GetAreaPointChecked(int32 InIndex) const {
    return false;
}

UKizokAreaNameLabelWidget* UKizokMapMenu::GetAreaNameLabelWidget(int32 InIndex) const {
    return NULL;
}

void UKizokMapMenu::ChangeShowRoomByFastTravel(int32 InIndex) {
}

void UKizokMapMenu::ChangeMapMenuState(EKizokMapMenuState InMapMenuState) {
}

UKizokMapMenu::UKizokMapMenu() {
    this->ScrollSpeed = 0.00f;
    this->ScaleSpeed = 0.00f;
    this->MapScaleMin = 0.00f;
    this->MapScaleMax = 0.00f;
    this->IconScaleMin = 0.00f;
    this->IconScaleMax = 0.00f;
    this->TraceAlphaMin = 0.00f;
    this->TraceAlphaMax = 0.00f;
    this->AutoMoveTime = 0.00f;
    this->FastTravelTable = NULL;
    this->NoMapMaterial = NULL;
    this->IconWidgetClass = NULL;
    this->IconDescWidgetClass = NULL;
    this->TraceTexture = NULL;
    this->FastTravelWidgetClass = NULL;
    this->AreaWidgetClass = NULL;
    this->RegionMapWidgetClass = NULL;
}

