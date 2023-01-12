#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "KizokLoopAnimBlendParamTableRow.generated.h"

class UAnimSequence;

USTRUCT(BlueprintType)
struct FKizokLoopAnimBlendParamTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAnimSequence> AnimSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Rate;
    
    KIZOK_API FKizokLoopAnimBlendParamTableRow();
};

