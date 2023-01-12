#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataTable.h"
#include "KizokKeyIconTableRow.generated.h"

USTRUCT(BlueprintType)
struct FKizokKeyIconTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath IconTexture;
    
    KIZOK_API FKizokKeyIconTableRow();
};

