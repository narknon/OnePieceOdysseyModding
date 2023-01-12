#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataTable.h"
#include "KizokTableBattleSECommon.generated.h"

USTRUCT(BlueprintType)
struct FKizokTableBattleSECommon : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath Cue;
    
    KIZOK_API FKizokTableBattleSECommon();
};

