#pragma once
#include "CoreMinimal.h"
#include "BoneContainer.h"
#include "QuadrupedInfo.generated.h"

USTRUCT(BlueprintType)
struct KIZOK_API FQuadrupedInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FBoneReference MiddleBone;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FBoneReference LowerBone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FootLiftOffset;
    
    FQuadrupedInfo();
};

