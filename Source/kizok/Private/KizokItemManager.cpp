#include "KizokItemManager.h"

int32 UKizokItemManager::GetItemPossessNum(const FName& InItemId) const {
    return 0;
}

TMap<FName, int32> UKizokItemManager::GetFluctuationItems() {
    return TMap<FName, int32>();
}

void UKizokItemManager::ClearFluctuationItems() {
}

int32 UKizokItemManager::BC_GetItemNum(FName ItemId) {
    return 0;
}

void UKizokItemManager::AddFirstPossessItem() {
}

UKizokItemManager::UKizokItemManager() {
}

