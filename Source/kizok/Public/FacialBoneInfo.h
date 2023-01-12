#pragma once
#include "CoreMinimal.h"
#include "EFacialRig.h"
#include "FacialBoneInfo.generated.h"

USTRUCT(BlueprintType)
struct FFacialBoneInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFacialRig Rig;
    
    KIZOK_API FFacialBoneInfo();
};

