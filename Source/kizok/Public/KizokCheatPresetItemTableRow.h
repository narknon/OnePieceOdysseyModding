#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "KizokCheatPresetItemTableRow.generated.h"

USTRUCT(BlueprintType)
struct FKizokCheatPresetItemTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ItemSet;
    
    KIZOK_API FKizokCheatPresetItemTableRow();
};

