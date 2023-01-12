#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "KizokTextureStreamingSettingTableRow.generated.h"

class UWorld;

USTRUCT(BlueprintType)
struct FKizokTextureStreamingSettingTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UWorld> PersistentLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TexturePoolSizeInMB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CSGTExtendSizeInMB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CampExtendSizeInMB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 UtageExtendSizeInMB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BattlePoolSizeInMB;
    
    KIZOK_API FKizokTextureStreamingSettingTableRow();
};

