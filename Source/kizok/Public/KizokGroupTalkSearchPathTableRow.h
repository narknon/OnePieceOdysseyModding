#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "KizokGroupTalkSearchPathTableRow.generated.h"

USTRUCT(BlueprintType)
struct FKizokGroupTalkSearchPathTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SearchPath;
    
    KIZOK_API FKizokGroupTalkSearchPathTableRow();
};

