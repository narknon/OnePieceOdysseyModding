#pragma once
#include "CoreMinimal.h"
#include "AProtocolMessage.h"
#include "MatchingApply.generated.h"

UCLASS(Blueprintable)
class UMatchingApply : public UAProtocolMessage {
    GENERATED_BODY()
public:
    UMatchingApply();
};

