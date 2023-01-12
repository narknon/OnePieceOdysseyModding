#pragma once
#include "CoreMinimal.h"
#include "KizokLocalizationTextParam.generated.h"

class UDataTable;

USTRUCT(BlueprintType)
struct FKizokLocalizationTextParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TextId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* DataTable;
    
    KIZOK_API FKizokLocalizationTextParam();
};

