#pragma once
#include "CoreMinimal.h"
#include "EWidgetDebugExecType.h"
#include "UObject/NoExportTypes.h"
#include "Components/Button.h"
#include "KizokWidgetDebuggerExecButton.generated.h"

class UKizokSubMenuWidget;

UCLASS(Blueprintable)
class KIZOK_API UKizokWidgetDebuggerExecButton : public UButton {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UKizokSubMenuWidget* m_parentWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWidgetDebugExecType m_execType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_param;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_subMenuPlace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D ButtonSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D ButtonOffset;
    
    UKizokWidgetDebuggerExecButton();
    UFUNCTION(BlueprintCallable)
    void OnExecButtonClicked1();
    
    UFUNCTION(BlueprintCallable)
    void MyOnHovered();
    
};

