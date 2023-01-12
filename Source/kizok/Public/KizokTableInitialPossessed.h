#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "KizokTableInitialPossessed.generated.h"

USTRUCT(BlueprintType)
struct FKizokTableInitialPossessed : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Count;
    
    KIZOK_API FKizokTableInitialPossessed();
};

