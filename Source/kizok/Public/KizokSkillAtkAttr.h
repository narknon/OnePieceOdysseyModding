#pragma once
#include "CoreMinimal.h"
#include "EAtkAttrIcon.h"
#include "KizokSkillAtkAttr.generated.h"

USTRUCT(BlueprintType)
struct FKizokSkillAtkAttr {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAtkAttrIcon Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Name;
    
    KIZOK_API FKizokSkillAtkAttr();
};

