#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "KizokAutomationFastTravelData.generated.h"

USTRUCT(BlueprintType)
struct KIZOK_API FKizokAutomationFastTravelData : public FTableRowBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TravelPointName;
    
public:
    FKizokAutomationFastTravelData();
};

