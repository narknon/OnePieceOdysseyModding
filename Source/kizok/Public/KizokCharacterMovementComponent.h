#pragma once
#include "CoreMinimal.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "KizokCharacterMovementComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class KIZOK_API UKizokCharacterMovementComponent : public UCharacterMovementComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FixedMaxWalkSpeed;
    
public:
    UKizokCharacterMovementComponent();
    UFUNCTION(BlueprintCallable)
    void SetFixedMaxWalkSpeed(float Speed);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetFixedMaxWalkSpeed() const;
    
};

