#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "KizokTextureStreamingSizeTableRow.generated.h"

USTRUCT(BlueprintType)
struct FKizokTextureStreamingSizeTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SizeInMB;
    
    KIZOK_API FKizokTextureStreamingSizeTableRow();
};

