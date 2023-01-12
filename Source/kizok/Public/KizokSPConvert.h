#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "KizokSPConvert.generated.h"

USTRUCT(BlueprintType)
struct FKizokSPConvert : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LevelMargin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Amplification;
    
    KIZOK_API FKizokSPConvert();
};

