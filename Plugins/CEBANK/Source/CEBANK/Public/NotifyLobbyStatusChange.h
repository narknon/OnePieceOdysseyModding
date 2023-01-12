#pragma once
#include "CoreMinimal.h"
#include "AProtocolMessage.h"
#include "NotifyLobbyStatusChange.generated.h"

UCLASS(Blueprintable)
class UNotifyLobbyStatusChange : public UAProtocolMessage {
    GENERATED_BODY()
public:
    UNotifyLobbyStatusChange();
};

