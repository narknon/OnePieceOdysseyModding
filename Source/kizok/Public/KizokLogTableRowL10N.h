#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "KizokLogTableRowL10N.generated.h"

USTRUCT(BlueprintType)
struct FKizokLogTableRowL10N : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText RewardTitle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText RewardText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Info;
    
    KIZOK_API FKizokLogTableRowL10N();
};

