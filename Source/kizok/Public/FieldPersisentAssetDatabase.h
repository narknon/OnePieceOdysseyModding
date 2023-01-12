#pragma once
#include "CoreMinimal.h"
#include "FieldPersistentAssetData.h"
#include "Engine/DataAsset.h"
#include "FieldPersisentAssetDatabase.generated.h"

UCLASS(Blueprintable)
class KIZOK_API UFieldPersisentAssetDatabase : public UDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FFieldPersistentAssetData> dataset;
    
public:
    UFieldPersisentAssetDatabase();
};

