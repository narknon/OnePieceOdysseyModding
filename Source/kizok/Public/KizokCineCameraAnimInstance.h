#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "KizokCineCameraAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class KIZOK_API UKizokCineCameraAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AdditiveAlpha1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AdditiveAlpha2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AdditiveAlpha3;
    
    UKizokCineCameraAnimInstance();
};

