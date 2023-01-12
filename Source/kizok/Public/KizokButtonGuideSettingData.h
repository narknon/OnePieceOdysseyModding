#pragma once
#include "CoreMinimal.h"
#include "KizokButtonGuideSettingData.generated.h"

USTRUCT(BlueprintType)
struct FKizokButtonGuideSettingData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ButtonGuideId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TextId;
    
    KIZOK_API FKizokButtonGuideSettingData();
};

