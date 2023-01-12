#pragma once
#include "CoreMinimal.h"
#include "BoneControllers/AnimNode_SkeletalControlBase.h"
#include "AnimNode_CalcAngleBase.generated.h"

class UDataTable;

USTRUCT(BlueprintType)
struct KIZOK_API FAnimNode_CalcAngleBase : public FAnimNode_SkeletalControlBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* DataTable;
    
    FAnimNode_CalcAngleBase();
};

