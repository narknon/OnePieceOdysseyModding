#pragma once
#include "CoreMinimal.h"
#include "BoneContainer.h"
#include "KongArmInfo.generated.h"

USTRUCT(BlueprintType)
struct KIZOK_API FKongArmInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FBoneReference UpperBone;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FBoneReference MiddleBone;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FBoneReference LowerBone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HandLiftOffset;
    
    FKongArmInfo();
};

