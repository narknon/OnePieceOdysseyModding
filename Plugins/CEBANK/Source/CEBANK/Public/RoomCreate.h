#pragma once
#include "CoreMinimal.h"
#include "AProtocolMessage.h"
#include "RoomCreate.generated.h"

UCLASS(Blueprintable)
class URoomCreate : public UAProtocolMessage {
    GENERATED_BODY()
public:
    URoomCreate();
};

