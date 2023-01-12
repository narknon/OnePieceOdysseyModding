#pragma once
#include "CoreMinimal.h"
#include "EKizokLvsMasterConfigType.h"
#include "KizokLvsEditorMasterConfigData.generated.h"

class UWorld;

USTRUCT(BlueprintType)
struct KIZOK_API FKizokLvsEditorMasterConfigData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UWorld> Level;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKizokLvsMasterConfigType Type;
    
    FKizokLvsEditorMasterConfigData();
};

