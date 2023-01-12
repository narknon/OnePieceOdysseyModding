#pragma once
#include "CoreMinimal.h"
#include "FieldPersistentAssetInfo.h"
#include "FieldPersistentAssetData.generated.h"

USTRUCT(BlueprintType)
struct KIZOK_API FFieldPersistentAssetData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFieldPersistentAssetInfo> Infos;
    
    FFieldPersistentAssetData();
};

