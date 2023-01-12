#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "KizokTableRowName.generated.h"

USTRUCT(BlueprintType)
struct FKizokTableRowName : public FTableRowBase {
    GENERATED_BODY()
public:
    KIZOK_API FKizokTableRowName();
};

