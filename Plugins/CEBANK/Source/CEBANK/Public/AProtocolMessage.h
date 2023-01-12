#pragma once
#include "CoreMinimal.h"
#include "NetMessage.h"
#include "AProtocolMessage.generated.h"

UCLASS(Blueprintable)
class CEBANK_API UAProtocolMessage : public UNetMessage {
    GENERATED_BODY()
public:
    UAProtocolMessage();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString DumpRequest(const FString& prefix);
    
};

