#include "KizokCheatManager.h"

class UKizokCheatStatus;
class UKizokCheatPresetItem;

void UKizokCheatManager::WriteAchievementAndLog(uint32 InSaveDataType, int32 InValue, FName InLimitParam) {
}

void UKizokCheatManager::ValidMsgTable() {
}

void UKizokCheatManager::UnloadLevelSetAssets(FName LevelSetName) {
}

void UKizokCheatManager::UnloadExperimentalAssets(const FString& Filter) {
}

void UKizokCheatManager::SwitchConnectMouse() {
}

void UKizokCheatManager::SwitchConnectKeyboard() {
}

void UKizokCheatManager::SwitchConnectGamepad() {
}

void UKizokCheatManager::StopDecitionInputSimulation() {
}

void UKizokCheatManager::StatLvs() {
}

void UKizokCheatManager::StatFade() {
}

void UKizokCheatManager::StartMeasurePlayTime() {
}

void UKizokCheatManager::StartDecitionInputSimulation(float intervalSec) {
}

void UKizokCheatManager::SimulateStreamingWait(bool bWait) {
}

void UKizokCheatManager::ShowLogSaveDataValue(FName InKey) {
}

void UKizokCheatManager::ShowAchievementSaveDataValue(FName InKey) {
}

void UKizokCheatManager::SetTalkWindowVisibleDebug(bool bIsVisible) {
}

void UKizokCheatManager::SetTalkWindowVisible(bool bIsVisible) {
}

void UKizokCheatManager::SetSubLevelVisible(const FString& Name, bool bIsVisible) {
}

void UKizokCheatManager::SetSmoothFrameRateMax(float FrameRate) {
}

void UKizokCheatManager::SetSkipWidgetLogEnable(bool InIsEnable) {
}

void UKizokCheatManager::SetResolutionScale(float NewScale, bool IsMath) {
}

void UKizokCheatManager::SetReleasedDLCFlag(bool bInReleased) {
}

void UKizokCheatManager::SetPurchasedDLCFlag(bool bInPurchased) {
}

void UKizokCheatManager::SetPPVersion(int32 InVersion) {
}

void UKizokCheatManager::SetPlayingDLC01Flag(const bool bInPlayingDLC01) {
}

void UKizokCheatManager::SetPlayetTickable(bool bIsEnable) {
}

void UKizokCheatManager::SetPlayerVisible(bool bIsVisible) {
}

void UKizokCheatManager::SetNPCVisible(bool bIsVisible) {
}

void UKizokCheatManager::SetNPCTickable(bool bIsEnable) {
}

void UKizokCheatManager::SetIsDiskSpaceFull(bool IsSpaceFull) {
}

void UKizokCheatManager::SetFramerateLimit(float Limit) {
}

void UKizokCheatManager::SetEnableVerifyGC(bool bIsEnable) {
}

void UKizokCheatManager::SetEnableDebugInfo(bool bIsEnable) {
}

void UKizokCheatManager::SetEnableButtonIcon(bool bIsEnable) {
}

void UKizokCheatManager::SetEditorDebugPlatform(const FString& InPlatformName) {
}

void UKizokCheatManager::SetDynamicResoEnable(bool bIsEnable) {
}

void UKizokCheatManager::SetDebugDLCUIDisable(bool bInDisable) {
}

void UKizokCheatManager::SetCulture(const FString& InCulture) {
}

void UKizokCheatManager::SetCeBankVersion(int32 InVersion) {
}

void UKizokCheatManager::SetBonusType(int32 Type) {
}

void UKizokCheatManager::SetAspect(int32 X, int32 Y, int32 W) {
}

void UKizokCheatManager::SetAnimTickAlwaysForce() {
}

void UKizokCheatManager::SetAnimTickAlways(bool bIsAlways) {
}

void UKizokCheatManager::RestoreFieldVisibleForBattle() {
}

void UKizokCheatManager::ResetAchievementProgress() {
}

void UKizokCheatManager::PlayNpcAnimMontageSection(FName Name) {
}

void UKizokCheatManager::OutLogSearchParentClassBP(const FString& InFolderPath, const FString& SearchBPName) {
}

void UKizokCheatManager::OutLog_DataTableStructerList(const FString& InFolderPath) {
}

void UKizokCheatManager::LvsWillBeVisibled(const FString& lvsSetName) {
}

void UKizokCheatManager::LvsWillBeLoaded(const FString& lvsSetName) {
}

void UKizokCheatManager::LvsVisible(const FString& LevelSetName) {
}

void UKizokCheatManager::LvsUnload(const FString& LevelSetName) {
}

void UKizokCheatManager::LvsLoad(const FString& LevelSetName) {
}

void UKizokCheatManager::LvsInvisible(const FString& LevelSetName) {
}

void UKizokCheatManager::LoggingSteamLanguage() {
}

void UKizokCheatManager::LoadNcessaryPersistentAssets() {
}

void UKizokCheatManager::LoadLevelSetAssets(FName LevelSetName) {
}

void UKizokCheatManager::LoadingWidgetTimeUpdateEnable() {
}

void UKizokCheatManager::LoadExperimentalAssets(const FString& Filter) {
}

void UKizokCheatManager::IsBusyFieldVisibleFunc() {
}

FString UKizokCheatManager::GetRevision() const {
    return TEXT("");
}

TArray<FName> UKizokCheatManager::GetMainStoryTableRowNames() {
    return TArray<FName>();
}

UKizokCheatStatus* UKizokCheatManager::GetCheatStatus() const {
    return NULL;
}

UKizokCheatPresetItem* UKizokCheatManager::GetCheatPresetItem() const {
    return NULL;
}

void UKizokCheatManager::ForceGC() {
}

void UKizokCheatManager::EndMeasurePlayTime() {
}

void UKizokCheatManager::EnableParallelNotation(const FString& InCulture) {
}

void UKizokCheatManager::DumpLoadedSubLevels() {
}

void UKizokCheatManager::DispSmoothFrameRate() {
}

void UKizokCheatManager::DispScreenSettings() {
}

void UKizokCheatManager::DisableParallelNotation() {
}

void UKizokCheatManager::CheckInputTypeForHandle() {
}

void UKizokCheatManager::CheckFastTravelSaveData(bool bEnable) {
}

void UKizokCheatManager::CheckDiskFreeSpace(const FString& InPath) {
}

void UKizokCheatManager::CheckDemoVersion() {
}

void UKizokCheatManager::ChangeOrAddActionMapping(const FName& InActionMappingName, const FName& InKeyName) {
}

void UKizokCheatManager::ChangeCostumeSavekey(const FString& BPName, uint8 CostumeID) {
}

void UKizokCheatManager::ChangeCostume(const FString& BPName, const FString& BPKind, uint8 CostumeID) {
}

void UKizokCheatManager::ApplyFieldVisibleForBattle() {
}

void UKizokCheatManager::AddActionMapping(const FName& InActionMappingName, const FName& InKeyName) {
}

UKizokCheatManager::UKizokCheatManager() {
    this->cheatStatus = NULL;
    this->cheatPresetItem = NULL;
    this->validMessageTable = NULL;
}

