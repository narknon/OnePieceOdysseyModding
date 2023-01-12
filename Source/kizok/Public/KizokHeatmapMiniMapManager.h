#pragma once
#include "CoreMinimal.h"
#include "KizokHeatmapMiniMapNaviVolumeListItem.h"
#include "KizokHeatmapMiniMapGridItem.h"
#include "UObject/Object.h"
#include "KizokHeatmapMiniMapManager.generated.h"

UCLASS(Blueprintable)
class KIZOK_API UKizokHeatmapMiniMapManager : public UObject {
    GENERATED_BODY()
public:
    UKizokHeatmapMiniMapManager();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FKizokHeatmapMiniMapNaviVolumeListItem> GetVolumeList() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetGrindNum() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void CreateGridItem(TArray<FKizokHeatmapMiniMapGridItem>& outGridItem, const FKizokHeatmapMiniMapNaviVolumeListItem& volumeItem) const;
    
};

