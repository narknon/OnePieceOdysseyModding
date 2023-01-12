#pragma once
#include "CoreMinimal.h"
#include "AnimNode_CalcAngleBase.h"
#include "AnimNode_RotCancel.generated.h"

USTRUCT(BlueprintType)
struct KIZOK_API FAnimNode_RotCancel : public FAnimNode_CalcAngleBase {
    GENERATED_BODY()
public:
    FAnimNode_RotCancel();
};

