#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "KizokTableFieldEnemyRange.generated.h"

USTRUCT(BlueprintType)
struct FKizokTableFieldEnemyRange : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 enemy_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float player_follow_range;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float player_discovery_range;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float player_encount_range;
    
    KIZOK_API FKizokTableFieldEnemyRange();
};

