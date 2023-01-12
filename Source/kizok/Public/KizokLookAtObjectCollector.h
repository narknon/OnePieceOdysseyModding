#pragma once
#include "CoreMinimal.h"
#include "ActorWithTag.h"
#include "UObject/Object.h"
#include "KizokLookAtObjectCollector.generated.h"

UCLASS(Blueprintable)
class UKizokLookAtObjectCollector : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FActorWithTag> m_ActorWithTags;
    
public:
    UKizokLookAtObjectCollector();
};

