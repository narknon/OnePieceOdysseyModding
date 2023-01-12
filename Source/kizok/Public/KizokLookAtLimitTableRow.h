#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "KizokLookAtLimitTableRow.generated.h"

USTRUCT(BlueprintType)
struct FKizokLookAtLimitTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Up;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Down;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Left;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Right;
    
    KIZOK_API FKizokLookAtLimitTableRow();
};

