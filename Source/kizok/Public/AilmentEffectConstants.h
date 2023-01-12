#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ANOMALIES.h"
#include "AEF_TYPE.h"
#include "AilmentEffectConstants.generated.h"

USTRUCT(BlueprintType)
struct FAilmentEffectConstants : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Asset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Folder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AEF_TYPE Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ANOMALIES Status;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Node;
    
    KIZOK_API FAilmentEffectConstants();
};

