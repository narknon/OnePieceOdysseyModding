#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "KizokFacialFrameTableRow.generated.h"

USTRUCT(BlueprintType)
struct FKizokFacialFrameTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PoseName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PoseFrame;
    
    KIZOK_API FKizokFacialFrameTableRow();
};

