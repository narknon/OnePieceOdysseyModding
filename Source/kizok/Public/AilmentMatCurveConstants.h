#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "SMC_PARAM_TYPE.h"
#include "ANOMALIES.h"
#include "AEF_TYPE.h"
#include "SMT_TARGET_TYPE.h"
#include "AilmentMatCurveConstants.generated.h"

USTRUCT(BlueprintType)
struct FAilmentMatCurveConstants : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Curve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    SMC_PARAM_TYPE ParamType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    SMT_TARGET_TYPE Target;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AEF_TYPE Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ANOMALIES Status;
    
    KIZOK_API FAilmentMatCurveConstants();
};

