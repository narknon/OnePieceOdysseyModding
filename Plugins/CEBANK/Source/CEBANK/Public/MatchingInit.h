#pragma once
#include "CoreMinimal.h"
#include "AProtocolMessage.h"
#include "MatchingInit.generated.h"

UCLASS(Blueprintable)
class UMatchingInit : public UAProtocolMessage {
    GENERATED_BODY()
public:
    UMatchingInit();
};

