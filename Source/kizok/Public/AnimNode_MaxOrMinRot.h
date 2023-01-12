#pragma once
#include "CoreMinimal.h"
#include "AnimNode_CalcAngleBase.h"
#include "UObject/NoExportTypes.h"
#include "AnimNode_MaxOrMinRot.generated.h"

USTRUCT(BlueprintType)
struct KIZOK_API FAnimNode_MaxOrMinRot : public FAnimNode_CalcAngleBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> DisplayNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRotator> DisplayParams;
    
    FAnimNode_MaxOrMinRot();
};

