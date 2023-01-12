#pragma once
#include "CoreMinimal.h"
#include "AProtocolMessage.h"
#include "NotifyRoomStatusChange.generated.h"

UCLASS(Blueprintable)
class UNotifyRoomStatusChange : public UAProtocolMessage {
    GENERATED_BODY()
public:
    UNotifyRoomStatusChange();
};

