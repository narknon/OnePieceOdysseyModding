#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EFlagNameTypeList.h"
#include "KizokTableVarList.generated.h"

USTRUCT(BlueprintType)
struct FKizokTableVarList : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFlagNameTypeList Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString desc;
    
    KIZOK_API FKizokTableVarList();
};

