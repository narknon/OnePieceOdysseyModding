#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EExpressionAxis.h"
#include "KizokTableExpCalcAngleBase.h"
#include "UObject/NoExportTypes.h"
#include "KizokTableExpMaxOrMinRot.generated.h"

USTRUCT(BlueprintType)
struct FKizokTableExpMaxOrMinRot : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKizokTableExpCalcAngleBase BaseSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EExpressionAxis TargetAxis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMaxRot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector ClampMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector ClampMax;
    
    KIZOK_API FKizokTableExpMaxOrMinRot();
};

