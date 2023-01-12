#pragma once
#include "CoreMinimal.h"
#include "EMaterialPriority.h"
#include "EMaterialParamType.h"
#include "UObject/NoExportTypes.h"
#include "KizokMaterialControl.generated.h"

USTRUCT(BlueprintType)
struct FKizokMaterialControl {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMaterialPriority Priority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMaterialParamType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor Color;
    
    KIZOK_API FKizokMaterialControl();
};

