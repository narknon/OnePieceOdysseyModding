#pragma once
#include "CoreMinimal.h"
#include "AProtocolMessage.h"
#include "LobbyEntry.generated.h"

UCLASS(Blueprintable)
class ULobbyEntry : public UAProtocolMessage {
    GENERATED_BODY()
public:
    ULobbyEntry();
};

