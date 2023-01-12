#include "KizokLvsManager.h"

bool UKizokLvsManager::WillBeVisibled(const FName& LevelSetName) const {
    return false;
}

bool UKizokLvsManager::WillBeLoaded(const FName& LevelSetName) const {
    return false;
}

void UKizokLvsManager::SetLoadingProgressRateMaxToOne() {
}

void UKizokLvsManager::SetEnable(const bool IsEnable) {
}

void UKizokLvsManager::RequestSetVisible(const FName& LevelSetName, const bool IsVisible) {
}

void UKizokLvsManager::RequestLevelUnload(const FName& LevelSetName) {
}

void UKizokLvsManager::RequestLevelLoad(const FName& LevelSetName) {
}

void UKizokLvsManager::Request(const FName& LevelSetName, EKizokLvsJobType JobType) {
}

bool UKizokLvsManager::IsGroundLevelVisibled(const FName& LevelSetName) const {
    return false;
}

bool UKizokLvsManager::IsExistGroundLevel(const FName& LevelSetName) const {
    return false;
}

bool UKizokLvsManager::IsBusy() const {
    return false;
}

void UKizokLvsManager::ForceRequestSetVisible(const FName& LevelSetName, const bool IsVisible) {
}

void UKizokLvsManager::ForceRequestLevelUnload(const FName& LevelSetName) {
}

void UKizokLvsManager::ForceRequestLevelLoad(const FName& LevelSetName) {
}

void UKizokLvsManager::ForceRequest(const FName& LevelSetName, EKizokLvsJobType JobType) {
}

UKizokLvsManager::UKizokLvsManager() {
    this->CurrentWorld = NULL;
    this->CurrentWorldContextObject = NULL;
}

