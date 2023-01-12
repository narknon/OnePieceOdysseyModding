#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataTable.h"
#include "KizokButtonGuideTableRow.generated.h"

USTRUCT(BlueprintType)
struct FKizokButtonGuideTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath IconTexture;
    
    KIZOK_API FKizokButtonGuideTableRow();
};

