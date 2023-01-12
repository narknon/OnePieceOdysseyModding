#include "KizokKeyAssignWidget.h"

class UKizokButtonGuideWidget;
class UVerticalBox;

void UKizokKeyAssignWidget::SetupKeyAssign() {
}





bool UKizokKeyAssignWidget::IsEnableChangeButton() const {
    return false;
}

void UKizokKeyAssignWidget::InitButtonGuideWidget(UKizokButtonGuideWidget* InButtonGuideWidget, FName InButtonGuideId) {
}

void UKizokKeyAssignWidget::InitButtonGuideListFromVerticalBox(UVerticalBox* InVerticalBox) {
}

UKizokKeyAssignWidget::UKizokKeyAssignWidget() {
    this->VerticalBox = NULL;
}

