#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "KizokMoveInput.generated.h"

class UInputComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class KIZOK_API UKizokMoveInput : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInputComponent* InputComponent;
    
public:
    UKizokMoveInput();
};

