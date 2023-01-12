#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "KizokEventCtrl.h"
#include "KizokLVSEventCtrlTableRow.generated.h"

USTRUCT(BlueprintType)
struct FKizokLVSEventCtrlTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKizokEventCtrl> LevelList;
    
    KIZOK_API FKizokLVSEventCtrlTableRow();
};

