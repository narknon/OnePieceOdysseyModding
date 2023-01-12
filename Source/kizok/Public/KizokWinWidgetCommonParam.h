#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "KizokWinWidgetCommonParam.generated.h"

UCLASS(Blueprintable)
class KIZOK_API UKizokWinWidgetCommonParam : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MouseCursorWaitTime;
    
public:
    UKizokWinWidgetCommonParam();
};

