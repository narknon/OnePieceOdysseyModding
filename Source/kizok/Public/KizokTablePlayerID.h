#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "PLAYER_ID.h"
#include "KizokTablePlayerID.generated.h"

USTRUCT(BlueprintType)
struct FKizokTablePlayerID : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    PLAYER_ID Pid;
    
    KIZOK_API FKizokTablePlayerID();
};

