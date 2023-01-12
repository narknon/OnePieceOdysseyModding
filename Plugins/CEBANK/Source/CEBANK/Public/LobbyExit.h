#pragma once
#include "CoreMinimal.h"
#include "AProtocolMessage.h"
#include "LobbyExit.generated.h"

UCLASS(Blueprintable)
class ULobbyExit : public UAProtocolMessage {
    GENERATED_BODY()
public:
    ULobbyExit();
};

