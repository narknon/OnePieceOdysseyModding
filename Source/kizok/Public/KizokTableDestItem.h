#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "KizokTableDestItem.generated.h"

USTRUCT(BlueprintType)
struct FKizokTableDestItem : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString item_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Count;
    
    KIZOK_API FKizokTableDestItem();
};

