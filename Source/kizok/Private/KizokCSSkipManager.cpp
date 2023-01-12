#include "KizokCSSkipManager.h"

class UObject;

void AKizokCSSkipManager::SkipEnable(const UObject* WorldContextObject) {
}

void AKizokCSSkipManager::SetNotAutoSkipEnable(const UObject* WorldContextObject) {
}

void AKizokCSSkipManager::SetBanSkipEnable(const UObject* WorldContextObject, bool IsEnable) {
}

void AKizokCSSkipManager::OnSkipRunEvent() {
}

AKizokCSSkipManager::AKizokCSSkipManager() {
    this->SkipEnableTime = 0.00f;
    this->SkipWidget = NULL;
}

