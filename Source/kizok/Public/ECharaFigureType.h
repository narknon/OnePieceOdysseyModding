#pragma once
#include "CoreMinimal.h"
#include "ECharaFigureType.generated.h"

UENUM(BlueprintType)
enum class ECharaFigureType : uint8 {
    CharaFigure_Normal,
    CharaFigure_Small,
    CharaFigure_Large,
    CharaFigure_MAX UMETA(Hidden),
};

