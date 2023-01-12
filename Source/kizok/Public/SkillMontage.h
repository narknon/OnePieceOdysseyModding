#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "SkillMontage.generated.h"

USTRUCT(BlueprintType)
struct FSkillMontage : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Folder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Montage;
    
    KIZOK_API FSkillMontage();
};

