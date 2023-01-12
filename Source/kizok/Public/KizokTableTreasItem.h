#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "KizokTableTreasItem.generated.h"

USTRUCT(BlueprintType)
struct FKizokTableTreasItem : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString item_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Count;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName KeyItemID;
    
    KIZOK_API FKizokTableTreasItem();
};

