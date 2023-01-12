#pragma once
#include "CoreMinimal.h"
#include "ESofdec2PlayerTrack.generated.h"

UENUM(BlueprintType)
enum class ESofdec2PlayerTrack : uint8 {
    Audio,
    Caption,
    Metadata,
    Script,
    Subtitle,
    Text,
    Video,
};

