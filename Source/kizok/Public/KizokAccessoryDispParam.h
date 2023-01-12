#pragma once
#include "CoreMinimal.h"
#include "EKizokAccessoryParamFrame.h"
#include "KizokAccessoryDispParam.generated.h"

USTRUCT(BlueprintType)
struct FKizokAccessoryDispParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TypeValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKizokAccessoryParamFrame Frame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Parcentage;
    
    KIZOK_API FKizokAccessoryDispParam();
};

