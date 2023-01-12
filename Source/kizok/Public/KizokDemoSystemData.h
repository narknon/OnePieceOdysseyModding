#pragma once
#include "CoreMinimal.h"
#include "KizokDemoSystemData.generated.h"

USTRUCT(BlueprintType)
struct FKizokDemoSystemData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAgreedEULA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AgreedPPVersion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AgreedCeBankVersion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAgreedCeBank;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 Reserved[118];
    
    KIZOK_API FKizokDemoSystemData();
};

