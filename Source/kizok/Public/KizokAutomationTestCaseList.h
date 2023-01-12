#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "KizokAutomationTestCaseList.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class KIZOK_API UKizokAutomationTestCaseList : public UDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, TSoftObjectPtr<UDataTable>> TestCaseList;
    
public:
    UKizokAutomationTestCaseList();
};

