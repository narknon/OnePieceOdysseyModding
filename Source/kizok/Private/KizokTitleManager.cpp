#include "KizokTitleManager.h"

class UObject;
class UKizokTitleManager;
class UKizokTitleData;

void UKizokTitleManager::WaitAsyncFinish() {
}

void UKizokTitleManager::StopBGM() {
}

UKizokTitleManager* UKizokTitleManager::StartTitle(const UObject* WorldContextObject, TSoftClassPtr<UKizokTitleData> InTitleDataClass) {
    return NULL;
}

void UKizokTitleManager::StartBonusSequence(FKizokEndBonusSequenceDelegate InDelegate) {
}

UKizokTitleManager* UKizokTitleManager::StartActivity(const UObject* WorldContextObject, TSoftClassPtr<UKizokTitleData> InTitleDataClass) {
    return NULL;
}

void UKizokTitleManager::PlayMovie() {
}

void UKizokTitleManager::OpenTitleStartupMenu() {
}

void UKizokTitleManager::OpenTitleMenu() {
}

void UKizokTitleManager::OpenTitleLogoMenu() {
}

void UKizokTitleManager::OpenTitleLicenceMenu() {
}

void UKizokTitleManager::OpenStartupOrTitleLogo() {
}

void UKizokTitleManager::OpenAutoSaveIconDescMenu() {
}

void UKizokTitleManager::OpenActivityLogo() {
}

int32 UKizokTitleManager::OnCompleteLoadActivitySaveData() {
    return 0;
}

bool UKizokTitleManager::LoadActivitySaveData() {
    return false;
}

void UKizokTitleManager::LoadActivityGameData() {
}

void UKizokTitleManager::GiveBonus() {
}

void UKizokTitleManager::DestoryTitleManager() {
}

void UKizokTitleManager::CompleteAsyncFinish() {
}

void UKizokTitleManager::CloseTitleLogoMenu() {
}

void UKizokTitleManager::CloseTitleLicenceMenuEvent() {
}

void UKizokTitleManager::CheckDemo() {
}

void UKizokTitleManager::CheckBonus(bool bInResult) {
}

void UKizokTitleManager::CallStartOutTitleMenuEvent() {
}

void UKizokTitleManager::CallOnSelectNewGameTitleManagerEvent() {
}

void UKizokTitleManager::CallFinishTitleLogoInEvent() {
}

void UKizokTitleManager::BindStartOutTitleMenuEvent(FKizokOnStartOutTitleMenuDelegate InEvent) {
}

void UKizokTitleManager::BindSkipTitleMovieEvent(FKizokOnSkipTitleMovieDelegate InEvent) {
}

void UKizokTitleManager::BindSelectNewGameTitleMenuEvent(FKizokOnSelectNewGameTitleMenuDelegate InEvent) {
}

void UKizokTitleManager::BindPlayTitleMovieEvent(FKizokOnPlayTitleMovieDelegate InEvent) {
}

void UKizokTitleManager::BindPlayedActivityEvent(FKizokOnPlayedActivityDelegate InEvent) {
}

void UKizokTitleManager::BindOpenTitleStartupMenuEvent(FKizokOnOpenTitleStartupMenuDelegate InEvent) {
}

void UKizokTitleManager::BindOpenTitleLogoMenuEvent(FKizokOnOpenTitleLogoMenuDelegate InEvent) {
}

void UKizokTitleManager::BindFinishTitleLogoInEvent(FKizokOnFinishTitleLogoInDelegate InEvent) {
}

void UKizokTitleManager::BindFailedBonusEvent(FKizokOnFailedBonusDelegate InEvent) {
}

void UKizokTitleManager::BindCompleteLoadActivityGameDataEvent(FKizokOnCompleteLoadActivityGameDataDelegate InEvent) {
}

UKizokTitleManager::UKizokTitleManager() {
    this->TitleLicenceMenu = NULL;
    this->TitleLogoMenu = NULL;
    this->TitleData = NULL;
    this->SystemSaveSequence = NULL;
    this->ActivitySlotIndex = 0;
    this->IsAyncThreadFinish = false;
    this->BonusSequence = NULL;
}

