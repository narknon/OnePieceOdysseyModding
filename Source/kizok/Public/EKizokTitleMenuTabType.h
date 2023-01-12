#pragma once
#include "CoreMinimal.h"
#include "EKizokTitleMenuTabType.generated.h"

UENUM(BlueprintType)
enum class EKizokTitleMenuTabType : uint8 {
    NewGame,
    LoadGame,
    Store,
    Config,
    ConfigInDemo,
};

