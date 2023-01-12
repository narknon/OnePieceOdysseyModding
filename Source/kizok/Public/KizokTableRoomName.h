#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "KizokTableRoomName.generated.h"

USTRUCT(BlueprintType)
struct FKizokTableRoomName : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText RoomName;
    
    KIZOK_API FKizokTableRoomName();
};

