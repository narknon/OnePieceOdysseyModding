#pragma once
#include "CoreMinimal.h"
#include "KeyAssignTarget.h"
#include "KeyAssignTargetList.generated.h"

USTRUCT(BlueprintType)
struct FKeyAssignTargetList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKeyAssignTarget> TargetList;
    
    KIZOK_API FKeyAssignTargetList();
};

