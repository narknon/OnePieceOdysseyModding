#pragma once
#include "CoreMinimal.h"
#include "ERayStartLocationKind.generated.h"

UENUM()
enum class ERayStartLocationKind : int32 {
    BoneReference,
    Location,
};

