#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "KizokOpenFeatureTableRow.generated.h"

USTRUCT(BlueprintType)
struct FKizokOpenFeatureTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Seq;
    
    KIZOK_API FKizokOpenFeatureTableRow();
};

