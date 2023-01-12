#pragma once
#include "CoreMinimal.h"
#include "KizokFieldPlayerBase.h"
#include "KizokFieldPlayerNami.generated.h"

UCLASS(Blueprintable)
class AKizokFieldPlayerNami : public AKizokFieldPlayerBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FreeAtkTactSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FreeAtkTactBlendIn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FreeAtkTactBlendOut;
    
public:
    AKizokFieldPlayerNami();
};

