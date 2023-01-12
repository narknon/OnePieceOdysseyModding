#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "FieldDebugAsset.generated.h"

class AActor;
class UDataTable;
class UPrimaryAssetLabel;

UCLASS(Blueprintable)
class KIZOK_API UFieldDebugAsset : public UDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AActor> DebugFuncLib;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UDataTable> MainStoryDataTableAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* DebugFuncLibInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* MainStoryDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UPrimaryAssetLabel*> Experimentalassets;
    
public:
    UFieldDebugAsset();
};

