#include "KizokSecondaryCache.h"

void UKizokSecondaryCache::OnCompleted2nd() {
}

void UKizokSecondaryCache::OnCompleted() {
}

UKizokSecondaryCache::UKizokSecondaryCache() {
    this->BattleMode = NULL;
    this->Loader = NULL;
    this->bIsComplete = false;
    this->Loader2nd = NULL;
    this->bIsComplete2nd = false;
}

