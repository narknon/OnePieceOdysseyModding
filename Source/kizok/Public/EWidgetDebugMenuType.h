#pragma once
#include "CoreMinimal.h"
#include "EWidgetDebugMenuType.generated.h"

UENUM(BlueprintType)
enum class EWidgetDebugMenuType : uint8 {
    TOP,
    SPEED,
    FLAGS,
    CAMERA,
    WARP,
    WARP_REGION,
    WARP_POINT,
    LOOK,
    GAMESYSTEM,
    GAMEPLAYLOAD,
    GAMEPLAYSAVE,
    FLAGDEBUG,
    KEY_CONFIG,
    FIELD_ENEMY,
    DELETESAVEFILE,
    SCREEN_RESOLUTION,
    LANGUAGE,
    ANIMATION,
    WEAPON,
    CROSS_SIMULATION,
    DUMMY1,
    DUMMY2,
    DUMMY3,
    DUMMY4,
};

