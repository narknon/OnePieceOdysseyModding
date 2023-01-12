#pragma once
#include "CoreMinimal.h"
#include "MWExtendSkillParam.generated.h"

USTRUCT(BlueprintType)
struct FMWExtendSkillParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SkillRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SkillID;
    
    KIZOK_API FMWExtendSkillParam();
};

