#include "KizokDLCManager.h"

class UObject;
class UDataTable;

void UKizokDLCManager::SetDLCCurrentRoomId(FName InRoomId) {
}

void UKizokDLCManager::SetDLC01SavePoint(const FName& savePoint) {
}

UClass* UKizokDLCManager::ReplacementClass(const TSoftClassPtr<UObject> InClass) {
    return NULL;
}

void UKizokDLCManager::OnLoadDLCSaveParam(const FDLCBridgeSaveParameter& Parameter, int32 slotNo) {
}

UDataTable* UKizokDLCManager::GetLVSNpcEnemyCtrlTable(UObject* WorldContextObject) {
    return NULL;
}

UDataTable* UKizokDLCManager::GetLVSEventCtrlTable(UObject* WorldContextObject) {
    return NULL;
}

FName UKizokDLCManager::GetDLCCurrentRoomId() {
    return NAME_None;
}

FName UKizokDLCManager::GetDLC01SavePoint() {
    return NAME_None;
}

int32 UKizokDLCManager::GetDLC01EpisodeOffset() const {
    return 0;
}

FName UKizokDLCManager::GetDLC01EpisodeFlagName() const {
    return NAME_None;
}

int32 UKizokDLCManager::GetDLC01EpisodeFlag(const UObject* WorldContextObject) {
    return 0;
}

FKizokMainStoryTableRow UKizokDLCManager::FindMainStoryTable(UObject* WorldContextObject, const FName& RowName) {
    return FKizokMainStoryTableRow{};
}

TMap<FName, bool> UKizokDLCManager::FindDLCStoryData(const FName& episodeId) {
    return TMap<FName, bool>();
}

void UKizokDLCManager::ExecDLCInitialize(UObject* WorldContextObject) {
}

UKizokDLCManager::UKizokDLCManager() {
}

