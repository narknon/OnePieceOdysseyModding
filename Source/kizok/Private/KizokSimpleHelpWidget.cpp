#include "KizokSimpleHelpWidget.h"

class UKizokRichTextBlock;

void UKizokSimpleHelpWidget::OpenNextSimpleHelp() {
}


bool UKizokSimpleHelpWidget::IsExecuteDestroyWidget() const {
    return false;
}

void UKizokSimpleHelpWidget::InitTextBlock(UKizokRichTextBlock* InRichTextBlock) {
}

FKizokLocalizationTextParam UKizokSimpleHelpWidget::GetTextParam() const {
    return FKizokLocalizationTextParam{};
}

UKizokSimpleHelpWidget::UKizokSimpleHelpWidget() {
    this->DisplayTime = 0.00f;
    this->HelpTextTableAsset = NULL;
}

