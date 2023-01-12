#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EKizokAutomationTestCmdType.h"
#include "KizokAutomationTestCase.generated.h"

USTRUCT(BlueprintType)
struct KIZOK_API FKizokAutomationTestCase : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKizokAutomationTestCmdType Cmd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Arg;
    
    FKizokAutomationTestCase();
};

