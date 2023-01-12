#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EExpressionAxis.h"
#include "KizokTableExpCalcAngleBase.h"
#include "UObject/NoExportTypes.h"
#include "KizokTableExpTransSyncRot.generated.h"

USTRUCT(BlueprintType)
struct FKizokTableExpTransSyncRot : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKizokTableExpCalcAngleBase BaseSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EExpressionAxis SourceAxis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector TransRatio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector ClampMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector ClampMax;
    
    KIZOK_API FKizokTableExpTransSyncRot();
};

