#include "KizokLogTelopWidget.h"

void UKizokLogTelopWidget::RemoveLogTelopTargetWhatExec() {
}



void UKizokLogTelopWidget::NextAnime() {
}

bool UKizokLogTelopWidget::IsThereRelease() const {
    return false;
}

bool UKizokLogTelopWidget::IsThereComplete() const {
    return false;
}

UKizokLogTelopWidget::UKizokLogTelopWidget() {
    this->DispTimeRelease = 0.00f;
    this->DispTimeReleaseWhenThereComplete = 0.00f;
    this->DispTimeComplete = 0.00f;
    this->DispTimeCompleteWhenThereRelease = 0.00f;
    this->WaitTime = 0.00f;
}

