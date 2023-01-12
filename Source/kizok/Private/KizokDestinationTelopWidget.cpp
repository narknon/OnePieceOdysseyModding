#include "KizokDestinationTelopWidget.h"

class UKizokRichTextBlock;
class UKizokTextBlock;

bool UKizokDestinationTelopWidget::SetMainStoryText(UKizokRichTextBlock* InTargetTextBlock, UKizokTextBlock* InGuideTextBlock) {
    return false;
}

UKizokDestinationTelopWidget::UKizokDestinationTelopWidget() {
    this->MainStoryTargetStringDataTable = NULL;
    this->MainStoryGuideStringDataTable = NULL;
    this->DisplayTime = 0.00f;
}

