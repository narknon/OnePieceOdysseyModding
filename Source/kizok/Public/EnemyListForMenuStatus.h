#pragma once
#include "CoreMinimal.h"
#include "EBtlMenuIcon.h"
#include "EnemyListForMenuStatus.generated.h"

USTRUCT(BlueprintType)
struct FEnemyListForMenuStatus {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBtlMenuIcon IconType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GroupID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHaveTreasure;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EscapeTurn;
    
    KIZOK_API FEnemyListForMenuStatus();
};

