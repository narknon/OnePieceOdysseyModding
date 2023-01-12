#pragma once
#include "CoreMinimal.h"
#include "KizokMessageDataTable.generated.h"

class UDataTable;

USTRUCT(BlueprintType)
struct FKizokMessageDataTable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UDataTable>> MessageTableList;
    
    KIZOK_API FKizokMessageDataTable();
};

