#include "KizokBattleCharaCache.h"

void UKizokBattleCharaCache::OnCompleted2nd() {
}

void UKizokBattleCharaCache::OnCompleted() {
}

UKizokBattleCharaCache::UKizokBattleCharaCache() {
    this->Loader = NULL;
    this->bIsComplete = false;
    this->Loader2nd = NULL;
    this->bIsComplete2nd = false;
    this->SecondaryCache = NULL;
    this->bIs2ndCacheStarted = false;
}

