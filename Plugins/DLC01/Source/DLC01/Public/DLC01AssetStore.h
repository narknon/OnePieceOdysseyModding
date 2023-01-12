#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "DLC01AssetStore.generated.h"

class AActor;
class UKizokEachRegionWarpSound;
class UKizokEachRegionSoundControl;
class UKizokDLCSoundCue;
class UKizokEachRegionMessageTable;

UCLASS(Blueprintable)
class DLC01_API UDLC01AssetStore : public UDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UKizokEachRegionMessageTable> MessageTableClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UKizokDLCSoundCue> DLCSoundDataClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UKizokEachRegionSoundControl> RegionSoundControlClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UKizokEachRegionWarpSound> RegionWarpSoundClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AActor> BootstrapClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKizokEachRegionMessageTable* Message;
    
public:
    UDLC01AssetStore();
};

