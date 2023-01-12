#pragma once
#include "CoreMinimal.h"
#include "ASP_SKILLTYPES.generated.h"

UENUM(BlueprintType)
enum class ASP_SKILLTYPES : uint8 {
    INVALID,
    NORMAL,
    MAGIC,
    COUNTER,
    RUNATTACK,
    STEAL,
    AVOID,
    HEAL,
    CURE,
    BUFF,
    DEBUFF,
    HAPPYPUNCHI,
    USOATTACK,
    LOVEHURRICANE,
    MONSTER,
    GRAPP,
    GEAR2,
    ROOM,
    SHAMBLES,
    SUICIDE,
    SUMMON,
    REPAIR,
    FIELD,
    KIZUNANORMAL,
    KIZUNAHEAL,
    KIZUNAMOVE,
    ASP_MAX UMETA(Hidden),
};

