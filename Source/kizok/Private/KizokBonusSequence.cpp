#include "KizokBonusSequence.h"

void UKizokBonusSequence::OnFinishErrorDialog() {
}

void UKizokBonusSequence::OnFinishBonusDialog() {
}

UKizokBonusSequence::UKizokBonusSequence() {
    this->BonusData = NULL;
    this->BonusDialog = NULL;
    this->ErrorDialog = NULL;
}

