#include "KizokCSSkipWidget.h"


void UKizokCSSkipWidget::OnFinishedSkipEvent() {
}




UKizokCSSkipWidget::UKizokCSSkipWidget() {
    this->SkipInputTime = 0.00f;
    this->FadeOutNotInputTime = 0.00f;
    this->FadeWidget = NULL;
    this->SystemEventListener = NULL;
}

