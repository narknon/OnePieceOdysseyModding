#include "KizokButtonWidget.h"

class UKizokUserWidget;

void UKizokButtonWidget::SetSelectMode(EKizokButtonWidgetSelectMode InSelectMode) {
}





bool UKizokButtonWidget::IsSelectable() const {
    return false;
}

UKizokUserWidget* UKizokButtonWidget::GetParentWidget() {
    return NULL;
}

int32 UKizokButtonWidget::GetButtonIndex() const {
    return 0;
}

UKizokButtonWidget::UKizokButtonWidget() : UUserWidget(FObjectInitializer::Get()) {
}

