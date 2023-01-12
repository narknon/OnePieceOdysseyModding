#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "KizokBaseAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class KIZOK_API UKizokBaseAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
    UKizokBaseAnimInstance();
};

