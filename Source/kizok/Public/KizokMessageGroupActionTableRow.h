#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "KizokMessageGroupActionTableRow.generated.h"

USTRUCT(BlueprintType)
struct FKizokMessageGroupActionTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LabelID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName FaceID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName VoiceID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 WaitTime;
    
    KIZOK_API FKizokMessageGroupActionTableRow();
};

