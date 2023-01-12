#pragma once
#include "CoreMinimal.h"
#include "AProtocolMessage.h"
#include "MatchingStart.generated.h"

UCLASS(Blueprintable)
class UMatchingStart : public UAProtocolMessage {
    GENERATED_BODY()
public:
    UMatchingStart();
};

