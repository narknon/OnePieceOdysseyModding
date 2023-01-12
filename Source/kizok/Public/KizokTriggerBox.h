#pragma once
#include "CoreMinimal.h"
#include "Engine/TriggerBox.h"
#include "KizokTriggerBox.generated.h"

class UKizokDebugComponent;
class UKizokTextRenderComponent;

UCLASS(Blueprintable)
class KIZOK_API AKizokTriggerBox : public ATriggerBox {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 IsEditorTickEnable: 1;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UKizokDebugComponent* DebugComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UKizokTextRenderComponent* TextComponent;
    
public:
    AKizokTriggerBox();
};

