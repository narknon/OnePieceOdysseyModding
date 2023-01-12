#include "KizokTextBlock.h"

class UKizokUserWidget;
class UDataTable;

void UKizokTextBlock::ShowUITextFromTextId(const FName& InUITextId) {
}

void UKizokTextBlock::ShowUITextForFixedTimeFromTextId(UKizokUserWidget* InWidget, const FName& InUITextId, const FName& InNextUITextId) {
}

void UKizokTextBlock::ShowUITextForFixedTime(UKizokUserWidget* InWidget, uint8 InUITextIndex, uint8 InNextUITextIndex) {
}

void UKizokTextBlock::ShowUIText(uint8 InUITextIndex) {
}

void UKizokTextBlock::SetTextFromTextId(const FName& InTextId, UDataTable* InPriorityTable) {
}

bool UKizokTextBlock::IsExistUITextID(const FName& InUITextId, uint8& InUITextIndex) {
    return false;
}

void UKizokTextBlock::ClearTextBlock() {
}

UKizokTextBlock::UKizokTextBlock() {
    this->IsFittingValid = false;
    this->FittingType = X_FITTING;
    this->IsAutoScroll = false;
    this->ScrollSpeed = 50.00f;
    this->ScrollStartWaitTime = 2.00f;
    this->ScrollEndWaitTime = 0.50f;
}

