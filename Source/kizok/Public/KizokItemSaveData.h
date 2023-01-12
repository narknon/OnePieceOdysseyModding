#pragma once
#include "CoreMinimal.h"
#include "KizokItemSaveData.generated.h"

USTRUCT(BlueprintType)
struct FKizokItemSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Num;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 Reserved[28];
    
    KIZOK_API FKizokItemSaveData();
};

