#pragma once
#include "CoreMinimal.h"
#include "EKizokMiniMapState.generated.h"

UENUM(BlueprintType)
enum class EKizokMiniMapState : uint8 {
    Hidden,
    OpenAnime,
    Show,
    CloseAnime,
};

