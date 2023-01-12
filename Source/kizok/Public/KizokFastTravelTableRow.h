#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "KizokFastTravelTableRow.generated.h"

USTRUCT(BlueprintType)
struct FKizokFastTravelTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ArrivedYaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SetId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LvsLevelSetIdForRes;
    
    KIZOK_API FKizokFastTravelTableRow();
};

