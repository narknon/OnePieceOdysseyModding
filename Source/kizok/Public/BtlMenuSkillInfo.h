#pragma once
#include "CoreMinimal.h"
#include "EBtlMenuTargetRange.h"
#include "ASP_SKILLTYPES.h"
#include "KizokDispSkillList.h"
#include "BtlMenuSkillInfo.generated.h"

USTRUCT(BlueprintType)
struct FBtlMenuSkillInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASP_SKILLTYPES ActionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUsable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Description;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBtlMenuTargetRange TargetType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKizokDispSkillList List;
    
    KIZOK_API FBtlMenuSkillInfo();
};

