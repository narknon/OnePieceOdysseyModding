#include "KizokHeatmapMiniMapManager.h"

TArray<FKizokHeatmapMiniMapNaviVolumeListItem> UKizokHeatmapMiniMapManager::GetVolumeList() const {
    return TArray<FKizokHeatmapMiniMapNaviVolumeListItem>();
}

int32 UKizokHeatmapMiniMapManager::GetGrindNum() const {
    return 0;
}

void UKizokHeatmapMiniMapManager::CreateGridItem(TArray<FKizokHeatmapMiniMapGridItem>& outGridItem, const FKizokHeatmapMiniMapNaviVolumeListItem& volumeItem) const {
}

UKizokHeatmapMiniMapManager::UKizokHeatmapMiniMapManager() {
}

