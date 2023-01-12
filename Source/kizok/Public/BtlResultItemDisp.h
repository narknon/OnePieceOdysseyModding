#pragma once
#include "CoreMinimal.h"
#include "EBtlResultItemIconType.h"
#include "BtlResultItemInfo.h"
#include "BtlResultItemDisp.generated.h"

class UKizokUserWidget;

USTRUCT(BlueprintType)
struct FBtlResultItemDisp {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBtlResultItemInfo Info;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBtlResultItemIconType IconType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 Category;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UKizokUserWidget* ListWidget;
    
    KIZOK_API FBtlResultItemDisp();
};

