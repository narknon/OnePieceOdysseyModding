#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "KizokCSMessageTableRow.generated.h"

USTRUCT(BlueprintType)
struct FKizokCSMessageTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TalkerId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LabelID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName FaceID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Layout;
    
    KIZOK_API FKizokCSMessageTableRow();
};

