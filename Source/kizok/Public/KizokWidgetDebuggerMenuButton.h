#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/Button.h"
#include "KizokWidgetDebuggerMenuButton.generated.h"

UCLASS(Blueprintable)
class KIZOK_API UKizokWidgetDebuggerMenuButton : public UButton {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D ButtonSize;
    
    UKizokWidgetDebuggerMenuButton();
};

