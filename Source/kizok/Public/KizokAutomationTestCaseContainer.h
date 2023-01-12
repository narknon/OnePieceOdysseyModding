#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "KizokAutomationTestCaseContainer.generated.h"

class UKizokAutomationTestCaseList;

UCLASS(Blueprintable)
class KIZOK_API UKizokAutomationTestCaseContainer : public UDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UKizokAutomationTestCaseList>> TestCaseLists;
    
public:
    UKizokAutomationTestCaseContainer();
};

