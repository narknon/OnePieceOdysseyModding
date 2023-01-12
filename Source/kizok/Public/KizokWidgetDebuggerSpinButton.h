#pragma once
#include "CoreMinimal.h"
#include "EWidgetDebugExecType.h"
#include "UObject/NoExportTypes.h"
#include "Components/Button.h"
#include "KizokWidgetDebuggerSpinButton.generated.h"

class UKizokDebuggerSpinSet;

UCLASS(Blueprintable)
class KIZOK_API UKizokWidgetDebuggerSpinButton : public UButton {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKizokDebuggerSpinSet* m_parentSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWidgetDebugExecType m_execType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_param;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D ButtonSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D SpinOffset;
    
    UKizokWidgetDebuggerSpinButton();
    UFUNCTION(BlueprintCallable)
    void OnSpinButtonClicked();
    
    UFUNCTION(BlueprintCallable)
    void MyOnHovered();
    
};

