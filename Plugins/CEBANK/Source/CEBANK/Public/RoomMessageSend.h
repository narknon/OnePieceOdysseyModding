#pragma once
#include "CoreMinimal.h"
#include "AProtocolMessage.h"
#include "RoomMessageSend.generated.h"

UCLASS(Blueprintable)
class URoomMessageSend : public UAProtocolMessage {
    GENERATED_BODY()
public:
    URoomMessageSend();
};

