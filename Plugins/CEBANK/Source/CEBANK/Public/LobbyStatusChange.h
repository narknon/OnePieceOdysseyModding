#pragma once
#include "CoreMinimal.h"
#include "AProtocolMessage.h"
#include "LobbyStatusChange.generated.h"

UCLASS(Blueprintable)
class ULobbyStatusChange : public UAProtocolMessage {
    GENERATED_BODY()
public:
    ULobbyStatusChange();
};

