#pragma once
#include "CoreMinimal.h"
#include "EWidgetDebugExecType.generated.h"

UENUM(BlueprintType)
enum class EWidgetDebugExecType : uint8 {
    CHANGEMENU,
    MYOK,
    MYCANCEL,
    MYSYSTEM,
    WARP_REGION_COMMAND,
    WARP_POINT_COMMAND,
    BATTLESTART_COMMAND,
    QUITGAME_COMMAND,
    KEY_CONFIG_COMMAND,
    TESTEXEC1,
    TESTEXEC2,
    TESTEXEC3,
    UPDATETEST_COMMAND,
    LOADPLAY_COMMAND,
    SAVEPLAY_COMMAND,
    FLAGDEBUG_COMMAND,
    DELETESAVEFILE_COMMAND,
    MOTION_VIEWER,
    RESET,
    START_ANIM,
    START_AND_STOP_ANIM,
    ALL_START_ANIM,
    ALL_START_AND_STOP_ANIM,
};

