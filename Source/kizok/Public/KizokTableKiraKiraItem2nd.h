#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "KizokTableKiraKiraItem2nd.generated.h"

USTRUCT(BlueprintType)
struct FKizokTableKiraKiraItem2nd : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 repop_time;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Motion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName rot_table_id;
    
    KIZOK_API FKizokTableKiraKiraItem2nd();
};

