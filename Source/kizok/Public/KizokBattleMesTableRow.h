#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "KizokBattleMesTableRow.generated.h"

USTRUCT(BlueprintType)
struct FKizokBattleMesTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Priority;
    
    KIZOK_API FKizokBattleMesTableRow();
};

