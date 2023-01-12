#pragma once
#include "CoreMinimal.h"
#include "EBtlSituationDispType.generated.h"

UENUM(BlueprintType)
enum class EBtlSituationDispType : uint8 {
    Title,
    FrameWidget,
    InfoText,
    MaxNum,
    None,
};

