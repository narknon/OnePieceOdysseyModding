#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BtlMenuStatusEffectParam.generated.h"

USTRUCT(BlueprintType)
struct FBtlMenuStatusEffectParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName StatusId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DescText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StackNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath IconPath;
    
    KIZOK_API FBtlMenuStatusEffectParam();
};

