#pragma once
#include "CoreMinimal.h"
#include "EFPSTargetType.h"
#include "Engine/TriggerBox.h"
#include "KizokFPSTargetBlockingBox.generated.h"

UCLASS(Blueprintable)
class KIZOK_API AKizokFPSTargetBlockingBox : public ATriggerBox {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EFPSTargetType> BlockingFPSTargetType;
    
public:
    AKizokFPSTargetBlockingBox();
};

