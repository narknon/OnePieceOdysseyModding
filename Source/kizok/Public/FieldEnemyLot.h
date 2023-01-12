#pragma once
#include "CoreMinimal.h"
#include "FieldEnemyLot.generated.h"

USTRUCT(BlueprintType)
struct FFieldEnemyLot {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* BP_FieldEnemy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LotPercent;
    
    KIZOK_API FFieldEnemyLot();
};

