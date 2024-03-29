#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "AtomParameterComponent.generated.h"

class UAtomSoundObject;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class CRIWARERUNTIME_API UAtomParameterComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAtomSoundObject* SoundObject;
    
    UAtomParameterComponent();
};

