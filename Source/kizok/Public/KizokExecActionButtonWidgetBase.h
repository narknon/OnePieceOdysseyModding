#pragma once
#include "CoreMinimal.h"
#include "KizokButtonWidget.h"
#include "KizokExecActionButtonWidgetBase.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class KIZOK_API UKizokExecActionButtonWidgetBase : public UKizokButtonWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> ActionNameList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> AxisNameList;
    
public:
    UKizokExecActionButtonWidgetBase();
};

