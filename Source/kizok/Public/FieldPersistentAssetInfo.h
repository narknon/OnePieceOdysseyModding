#pragma once
#include "CoreMinimal.h"
#include "FieldPersistentAssetInfo.generated.h"

class UPrimaryAssetLabel;

USTRUCT(BlueprintType)
struct KIZOK_API FFieldPersistentAssetInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UPrimaryAssetLabel> Asset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPreload;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPLPersistent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUnloadAtCamp;
    
    FFieldPersistentAssetInfo();
};

