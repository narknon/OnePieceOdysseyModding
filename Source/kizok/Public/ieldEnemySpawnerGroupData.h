#pragma once
#include "CoreMinimal.h"
#include "ieldEnemySpawnerGroupData.generated.h"

USTRUCT(BlueprintType)
struct FieldEnemySpawnerGroupData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint32> SpawnerUniqueID;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint32> EnemyUniqueID;
    
    KIZOK_API FieldEnemySpawnerGroupData();
};

