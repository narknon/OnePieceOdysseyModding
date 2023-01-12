#pragma once
#include "CoreMinimal.h"
#include "EKizokMessageTableType.generated.h"

UENUM(BlueprintType)
enum class EKizokMessageTableType : uint8 {
    Message,
    MessageAction,
    MessageControl,
    FieldMessage,
    FieldMessageAction,
    TalkOnTheWay,
    TalkOnTheWayAction,
    TalkOnTheWayFlag,
    Num,
};

