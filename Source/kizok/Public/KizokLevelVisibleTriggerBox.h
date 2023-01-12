#pragma once
#include "CoreMinimal.h"
#include "Engine/TriggerBox.h"
#include "KizokLevelVisibleTriggerBox.generated.h"

UCLASS(Blueprintable)
class KIZOK_API AKizokLevelVisibleTriggerBox : public ATriggerBox {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> visibleLevelName;
    
public:
    AKizokLevelVisibleTriggerBox();
};

