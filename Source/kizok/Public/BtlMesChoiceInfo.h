#pragma once
#include "CoreMinimal.h"
#include "EBtlMesWindowDispState.h"
#include "BtlMesChoiceInfo.generated.h"

USTRUCT(BlueprintType)
struct FBtlMesChoiceInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBtlMesWindowDispState DispState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TextId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSelectable;
    
    KIZOK_API FBtlMesChoiceInfo();
};

