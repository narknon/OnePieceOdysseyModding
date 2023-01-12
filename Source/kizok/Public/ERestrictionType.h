#pragma once
#include "CoreMinimal.h"
#include "ERestrictionType.generated.h"

UENUM(BlueprintType)
enum class ERestrictionType : uint8 {
    DefaultValue,
    REST_MOVE,
    REST_CAMERA,
    REST_BUTTON = 0x4,
    REST_MENU = 0x8,
    REST_CHARA_CHANGE = 0x10,
    REST_FPSMODE = 0x20,
};

