#pragma once
#include "CoreMinimal.h"
#include "AProtocolMessage.h"
#include "MatchingComplete.generated.h"

UCLASS(Blueprintable)
class UMatchingComplete : public UAProtocolMessage {
    GENERATED_BODY()
public:
    UMatchingComplete();
};

