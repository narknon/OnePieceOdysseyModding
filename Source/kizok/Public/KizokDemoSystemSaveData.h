#pragma once
#include "CoreMinimal.h"
#include "KizokDemoSystemData.h"
#include "KizokDemoSystemSaveData.generated.h"

USTRUCT(BlueprintType)
struct FKizokDemoSystemSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKizokDemoSystemData Data;
    
    KIZOK_API FKizokDemoSystemSaveData();
};

