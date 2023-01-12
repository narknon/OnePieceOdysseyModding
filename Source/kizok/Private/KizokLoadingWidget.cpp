#include "KizokLoadingWidget.h"

class UUserWidget;
class UWidgetAnimation;

void UKizokLoadingWidget::RegisterWidgetAnimationFromWidget(UUserWidget* Widget, UWidgetAnimation* TipsInAnimation, UWidgetAnimation* TipsOutAnimation) {
}









bool UKizokLoadingWidget::IsShowTips() const {
    return false;
}

bool UKizokLoadingWidget::IsEndLoading() const {
    return false;
}

EKizokLoadingMode UKizokLoadingWidget::GetLoadingMode() const {
    return EKizokLoadingMode::Normal;
}

void UKizokLoadingWidget::FinishEndLoadingAnime() {
}

void UKizokLoadingWidget::FinishBeginLoadingAnime() {
}

void UKizokLoadingWidget::DestroyLoadingWidget() {
}

void UKizokLoadingWidget::ChangeTips() {
}

UKizokLoadingWidget::UKizokLoadingWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->ElapsedTimeToBeginShowTips = 0.00f;
    this->ElapsedTimeToChangeShowTips = 0.00f;
    this->TipsPriorityRange = 0;
    this->TipsPriorityProbability = 0.00f;
    this->TipsTable = NULL;
    this->TipsStrTable = NULL;
}

