#pragma once
#include "CoreMinimal.h"
#include "Components/PrimitiveComponent.h"
#include "EnlightenSystemBoundsComponent.generated.h"

class UEnlightenSystem;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UEnlightenSystemBoundsComponent : public UPrimitiveComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEnlightenSystem* System;
    
    UEnlightenSystemBoundsComponent();
};

