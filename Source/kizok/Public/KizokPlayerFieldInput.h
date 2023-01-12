#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "KizokPlayerFieldInput.generated.h"

class UInputComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class KIZOK_API UKizokPlayerFieldInput : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInputComponent* InputComponent;
    
public:
    UKizokPlayerFieldInput();
};

