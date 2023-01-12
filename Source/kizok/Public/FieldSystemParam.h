#pragma once
#include "CoreMinimal.h"
#include "PLAYER_ID.h"
#include "LevelStreamingWaitConfig.h"
#include "Engine/DataAsset.h"
#include "FieldSystemParam.generated.h"

class UFieldPersisentAssetDatabase;
class UFieldOptimizeConfigDatabase;
class UFieldNPCUROBlacklist;
class UPrimaryAssetLabel;

UCLASS(Blueprintable)
class KIZOK_API UFieldSystemParam : public UDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLevelStreamingWaitConfig LevelStreamingWaitConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFieldNPCUROBlacklist* UroBlackList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UFieldPersisentAssetDatabase> PersistentAssetDatabase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UFieldOptimizeConfigDatabase> OptimizeConfigDatabase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFieldPersisentAssetDatabase* PersistentAssetDatabaseInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFieldOptimizeConfigDatabase* OptimizeConfigDatabaseInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<PLAYER_ID, UPrimaryAssetLabel*> PlayerPersistentAssets;
    
public:
    UFieldSystemParam();
};

