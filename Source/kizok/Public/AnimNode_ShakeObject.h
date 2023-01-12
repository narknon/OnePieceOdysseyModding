#pragma once
#include "CoreMinimal.h"
#include "BoneControllers/AnimNode_SkeletalControlBase.h"
#include "KizokBoneReference.h"
#include "AnimNode_ShakeObject.generated.h"

USTRUCT(BlueprintType)
struct KIZOK_API FAnimNode_ShakeObject : public FAnimNode_SkeletalControlBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKizokBoneReference IKBone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TestName;
    
    FAnimNode_ShakeObject();
};

