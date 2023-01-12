#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataTable.h"
#include "KizokButtonIconTableRow.generated.h"

USTRUCT(BlueprintType)
struct FKizokButtonIconTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath IconTexture;
    
    KIZOK_API FKizokButtonIconTableRow();
};

