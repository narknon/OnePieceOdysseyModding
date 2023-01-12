#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "KizokWayTalkActionTableRow.generated.h"

USTRUCT(BlueprintType)
struct FKizokWayTalkActionTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LabelID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName FaceIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName VoiceID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MessageTime;
    
    KIZOK_API FKizokWayTalkActionTableRow();
};

