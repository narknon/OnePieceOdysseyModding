#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "AXIS_PARAM.h"
#include "Animation/AnimData/BoneMaskFilter.h"
#include "KizokTableExpBlendPoseEval.generated.h"

class UBlendSpace;

USTRUCT(BlueprintType)
struct FKizokTableExpBlendPoseEval : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBlendSpace* BlendSpaceAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName RotateSampleBone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName RotateBaseBone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AXIS_PARAM SourceAxisParamX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SourceMultiParamX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AXIS_PARAM SourceAxisParamY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SourceMultiParamY;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FInputBlendPose TargetBone;
    
    KIZOK_API FKizokTableExpBlendPoseEval();
};

