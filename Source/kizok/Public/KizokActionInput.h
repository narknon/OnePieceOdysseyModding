#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "KizokActionInput.generated.h"

class UInputComponent;

UCLASS(Blueprintable)
class KIZOK_API UKizokActionInput : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInputComponent* InputComponent;
    
public:
    UKizokActionInput();
};

