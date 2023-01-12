#pragma once
#include "CoreMinimal.h"
#include "BoneContainer.h"
#include "LizardInfo.generated.h"

USTRUCT(BlueprintType)
struct KIZOK_API FLizardInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FBoneReference UpperBone;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FBoneReference MiddleBone;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FBoneReference LowerBone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FootLiftOffset;
    
    FLizardInfo();
};

