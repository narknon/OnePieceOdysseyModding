#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "KizokTableTitleInfo.generated.h"

USTRUCT(BlueprintType)
struct FKizokTableTitleInfo : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name_ja;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ReleaseTrigger_ja;
    
    KIZOK_API FKizokTableTitleInfo();
};

