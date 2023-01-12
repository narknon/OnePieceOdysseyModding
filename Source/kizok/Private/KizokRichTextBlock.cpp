#include "KizokRichTextBlock.h"

class UDataTable;

void UKizokRichTextBlock::SetTextFromTextId(const FName& InTextId, UDataTable* InPriorityTable) {
}

void UKizokRichTextBlock::ClearTextBlock() {
}

UKizokRichTextBlock::UKizokRichTextBlock() : URichTextBlock(FObjectInitializer::Get()) {
    this->IsAutoScroll = false;
    this->ScrollSpeed = 50.00f;
    this->ScrollStartWaitTime = 2.00f;
    this->ScrollEndWaitTime = 0.50f;
}

