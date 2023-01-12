#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "KizokTableItemStr.generated.h"

USTRUCT(BlueprintType)
struct FKizokTableItemStr : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ItemInfo;
    
    KIZOK_API FKizokTableItemStr();
};

