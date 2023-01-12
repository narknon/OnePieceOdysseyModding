#pragma once
#include "CoreMinimal.h"
#include "PLAYER_ID.h"
#include "KeyAssignTarget.generated.h"

USTRUCT(BlueprintType)
struct FKeyAssignTarget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Index;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<PLAYER_ID> PlayerIdList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SkillID;
    
    KIZOK_API FKeyAssignTarget();
};

