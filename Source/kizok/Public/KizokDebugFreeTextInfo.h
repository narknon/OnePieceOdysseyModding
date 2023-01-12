#pragma once
#include "CoreMinimal.h"
#include "KizokDebugFreeTextInfo.generated.h"

class UKizokTextBlock;

USTRUCT(BlueprintType)
struct FKizokDebugFreeTextInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UKizokTextBlock* TextBlock;
    
    KIZOK_API FKizokDebugFreeTextInfo();
};

