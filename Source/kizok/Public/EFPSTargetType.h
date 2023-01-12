#pragma once
#include "CoreMinimal.h"
#include "EFPSTargetType.generated.h"

UENUM(BlueprintType)
enum class EFPSTargetType : uint8 {
    FPS_NONE,
    FPS_GGROCKET,
    FPS_ATTACK,
    FPS_ITEM,
    FPS_ENEMY,
    FPS_WALLCLIMB,
    FPS_QUEST_GGR,
    FPS_BIRDNEST,
    FPS_LADDER,
    FPS_COMMON,
    FPS_MAX UMETA(Hidden),
};

