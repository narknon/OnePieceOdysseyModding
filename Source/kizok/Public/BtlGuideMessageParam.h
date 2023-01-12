#pragma once
#include "CoreMinimal.h"
#include "KizokButtonGuideSettingData.h"
#include "BtlGuideMessageParam.generated.h"

USTRUCT(BlueprintType)
struct FBtlGuideMessageParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TextId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKizokButtonGuideSettingData> ButtonList;
    
    KIZOK_API FBtlGuideMessageParam();
};

