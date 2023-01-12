#pragma once
#include "CoreMinimal.h"
#include "ECharaFootType.h"
#include "ECharaFigureType.h"
#include "KizokPhysiqueParam.generated.h"

USTRUCT(BlueprintType)
struct FKizokPhysiqueParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECharaFigureType FigureType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECharaFootType FootType;
    
    KIZOK_API FKizokPhysiqueParam();
};

