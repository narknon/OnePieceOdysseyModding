#pragma once
#include "CoreMinimal.h"
#include "AnimNode_CalcAngleBase.h"
#include "UObject/NoExportTypes.h"
#include "AnimNode_Lerp2BoneAndClamp.generated.h"

USTRUCT(BlueprintType)
struct KIZOK_API FAnimNode_Lerp2BoneAndClamp : public FAnimNode_CalcAngleBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> DisplayNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRotator> DisplayParams;
    
    FAnimNode_Lerp2BoneAndClamp();
};

