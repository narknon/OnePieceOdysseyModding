#pragma once
#include "CoreMinimal.h"
#include "KizokFieldPlayerBase.h"
#include "KizokFieldPlayerRobi.generated.h"

UCLASS(Blueprintable)
class AKizokFieldPlayerRobi : public AKizokFieldPlayerBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FreeAtkFleurSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FreeAtkFleurBlendIn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FreeAtkFleurBlendOut;
    
public:
    AKizokFieldPlayerRobi();
};

