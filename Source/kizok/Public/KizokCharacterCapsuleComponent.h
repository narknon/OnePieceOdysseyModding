#pragma once
#include "CoreMinimal.h"
#include "Components/CapsuleComponent.h"
#include "KizokCharacterCapsuleComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class KIZOK_API UKizokCharacterCapsuleComponent : public UCapsuleComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLookAtTargetEnable;
    
    UKizokCharacterCapsuleComponent();
};

