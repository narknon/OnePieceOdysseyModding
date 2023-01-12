#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "KizokTableExpCalcAngleBase.h"
#include "UObject/NoExportTypes.h"
#include "KizokTableExpLerp2BoneAndClamp.generated.h"

USTRUCT(BlueprintType)
struct FKizokTableExpLerp2BoneAndClamp : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKizokTableExpCalcAngleBase BaseSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LerpAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector ClampMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector ClampMax;
    
    KIZOK_API FKizokTableExpLerp2BoneAndClamp();
};

