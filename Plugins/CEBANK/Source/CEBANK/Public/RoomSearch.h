#pragma once
#include "CoreMinimal.h"
#include "AProtocolMessage.h"
#include "RoomSearch.generated.h"

UCLASS(Blueprintable)
class URoomSearch : public UAProtocolMessage {
    GENERATED_BODY()
public:
    URoomSearch();
};

