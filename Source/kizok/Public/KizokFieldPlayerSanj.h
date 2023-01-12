#pragma once
#include "CoreMinimal.h"
#include "KizokFieldPlayerBase.h"
#include "KizokFieldPlayerSanj.generated.h"

UCLASS(Blueprintable)
class AKizokFieldPlayerSanj : public AKizokFieldPlayerBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FreeAtkKickSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FreeAtkKickBlendIn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FreeAtkKickBlendOut;
    
public:
    AKizokFieldPlayerSanj();
};

