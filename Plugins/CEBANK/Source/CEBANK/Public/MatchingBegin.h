#pragma once
#include "CoreMinimal.h"
#include "AProtocolMessage.h"
#include "MatchingBegin.generated.h"

UCLASS(Blueprintable)
class UMatchingBegin : public UAProtocolMessage {
    GENERATED_BODY()
public:
    UMatchingBegin();
};

