#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "KizokTableEncount.generated.h"

USTRUCT(BlueprintType)
struct FKizokTableEncount : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Advantages;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Normal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Disadvantages;
    
    KIZOK_API FKizokTableEncount();
};

