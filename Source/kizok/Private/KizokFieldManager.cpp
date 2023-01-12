#include "KizokFieldManager.h"

class UFieldAsyncTask;
class IFieldAsyncTask;
class UFieldWarpSystem;
class UFieldTravelSystem;
class UFieldEventDispatcher;
class UKizokHeatmapMiniMapManager;

void UKizokFieldManager::SetEnableNowLoadingSequence(bool bIsEnable) {
}

void UKizokFieldManager::SetBattleTriggerEnable(bool bIsEnable) {
}

void UKizokFieldManager::SetAllMiddlePointEnable(bool bIsEnable) {
}

void UKizokFieldManager::OnStartWarp(FFieldWarpInfo warpInfo) {
}

void UKizokFieldManager::OnStartMiddlePoint() {
}

void UKizokFieldManager::OnStartLvsJob(FKizokLvsJobResult jobResult) {
}

void UKizokFieldManager::OnPlayerInitialized() {
}

void UKizokFieldManager::OnFieldInitialized() {
}

void UKizokFieldManager::OnEndWarpForRenderer(FFieldWarpInfo warpInfo) {
}

void UKizokFieldManager::OnEndWarp(FFieldWarpInfo warpInfo) {
}

void UKizokFieldManager::OnEndTravel(FKizokTravelData travelData) {
}

void UKizokFieldManager::OnEndLvsJob(FKizokLvsJobResult jobResult) {
}

void UKizokFieldManager::OnCompleteMiddlePoint() {
}

void UKizokFieldManager::OnCompleteInitializeSubLevels() {
}

bool UKizokFieldManager::IsWaitLevelStreaming() const {
    return false;
}

bool UKizokFieldManager::IsEventEnable() const {
    return false;
}

bool UKizokFieldManager::IsEnableNPCSetAnimMultifame() const {
    return false;
}

UFieldWarpSystem* UKizokFieldManager::GetWarpSystem() {
    return NULL;
}

UFieldTravelSystem* UKizokFieldManager::GetTravelSystem() {
    return NULL;
}

UFieldEventDispatcher* UKizokFieldManager::GetSystemEvent() {
    return NULL;
}

UKizokHeatmapMiniMapManager* UKizokFieldManager::GetHeatmapMiniMapManager() {
    return NULL;
}

void UKizokFieldManager::CancelFastTravelWithNoEventDispach() {
}

void UKizokFieldManager::AddFieldInitializationTask(TScriptInterface<IFieldAsyncTask> task) {
}

UKizokFieldManager::UKizokFieldManager() {
    this->SystemEventListener = NULL;
    this->WarpSystem = NULL;
    this->TravelSystem = NULL;
    this->SystemEvent = NULL;
    this->EventLogger = NULL;
    this->FieldDebugAsset = NULL;
    this->HeatmapMiniMapManager = NULL;
    this->NpcAnimAssetManager = NULL;
    this->LevelStreamingWaitSequence = NULL;
}

