#pragma once
#include "CoreMinimal.h"
#include "KizokFlagDataCommon.h"
#include "KizokSaveCheckSumData.generated.h"

UCLASS(Blueprintable)
class KIZOK_API UKizokSaveCheckSumData : public UKizokFlagDataCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> m_checkSumData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> m_loadedSumData;
    
    UKizokSaveCheckSumData();
};

