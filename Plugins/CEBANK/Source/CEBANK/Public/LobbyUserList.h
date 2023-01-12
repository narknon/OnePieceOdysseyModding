#pragma once
#include "CoreMinimal.h"
#include "AProtocolMessage.h"
#include "LobbyUserList.generated.h"

UCLASS(Blueprintable)
class ULobbyUserList : public UAProtocolMessage {
    GENERATED_BODY()
public:
    ULobbyUserList();
};

