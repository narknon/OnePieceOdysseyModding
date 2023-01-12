#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "KizokHelpMenuData.generated.h"

USTRUCT(BlueprintType)
struct FKizokHelpMenuData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath Picture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Title;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Info;
    
    KIZOK_API FKizokHelpMenuData();
};

