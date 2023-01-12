#pragma once
#include "CoreMinimal.h"
#include "KizokHeatmapMiniMapNaviVolumeListItem.generated.h"

USTRUCT(BlueprintType)
struct KIZOK_API FKizokHeatmapMiniMapNaviVolumeListItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString NaviVolumeName;
    
    FKizokHeatmapMiniMapNaviVolumeListItem();
};

