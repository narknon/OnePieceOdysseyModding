#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ResultCoord.generated.h"

USTRUCT(BlueprintType)
struct FResultCoord {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Radius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform TRS;
    
    KIZOK_API FResultCoord();
};

